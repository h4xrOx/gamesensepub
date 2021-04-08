#include "gamesense.h"
#include "threading/CParallelProcessor.h"

Aimbot g_aimbot{ };

void AimPlayer::OnNetUpdate( Player* player ) {
	bool reset = ( player->m_lifeState( ) == LIFE_DEAD || !player->enemy( g_cl.m_local ) );

	if ( reset ) {
		m_missed_shots = 0;
		m_last_resolve = 0;

		return;
	}

	// update player ptr.
	m_player = player;
}

void AimPlayer::OnRoundStart( Player* player ) {
	m_player = player;
	m_shots = 0;
	m_missed_shots = 0;
	m_last_resolve = 0;
	m_delta = 0;

	m_hitboxes.clear( );

	// IMPORTANT: DO NOT CLEAR LAST HIT SHIT.
}

void AimPlayer::CalculateHitboxData( C_Hitbox* rtn, Player* ent, int ihitbox, matrix3x4_t* matrix )
{
	if ( ihitbox < 0 || ihitbox > 19 ) return;

	if ( !ent ) return;

	const auto model = ent->GetModel( );

	if ( !model )
		return;

	auto pStudioHdr = g_csgo.m_model_info->GetStudioModel( model );

	if ( !pStudioHdr )
		return;

	auto hitbox = pStudioHdr->GetHitbox( ihitbox, 0 );

	if ( !hitbox )
		return;

	const auto is_capsule = hitbox->m_radius != -1.f;

	vec3_t min, max;
	if ( is_capsule ) {
		math::VectorTransform( hitbox->m_mins, matrix[ hitbox->m_bone ], min );
		math::VectorTransform( hitbox->m_maxs, matrix[ hitbox->m_bone ], max );
	}
	else
	{
		math::VectorTransform( math::VectorRotate( hitbox->m_mins, hitbox->m_angle ), matrix[ hitbox->m_bone ], min );
		math::VectorTransform( math::VectorRotate( hitbox->m_maxs, hitbox->m_angle ), matrix[ hitbox->m_bone ], max );
	}

	rtn->hitboxID = ihitbox;
	rtn->isOBB = !is_capsule;
	rtn->radius = hitbox->m_radius;
	rtn->mins = min;
	rtn->maxs = max;
	rtn->bone = hitbox->m_bone;
}

bool AimPlayer::CanSafepoint( LagComp::LagRecord_t* record, vec3_t aimpoint, int hitbox ) {

	vec3_t Eyepos;
	g_cl.m_local->EyePosition( &Eyepos );

	vec3_t angle = math::CalcAngle( Eyepos, aimpoint );
	vec3_t forward;
	math::AngleVectors( { angle.x, angle.y, angle.z }, &forward );
	auto end = Eyepos + forward * 8092.f;

	C_Hitbox box1; CalculateHitboxData( &box1, record->m_pEntity, hitbox, record->left_matrix );
	C_Hitbox box2; CalculateHitboxData( &box2, record->m_pEntity, hitbox, record->right_matrix );
	C_Hitbox box3; CalculateHitboxData( &box3, record->m_pEntity, hitbox, record->center_matrix );

	auto overlaps = box1.isOBB || box2.isOBB || box3.isOBB;

	if ( overlaps ) {
		math::VectorITransform( Eyepos, record->left_matrix[ box1.bone ], box1.mins );
		math::VectorIRotate( end, record->left_matrix[ box1.bone ], box1.maxs );

		math::VectorITransform( Eyepos, record->right_matrix[ box2.bone ], box2.mins );
		math::VectorIRotate( end, record->right_matrix[ box2.bone ], box2.maxs );

		math::VectorITransform( Eyepos, record->center_matrix[ box3.bone ], box3.mins );
		math::VectorIRotate( end, record->center_matrix[ box3.bone ], box3.maxs );
	}

	auto hits = 0;

	if ( overlaps ? math::IntersectBB( Eyepos, end, box1.mins, box1.maxs ) : math::Intersect( Eyepos, end, box1.mins, box1.maxs, box1.radius ) )
		++hits;
	if ( overlaps ? math::IntersectBB( Eyepos, end, box2.mins, box2.maxs ) : math::Intersect( Eyepos, end, box2.mins, box2.maxs, box2.radius ) )
		++hits;
	if ( overlaps ? math::IntersectBB( Eyepos, end, box3.mins, box3.maxs ) : math::Intersect( Eyepos, end, box3.mins, box3.maxs, box3.radius ) )
		++hits;

	return ( hits >= 3 );
}

void AimPlayer::SetupHitboxes( LagComp::LagRecord_t* record, bool history ) {
	if ( !record )
		return;

	// reset hitboxes.
	m_hitboxes.clear( );

	if ( g_cl.m_weapon_id == ZEUS ) {
		m_hitboxes.push_back( { HITBOX_BODY, HitscanMode::PREFER, false } );
		return;
	}

	if ( g_csgo.m_cvar->FindVar( HASH( "mp_damage_headshot_only" ) )->GetInt( ) ) {
		m_hitboxes.push_back( { HITBOX_HEAD, HitscanMode::PREFER, false } );
		return;
	}

	bool override_hitbox = g_aimbot.m_override_hitboxes;

	if ( override_hitbox ) {
		if ( g_aimbot.m_overriden_hitboxes.head )
			m_hitboxes.push_back( { HITBOX_HEAD, g_aimbot.m_priority_hitbox == 0 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );

		if ( g_aimbot.m_overriden_hitboxes.neck )
			m_hitboxes.push_back( { HITBOX_NECK, g_aimbot.m_priority_hitbox == 1 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );

		if ( g_aimbot.m_overriden_hitboxes.upper_chest )
			m_hitboxes.push_back( { HITBOX_UPPER_CHEST, g_aimbot.m_priority_hitbox == 2 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );

		if ( g_aimbot.m_overriden_hitboxes.body ) {
			m_hitboxes.push_back( { HITBOX_THORAX, g_aimbot.m_priority_hitbox == 3 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_CHEST, g_aimbot.m_priority_hitbox == 3 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}

		if ( g_aimbot.m_overriden_hitboxes.stomach ) {
			m_hitboxes.push_back( { HITBOX_PELVIS, g_aimbot.m_priority_hitbox == 4 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_BODY, g_aimbot.m_priority_hitbox == 4 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}

		if ( g_aimbot.m_overriden_hitboxes.legs ) {
			m_hitboxes.push_back( { HITBOX_L_THIGH, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_R_THIGH, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_L_CALF, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_R_CALF, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}

		if ( g_aimbot.m_overriden_hitboxes.feet ) {
			m_hitboxes.push_back( { HITBOX_L_FOOT, g_aimbot.m_priority_hitbox == 6 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_R_FOOT, g_aimbot.m_priority_hitbox == 6 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}
	}
	else {
		if ( g_aimbot.m_body_in_air && !( record->m_fFlags & FL_ONGROUND ) && ( g_aimbot.m_overriden_hitboxes.upper_chest || g_aimbot.m_normal_hitboxes.body || g_aimbot.m_normal_hitboxes.stomach ) )
			m_hitboxes.push_back( { HITBOX_BODY, HitscanMode::PREFER, false } );

		if ( g_aimbot.m_body_on_crouch && record->m_flDuck == 1 && ( g_aimbot.m_overriden_hitboxes.upper_chest || g_aimbot.m_normal_hitboxes.body || g_aimbot.m_normal_hitboxes.stomach ) )
			m_hitboxes.push_back( { HITBOX_BODY, HitscanMode::PREFER, false } );

		if ( g_aimbot.m_body_lethal && ( g_aimbot.m_overriden_hitboxes.upper_chest || g_aimbot.m_normal_hitboxes.body || g_aimbot.m_normal_hitboxes.stomach ) )
			m_hitboxes.push_back( { HITBOX_BODY, HitscanMode::LETHAL, false } );

		if ( g_aimbot.m_body_lethal2 && ( g_aimbot.m_overriden_hitboxes.upper_chest || g_aimbot.m_normal_hitboxes.body || g_aimbot.m_normal_hitboxes.stomach ) )
			m_hitboxes.push_back( { HITBOX_BODY, HitscanMode::LETHAL2, false } );

		if ( g_aimbot.m_normal_hitboxes.head )
			m_hitboxes.push_back( { HITBOX_HEAD, g_aimbot.m_priority_hitbox == 0 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );

		if ( g_aimbot.m_normal_hitboxes.neck )
			m_hitboxes.push_back( { HITBOX_NECK, g_aimbot.m_priority_hitbox == 1 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );

		if ( g_aimbot.m_normal_hitboxes.upper_chest )
			m_hitboxes.push_back( { HITBOX_UPPER_CHEST, g_aimbot.m_priority_hitbox == 2 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );

		if ( g_aimbot.m_normal_hitboxes.body ) {
			m_hitboxes.push_back( { HITBOX_THORAX, g_aimbot.m_priority_hitbox == 3 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_CHEST, g_aimbot.m_priority_hitbox == 3 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}

		if ( g_aimbot.m_normal_hitboxes.stomach ) {
			m_hitboxes.push_back( { HITBOX_PELVIS, g_aimbot.m_priority_hitbox == 4 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_BODY, g_aimbot.m_priority_hitbox == 4 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}

		if ( g_aimbot.m_normal_hitboxes.legs ) {
			m_hitboxes.push_back( { HITBOX_L_THIGH, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_R_THIGH, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_L_CALF, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_R_CALF, g_aimbot.m_priority_hitbox == 5 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}

		if ( g_aimbot.m_normal_hitboxes.feet ) {
			m_hitboxes.push_back( { HITBOX_L_FOOT, g_aimbot.m_priority_hitbox == 6 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
			m_hitboxes.push_back( { HITBOX_R_FOOT, g_aimbot.m_priority_hitbox == 6 ? HitscanMode::PREFER : HitscanMode::NORMAL, false } );
		}
	}
}

void Aimbot::init( ) {
	// clear old targets.
	m_targets.clear( );
	m_sorted_targets.clear( );

	m_target = nullptr;
	m_aim = vec3_t{ };
	m_angle = ang_t{ };
	m_damage = 0.f;
	m_record = nullptr;
	m_stop = true;
	m_hitbox = -1;
	m_did_stop = true;

	m_best_dist = std::numeric_limits< float >::max( );
	m_best_fov = 180.f + 1.f;
	m_best_damage = 0.f;
	g_aimbot.m_current_matrix = nullptr;

	if ( !g_tickbase.m_shift_data.m_did_shift_before && !g_tickbase.m_shift_data.m_should_be_ready )
		m_shoot_next_tick = false;

	m_current_sphere.clear( );
}

void Aimbot::StripAttack( ) {
	if ( g_cl.m_weapon_id == REVOLVER )
		return;
	else
		g_cl.m_cmd->m_buttons &= ~IN_ATTACK;
}

void Aimbot::think( ) {

	// update config values.
	update_config( );

	// do all startup routines.
	init( );

	if ( !g_aimbot.m_enable )
		return;

	// sanity.
	if ( !g_cl.m_weapon )
		return;

	// no grenades or bomb.
	if ( g_cl.m_weapon->IsGrenade( ) || g_cl.m_weapon_type == WEAPONTYPE_EQUIPMENT )
		return;

	if ( !g_cl.m_weapon_fire )
		StripAttack( );

	// animation silent aim, prevent the ticks with the shot in it to become the tick that gets processed.
	// we can do this by always choking t he tick before we are able to shoot.
	bool revolver = g_cl.m_weapon_id == REVOLVER && g_cl.m_revolver_cock != 0;

	// one tick before being able to shoot.
	if ( revolver && g_cl.m_revolver_cock > 0 && g_cl.m_revolver_cock == g_cl.m_revolver_query )
		return;

	// setup bones for all valid targets.
	for ( int i{ 1 }; i <= g_csgo.m_globals->m_max_clients; ++i ) {
		Player* player = g_csgo.m_entlist->GetClientEntity< Player* >( i );

		if ( !player || player == g_cl.m_local )
			continue;

		if ( !IsValidTarget( player ) )
			continue;

		AimPlayer* data = &m_players[ i - 1 ];
		if ( !data )
			continue;

		m_targets.push_back( data );
	}

	// run knifebot.
	if ( g_cl.m_weapon_type == WEAPONTYPE_KNIFE && g_cl.m_weapon_id != ZEUS ) {
		knife( );
		return;
	}

	// scan available targets... if we even have any.
	test_parallel_t parallel;
	//ParallelProcess( &parallel, 1, &Aimbot::find );
	find( parallel );

	// finally set data when shooting.
	apply( );
}

bool Aimbot::AdjustVelocity(  ) { // temporary
	
	bool reload;
	auto v23 = g_cl.m_local->get<uintptr_t>( g_csgo.AnimOverlay );
	auto v73 = *( __m128* )( v23 + 0x58 );

	if ( !( g_cl.m_local->m_fFlags( ) & FL_ONGROUND ) && !m_in_air )
		return true;

	if ( g_movement.m_slow_motion )
		return true;

	auto v52 = _mm_shuffle_ps( v73, v73, 170 ).m128_f32[ 3 ] >= 0.55f ? 1.0f : v73.m128_f32[ 3 ];
	if ( v52 < 0.99f )
		return false;

	if( !m_target )
		return false;

	if( !m_between_shots && !g_cl.m_weapon_fire )
		return false;

	float v4 = 0.33000001 * ( g_cl.m_local->m_bIsScoped( ) ? g_cl.m_weapon_info->flMaxPlayerSpeedAlt : g_cl.m_weapon_info->flMaxPlayerSpeed );

	if ( g_inputpred.PredictionData.m_vecUnpredictedVelocity.length_2d( ) < v4 ) {
	
		float squirt2 = std::sqrtf( ( g_cl.m_cmd->m_forward_move * g_cl.m_cmd->m_forward_move ) + ( g_cl.m_cmd->m_side_move * g_cl.m_cmd->m_side_move ) );

		float cock1 = g_cl.m_cmd->m_forward_move / squirt2;
		float cock2 = g_cl.m_cmd->m_side_move / squirt2;

		auto Velocity = g_cl.m_local->m_vecVelocity( ).length_2d( );

		if ( v4 + 1.0 <= Velocity ) {
			g_cl.m_cmd->m_forward_move = 0;
			g_cl.m_cmd->m_side_move = 0;
		}
		else {
			g_cl.m_cmd->m_forward_move = cock1 * v4;
			g_cl.m_cmd->m_side_move = cock2 * v4;
		}
	}
	else
	{
		ang_t angle;
		math::VectorAngles( g_cl.m_local->m_vecVelocity( ), angle );

		float speed = g_cl.m_local->m_vecVelocity( ).length( );

		angle.y = g_cl.m_view_angles.y - angle.y;

		vec3_t direction;
		math::AngleVectors( angle, &direction );

		vec3_t stop = direction * -speed;

		g_cl.m_cmd->m_forward_move = stop.x;
		g_cl.m_cmd->m_side_move = stop.y;

		// onetap
		if ( m_force_accuracy )
			return false;
	}

	return true;
}

void Aimbot::find( test_parallel_t& data ) {
	struct BestTarget_t { Player* player; AimPlayer* target; vec3_t pos; float damage; float min_damage; LagComp::LagRecord_t* record; int hitbox; };

	vec3_t       tmp_pos;
	float        tmp_damage{ };
	float		 tmp_min_damage;
	BestTarget_t best;
	best.player = nullptr;
	best.target = nullptr;
	best.damage = -1.f;
	best.pos = vec3_t{ };
	best.record = nullptr;
	best.hitbox = -1;

	if ( g_aimbot.m_targets.empty( ) )
		return;

	// iterate all targets.
	for ( const auto& t : g_aimbot.m_targets ) {
		if ( !t->m_player )
			continue;

		if ( g_lagcompensation.BreakingLagCompensation( t->m_player ) && g_cfg[ XOR( "aimbot_fix_lag" ) ].get< bool >( ) ) {
			const auto first = g_lagcompensation.GetLatestRecord( t->m_player );

			t->SetupHitboxes( first.value( ), false );
			if ( t->m_hitboxes.empty( ) )
				continue;

			// rip something went wrong..
			if ( t->GetBestAimPosition( tmp_pos, tmp_damage, best.hitbox, first.value( ), tmp_min_damage ) && g_aimbot.SortTargets( first.value( ), tmp_pos, tmp_damage ) ) {

				// if we made it so far, set shit.
				best.player = t->m_player;
				best.pos = tmp_pos;
				best.damage = tmp_damage;
				best.min_damage = tmp_min_damage;
				best.record = first.value( );
			}
		}
		else {
			const auto ideal = g_lagcompensation.GetLatestRecord( t->m_player );
			if ( !ideal.has_value( ) || ideal.value( )->m_bDormant || ( ideal.value( )->m_pEntity && ideal.value( )->m_pEntity->m_bGunGameImmunity( ) ) )
				continue;

			t->SetupHitboxes( ideal.value( ), false );
			if ( t->m_hitboxes.empty( ) )
				continue;

			// try to select best record as target.
			if ( t->GetBestAimPosition( tmp_pos, tmp_damage, best.hitbox, ideal.value( ), tmp_min_damage ) ) {
				if ( g_aimbot.SortTargets( ideal.value( ), tmp_pos, tmp_damage ) ) {
					// if we made it so far, set shit. 
					best.player = t->m_player;
					best.pos = tmp_pos;
					best.damage = tmp_damage;
					best.record = ideal.value( );
					best.min_damage = tmp_min_damage;
					best.target = t;
				}
			}

			const auto last = g_lagcompensation.GetOldestRecord( t->m_player );
			if ( !last.has_value( ) || last.value( ) == ideal.value( ) || last.value( )->m_bDormant || ( last.value( )->m_pEntity && last.value( )->m_pEntity->m_bGunGameImmunity( ) ) )
				continue;

			t->SetupHitboxes( last.value( ), true );
			if ( t->m_hitboxes.empty( ) )
				continue;

			// rip something went wrong..
			// try to select best record as target.
			if ( t->GetBestAimPosition( tmp_pos, tmp_damage, best.hitbox, ideal.value( ), tmp_min_damage ) ) {
				// if we made it so far, set shit. 
				best.player = t->m_player;
				best.pos = tmp_pos;
				best.damage = tmp_damage;
				best.record = ideal.value( );
				best.min_damage = tmp_min_damage;
				best.target = t;
			}

			// we found a target we can shoot at and deal damage? fuck yeah. (THIS IS TEMPORARY TILL WE REPLACE THE TARGET SELECTION)
			if ( best.damage > 0.f && best.player && best.record )
				break;
		}
	}

	// verify our target and set needed data.
	if ( best.player && best.record && best.target ) {
		// calculate aim angle.
		math::VectorAngles( best.pos - g_cl.m_shoot_pos, g_aimbot.m_angle );

		// set member vars.
		g_aimbot.m_target = best.player;
		g_aimbot.m_aim = best.pos;
		g_aimbot.m_damage = best.damage;
		g_aimbot.m_record = best.record;
		g_aimbot.m_hitbox = best.hitbox;

		g_aimbot.m_current_matrix = best.record->m_pMatrix;

		if ( best.target != g_aimbot.m_old_target ) {
			g_aimbot.m_shoot_next_tick = false;
		}

		if ( !g_aimbot.AdjustVelocity( ) )
			return;

		if ( g_aimbot.m_duck && !( !( g_cl.m_local->m_fFlags( ) & FL_ONGROUND ) && !g_aimbot.m_in_air ))
			g_cl.m_cmd->m_buttons |= IN_DUCK;

		if ( !g_cl.m_weapon_fire )
			return;

		bool on = true;
		bool hit = ( !g_cl.m_ground && g_cl.m_weapon && g_cl.m_weapon_id == SSG08 && g_cfg[ XOR( "aimbot_jumpscout" ) ].get< bool >( ) && g_cl.m_weapon->GetInaccuracy( ) < 0.009f ) || ( on && g_aimbot.CheckHitchance( g_aimbot.m_target, g_aimbot.m_angle, g_aimbot.m_record, best.hitbox ) );

		// if we can scope.
		bool can_scope = g_cl.m_weapon && g_cl.m_weapon->m_zoomLevel( ) == 0 && g_cl.m_weapon->IsZoomable( true );

		if ( can_scope ) {
			// always.
			if ( g_aimbot.m_autoscope ) {
				g_aimbot.m_attack2 = true;
				return;
			} 
		}

		if ( hit || !on ) {

			// these conditions are so cancer
			if ( !g_tickbase.m_shift_data.m_should_attempt_shift || ( ( ( g_cl.m_goal_shift == ( g_cl.m_max_lag - ( 14 - g_cfg[ XOR( "aimbot_exploits_teleport_ticks" ) ].get< int >( ) ) ) ) || g_tickbase.m_shift_data.m_should_disable ) && g_tickbase.m_shift_data.m_should_attempt_shift ) || ( g_cl.m_goal_shift == (g_cl.m_max_lag / 2) && g_tickbase.m_shift_data.m_should_attempt_shift && !( g_tickbase.m_shift_data.m_prepare_recharge || g_tickbase.m_shift_data.m_did_shift_before && !g_tickbase.m_shift_data.m_should_be_ready ) ) ) {
				if ( g_cfg[ XOR( "aimbot_autofire" ) ].get< bool >( ) ) {

					// left click attack.
					g_aimbot.m_attack = true;

					// save our target for later
					g_aimbot.m_old_target = best.target;
				}
			}
		}
	}
}

bool Aimbot::CheckHitchance( Player* player, const ang_t& angle, LagComp::LagRecord_t* record, int hitbox ) {
	constexpr float HITCHANCE_MAX = 100.f;
	constexpr int   SEED_MAX = 255;

	vec3_t     start{ g_cl.m_shoot_pos }, end, fwd, right, up, dir, wep_spread;
	float      inaccuracy, spread;
	CGameTrace tr;
	size_t     total_hits{ }, needed_hits{ ( size_t )std::ceil( ( m_minimum_hitchance * SEED_MAX ) / HITCHANCE_MAX ) };

	if ( g_csgo.m_cvar->FindVar( HASH( "weapon_accuracy_nospread" ) )->GetInt( ) )
		return true;

	// get needed directional vectors.
	math::AngleVectors( angle, &fwd, &right, &up );

	// store off inaccuracy / spread ( these functions are quite intensive and we only need them once ).
	inaccuracy = g_cl.m_weapon->GetInaccuracy( );
	spread = g_cl.m_weapon->GetSpread( );

	// iterate all possible seeds.
	for ( int i{ }; i <= SEED_MAX; ++i ) {
		// get spread.
		wep_spread = g_cl.m_weapon->CalculateSpread( i, inaccuracy, spread );

		// get spread direction.
		dir = ( fwd + ( right * wep_spread.x ) + ( up * wep_spread.y ) ).normalized( );

		// get end of trace.
		end = start + ( dir * g_cl.m_weapon_info->flRange );

		// setup ray and trace.
		g_csgo.m_engine_trace->ClipRayToEntity( Ray( start, end ), MASK_SHOT, player, &tr );

		// check if we hit a valid player / hitgroup on the player and increment total hits.
		if ( tr.m_entity == player && game::IsValidHitgroup( tr.m_hitgroup ) )
			++total_hits;

		// we made it.
		if ( total_hits >= needed_hits )
			return true;

		// we cant make it anymore.
		if ( ( SEED_MAX - i + total_hits ) < needed_hits )
			return false;
	}

	return false;
}

bool AimPlayer::SetupHitboxPoints( LagComp::LagRecord_t* record, BoneArray* bones, int index, std::vector< vec3_t >& points ) {
	// reset points.
	points.clear( );

	const model_t* model = record->m_pEntity->GetModel( );
	if ( !model )
		return false;

	studiohdr_t* hdr = g_csgo.m_model_info->GetStudioModel( model );
	if ( !hdr )
		return false;

	mstudiohitboxset_t* set = hdr->GetHitboxSet( record->m_pEntity->m_nHitboxSet( ) );
	if ( !set )
		return false;

	mstudiobbox_t* bbox = set->GetHitbox( index );
	if ( !bbox )
		return false;


	// get hitbox scales.
	float scale = g_aimbot.m_headscale * 0.01;

	// big inair fix.
	if ( !( record->m_fFlags  & FL_ONGROUND ) )
		scale = 0.7f;

	float bscale = g_aimbot.m_bodyscale * 0.01;

	// calculate dynamic scale
	auto transformed_center = ( bbox->m_mins + bbox->m_maxs ) * 0.5f;
	math::VectorITransform( transformed_center, m_matrix[ bbox->m_bone ], transformed_center );

	auto spread = g_cl.m_weapon->GetSpread( ) + g_cl.m_weapon->GetInaccuracy( );
	auto distance = transformed_center.dist_to( g_cl.m_shoot_pos );

	distance /= sin( math::deg_to_rad( 90.0f - math::rad_to_deg( spread ) ) );
	spread = sin( spread );

	// get radius and set spread.
	auto radius = std::max( bbox->m_radius - distance * spread, 0.0f );
	scale = bscale = std::clamp( radius / bbox->m_radius, 0.0f, 1.0f );

	// these indexes represent boxes.
	if ( bbox->m_radius <= 0.f ) {
		// references: 
		//      https://developer.valvesoftware.com/wiki/Rotation_Tutorial
		//      CBaseAnimating::GetHitboxBonePosition
		//      CBaseAnimating::DrawServerHitboxes

		// convert rotation angle to a matrix.
		matrix3x4_t rot_matrix;
		g_csgo.AngleMatrix( bbox->m_angle, rot_matrix );

		// apply the rotation to the entity input space (local).
		matrix3x4_t matrix;
		math::ConcatTransforms( bones[ bbox->m_bone ], rot_matrix, matrix );

		// extract origin from matrix.
		vec3_t origin = matrix.GetOrigin( );

		// compute raw center point.
		vec3_t center = ( bbox->m_mins + bbox->m_maxs ) / 2.f;

		// the feet hiboxes have a side, heel and the toe.
		if ( index == HITBOX_R_FOOT || index == HITBOX_L_FOOT ) {
			float d1 = ( bbox->m_mins.z - center.z ) * 0.875f;

			// invert.
			if ( index == HITBOX_L_FOOT )
				d1 *= -1.f;

			// side is more optimal then center.
			points.push_back( { center.x, center.y, center.z + d1 } );

			if ( g_aimbot.m_multipoint_hitboxes.feet ) {
				// get point offset relative to center point
				// and factor in hitbox scale.
				float d2 = ( bbox->m_mins.x - center.x ) * scale;
				float d3 = ( bbox->m_maxs.x - center.x ) * scale;

				// heel.
				points.push_back( { center.x + d2, center.y, center.z } );

				// toe.
				points.push_back( { center.x + d3, center.y, center.z } );
			}
		}

		// nothing to do here we are done.
		if ( points.empty( ) )
			return false;

		// rotate our bbox points by their correct angle
		// and convert our points to world space.
		for ( auto& p : points ) {
			// VectorRotate.
			// rotate point by angle stored in matrix.
			p = { p.dot( matrix[ 0 ] ), p.dot( matrix[ 1 ] ), p.dot( matrix[ 2 ] ) };

			// transform point to world space.
			p += origin;
		}
	}

	// these hitboxes are capsules.
	else {
		// factor in the pointscale.
		float r = bbox->m_radius * scale;
		float br = bbox->m_radius * bscale;

		// compute raw center point.
		vec3_t center = ( bbox->m_mins + bbox->m_maxs ) / 2.f;

		// head has 5 points.
		if ( index == HITBOX_HEAD ) {
			// add center.
			points.push_back( center );

			if ( g_aimbot.m_multipoint_hitboxes.head ) {
				// rotation matrix 45 degrees.
				// https://math.stackexchange.com/questions/383321/rotating-x-y-points-45-degrees
				// std::cos( deg_to_rad( 45.f ) )
				constexpr float rotation = 0.70710678f;

				// top/back 45 deg.
				// this is the best spot to shoot at.
				points.push_back( { bbox->m_maxs.x + ( rotation * r ), bbox->m_maxs.y + ( -rotation * r ), bbox->m_maxs.z } );

				vec3_t right{ bbox->m_maxs.x, bbox->m_maxs.y, bbox->m_maxs.z + r };

				// right.
				points.push_back( right );

				vec3_t left{ bbox->m_maxs.x, bbox->m_maxs.y, bbox->m_maxs.z - r };

				// left.
				points.push_back( left );

				// back.
				points.push_back( { bbox->m_maxs.x, bbox->m_maxs.y - r, bbox->m_maxs.z } );

				// get animstate ptr.
				CCSGOPlayerAnimState* state = record->m_pEntity->m_PlayerAnimState( );

				// add this point only under really specific circumstances.
				// if we are standing still and have the lowest possible pitch pose.
				if ( state && record->m_vecVelocity.length( ) <= 0.1f && record->m_angEyeAngles.x <= state->body_pitch ) {

					// bottom point.
					points.push_back( { bbox->m_maxs.x - r, bbox->m_maxs.y, bbox->m_maxs.z } );
				}
			}
		}

		// body has 5 points.
		else if ( index == HITBOX_BODY ) {
			// center.
			points.push_back( center );

			// back.
			if ( g_aimbot.m_multipoint_hitboxes.stomach )
				points.push_back( { center.x, bbox->m_maxs.y - br, center.z } );
		}

		else if ( index == HITBOX_PELVIS ) {
			// back.
			if ( g_aimbot.m_multipoint_hitboxes.stomach )
				points.push_back( { center.x, bbox->m_maxs.y - br, center.z } );
		}
		else if ( index == HITBOX_UPPER_CHEST ) {
			// back.
			if ( g_aimbot.m_multipoint_hitboxes.upper_chest )
				points.push_back( { center.x, bbox->m_maxs.y - br, center.z } );
		}
		// other stomach/chest hitboxes have 2 points.
		else if ( index == HITBOX_THORAX || index == HITBOX_CHEST ) {
			// add center.
			points.push_back( center );

			// add extra point on back.
			if ( g_aimbot.m_multipoint_hitboxes.body )
				points.push_back( { center.x, bbox->m_maxs.y - br, center.z } );
		}

		else if ( index == HITBOX_R_CALF || index == HITBOX_L_CALF ) {
			// add center.
			points.push_back( center );

			// half bottom.
			if ( g_aimbot.m_multipoint_hitboxes.legs )
				points.push_back( { bbox->m_maxs.x - ( bbox->m_radius / 2.f ), bbox->m_maxs.y, bbox->m_maxs.z } );
		}

		else if ( index == HITBOX_R_THIGH || index == HITBOX_L_THIGH ) {
			// add center.
			if ( g_aimbot.m_multipoint_hitboxes.feet ) //should be legs but uh....
				points.push_back( center );
		}

		// arms get only one point.
		else if ( false && (index == HITBOX_R_UPPER_ARM || index == HITBOX_L_UPPER_ARM) ) { //ignore arms
			// elbow.
			points.push_back( { bbox->m_maxs.x + bbox->m_radius, center.y, center.z } );
		}

		// nothing left to do here.
		if ( points.empty( ) )
			return false;

		// transform capsule points.
		for ( auto& p : points )
			math::VectorTransform( p, bones[ bbox->m_bone ], p );
	}

	return true;
}

bool AimPlayer::GetBestAimPosition( vec3_t& aim, float& damage, int& hitbox, LagComp::LagRecord_t* record, float& tmp_min_damage ) {
	bool                  done, pen;
	float                 dmg, pendmg;
	HitscanData_t         scan;
	std::vector< vec3_t > points;
	CGameTrace            trace;

	// get player hp.
	int hp = m_player->m_iHealth( );

	m_matrix = record->m_pMatrix;

	if ( !m_matrix )
		return false;

	if ( g_cl.m_weapon_id == ZEUS ) {
		dmg = pendmg = hp;
		pen = true;
	}

	else {
		dmg = g_aimbot.m_override_damage ? g_aimbot.m_overriden_damage : g_aimbot.m_minimum_damage;

		if( dmg > hp )
			dmg = hp;

		pendmg = g_aimbot.m_override_damage ? g_aimbot.m_overriden_damage : g_aimbot.m_minimum_penetration_damage;

		if ( pendmg > hp )
			pendmg = hp;

		pen = true;
	}

	// backup player
	const auto backup_origin = record->m_pEntity->m_vecOrigin( );
	const auto backup_abs_origin = record->m_pEntity->GetAbsOrigin( );
	const auto backup_abs_angles = record->m_pEntity->GetAbsAngles( );
	const auto backup_obb_mins = record->m_pEntity->m_vecMins( );
	const auto backup_obb_maxs = record->m_pEntity->m_vecMaxs( );
	const auto backup_cache = record->m_pEntity->m_BoneCache2( );


	// write all data of this record l0l.
	auto restore = [ & ]( ) -> void {
		record->m_pEntity->m_vecOrigin( ) = backup_origin;
		record->m_pEntity->SetAbsOrigin( backup_abs_origin );
		record->m_pEntity->SetAbsAngles( backup_abs_angles );
		record->m_pEntity->m_vecMins( ) = backup_obb_mins;
		record->m_pEntity->m_vecMaxs( ) = backup_obb_maxs;
		record->m_pEntity->m_BoneCache2( ) = backup_cache;
	};


	// iterate hitboxes.
	for ( const auto& it : m_hitboxes ) {
		done = false;

		// setup points on hitbox.
		if ( !SetupHitboxPoints( record, m_matrix, it.m_index, points ) )
			continue;

		// iterate points on hitbox.
		for ( const auto& point : points ) {
			penetration::PenetrationInput_t in;

			in.m_damage = dmg;
			in.m_damage_pen = pendmg;
			in.m_can_pen = pen;
			in.m_target = m_player;
			in.m_from = g_cl.m_local;
			in.m_pos = point;

			// ignore mindmg.
			if ( it.m_mode == HitscanMode::LETHAL || it.m_mode == HitscanMode::LETHAL2 )
				in.m_damage = in.m_damage_pen = 1.f;

			penetration::PenetrationOutput_t out;

			//bool safe = /*g_aimbot.CanHit( g_cl.m_shoot_pos, point, record, it.m_index, true, record->m_pMatrix );*/ CanSafepoint( record, point, it.m_index );

			//if ( !safe && g_aimbot.m_force_safepoint )
			//	continue;

			// we can hit p!
			if ( penetration::run( &in, &out ) ) {

				// nope we did not hit head..
				if ( it.m_index == HITBOX_HEAD && out.m_hitgroup != HITGROUP_HEAD )
					continue;

				// prefered hitbox, just stop now.
				if ( it.m_mode == HitscanMode::PREFER )
					done = true;

				// this hitbox requires lethality to get selected, if that is the case.
				// we are done, stop now.
				else if ( it.m_mode == HitscanMode::LETHAL && out.m_damage >= m_player->m_iHealth( ) )
					done = true;

				// 2 shots will be sufficient to kill.
				else if ( it.m_mode == HitscanMode::LETHAL2 && ( out.m_damage * 2.f ) >= m_player->m_iHealth( ) )
					done = true;

				// this hitbox has normal selection, it needs to have more damage.
				else if ( it.m_mode == HitscanMode::NORMAL ) {
					// we did more damage.
					if ( out.m_damage > scan.m_damage ) {
						// save new best data.
						scan.m_damage = out.m_damage;
						scan.m_pos = point;
					}
				}

				// we found a preferred / lethal hitbox.
				if ( done ) {
					// save new best data.
					scan.m_damage = out.m_damage;
					scan.m_pos = point;
					break;
				}
			}
		}

		// ghetto break out of outer loop.
		if ( done )
			break;
	}

	// we found something that we can damage.
	// set out vars.
	if ( scan.m_damage > 0.f ) {
		aim = scan.m_pos;
		damage = scan.m_damage;
		return true;
	}

	return false;
}

bool AimPlayer::SafePointMultiPoint( LagComp::LagRecord_t* record, BoneArray* bones, int index, std::vector< vec3_t >& points ) {

	// reset points.
	points.clear( );

	if ( index > 19 ) {
		return false;
	}

	const model_t* model = record->m_pEntity->GetModel( );
	if ( !model )
		return false;

	studiohdr_t* hdr = g_csgo.m_model_info->GetStudioModel( model );
	if ( !hdr )
		return false;

	mstudiohitboxset_t* set = hdr->GetHitboxSet( record->m_pEntity->m_nHitboxSet( ) );
	if ( !set )
		return false;

	mstudiobbox_t* bbox = set->GetHitbox( index );
	if ( !bbox )
		return false;

	auto bonecache = record->m_pEntity->m_BoneCache( );

	auto m_flRadius = bbox->m_radius;
	if ( m_flRadius == -1.0f ) {
		matrix3x4_t rotated_matrix;
		g_csgo.AngleMatrix( bbox->m_angle, rotated_matrix );

		matrix3x4_t matrix;
		math::ConcatTransforms( bonecache.m_pCachedBones[ bbox->m_bone ], rotated_matrix, matrix );

		points.push_back( bonecache.m_pCachedBones[ bbox->m_bone ].GetOrigin( ) + bbox->m_mins );
		points.push_back( bonecache.m_pCachedBones[ bbox->m_bone ].GetOrigin( ) + bbox->m_maxs );
		points.push_back( bonecache.m_pCachedBones[ bbox->m_bone ].GetOrigin( ) );
	}
	else {
		matrix3x4_t rotated_matrix;
		g_csgo.AngleMatrix( bbox->m_angle, rotated_matrix );

		auto v25 = bbox->m_mins;
		auto v28 = ( ( rotated_matrix.m_flMatVal[ 0 ][ 0 ] * v25.x ) + ( rotated_matrix.m_flMatVal[ 0 ][ 1 ] * v25.y ) + ( rotated_matrix.m_flMatVal[ 0 ][ 2 ] * v25.z ) );
		auto v29 = ( ( rotated_matrix.m_flMatVal[ 1 ][ 0 ] * v25.x ) + ( rotated_matrix.m_flMatVal[ 1 ][ 1 ] * v25.y ) + ( rotated_matrix.m_flMatVal[ 1 ][ 2 ] * v25.z ) );
		auto v30 = ( ( rotated_matrix.m_flMatVal[ 2 ][ 0 ] * v25.x ) + ( rotated_matrix.m_flMatVal[ 2 ][ 1 ] * v25.y ) + ( rotated_matrix.m_flMatVal[ 2 ][ 2 ] * v25.z ) );

		g_csgo.AngleMatrix( bbox->m_angle, rotated_matrix );
		auto v31 = bbox->m_maxs;
		auto v34 = ( ( rotated_matrix.m_flMatVal[ 0 ][ 0 ] * v31.x ) + ( rotated_matrix.m_flMatVal[ 0 ][ 1 ] * v31.y ) + ( rotated_matrix.m_flMatVal[ 0 ][ 2 ] * v31.z ) );
		auto v35 = ( ( rotated_matrix.m_flMatVal[ 1 ][ 0 ] * v31.x ) + ( rotated_matrix.m_flMatVal[ 1 ][ 1 ] * v31.y ) + ( rotated_matrix.m_flMatVal[ 1 ][ 2 ] * v31.z ) );
		auto v36 = ( ( rotated_matrix.m_flMatVal[ 2 ][ 0 ] * v31.x ) + ( rotated_matrix.m_flMatVal[ 2 ][ 1 ] * v31.y ) + ( rotated_matrix.m_flMatVal[ 2 ][ 2 ] * v31.z ) );

		float* v37 = ( float* )( ( DWORD )bonecache.m_pCachedBones + 48 * bbox->m_bone );

		vec3_t some_point1;
		some_point1.x = ( ( ( v37[ 1 ] * v29 ) + ( v37[ 0 ] * v28 ) ) + ( v37[ 2 ] * v30 ) ) + v37[ 3 ];
		some_point1.y = ( ( ( v37[ 5 ] * v29 ) + ( v28 * v37[ 4 ] ) ) + ( v37[ 6 ] * v30 ) ) + v37[ 7 ];
		some_point1.z = ( ( ( v37[ 9 ] * v29 ) + ( v28 * v37[ 8 ] ) ) + ( v37[ 10 ] * v30 ) ) + v37[ 11 ];

		float* v38 = ( float* )( ( DWORD )bonecache.m_pCachedBones + 48 * bbox->m_bone );

		vec3_t some_point2;
		some_point2.x = ( ( ( v38[ 1 ] * v35 ) + ( v34 * v38[ 0 ] ) ) + ( v38[ 2 ] * v36 ) ) + v38[ 3 ];
		some_point2.y = ( ( ( v38[ 5 ] * v35 ) + ( v34 * v38[ 4 ] ) ) + ( v38[ 6 ] * v36 ) ) + v38[ 7 ];
		some_point2.z = ( ( ( v38[ 9 ] * v35 ) + ( v34 * v38[ 8 ] ) ) + ( v38[ 10 ] * v36 ) ) + v38[ 11 ];

		auto v39 = 6 * bbox->m_bone;

		float* v40 = ( float* )( ( DWORD )bonecache.m_pCachedBones + 48 * bbox->m_bone );

		vec3_t some_point3;
		some_point3.x = *( float* )( ( DWORD )bonecache.m_pCachedBones + 48 * bbox->m_bone ) + v40[ 3 ];
		some_point3.y = *( float* )( ( DWORD )bonecache.m_pCachedBones + 8 * v39 + 16 ) + v40[ 7 ];
		some_point3.z = *( float* )( ( DWORD )bonecache.m_pCachedBones + 8 * v39 + 32 ) + v40[ 11 ];

		points.push_back( some_point3 );
		points.push_back( some_point2 );
		points.push_back( some_point1 );
	}

	return true;
}

bool Aimbot::SortTargets( LagComp::LagRecord_t* record, const vec3_t& aim, float damage ) {
	float dist, fov;

	switch ( g_cfg[ XOR( "aimbot_target_selection" ) ].get<int>( ) ) {

		// crosshair.
		case 0:
			fov = math::GetFOV( g_cl.m_view_angles, g_cl.m_shoot_pos, aim );

			if ( fov < m_best_fov ) {
				m_best_fov = fov;
				return true;
			}

			break;

		// distance.
		case 1:
			dist = g_cl.m_shoot_pos.dist_to( record->m_vecOrigin );

			if ( dist < m_best_dist ) {
				m_best_dist = dist;
				return true;
			}

			break;

		// damage.
		case 2:
			if ( damage > m_best_damage ) {
				m_best_damage = damage;
				return true;
			}

			break;

		default:
			return false;
	}

	return false;
}

void Aimbot::apply( ) {
	bool attack, attack2;

	// attack states.
	attack = m_attack;
	attack2 = m_attack2;

	m_attack = m_attack2 = false;

	if ( attack )
		g_cl.m_cmd->m_buttons |= IN_ATTACK;
	else if ( attack2 )
		g_cl.m_cmd->m_buttons |= IN_ATTACK2;

	// if not silent aim, apply the viewangles.
	if ( m_target ) {
		if ( !g_cfg[ XOR( "aimbot_silent" ) ].get<bool>( ) )
			g_csgo.m_engine->SetViewAngles( m_angle );
	}

	// ensure we're attacking.
	if ( attack || attack2 ) {

		if ( m_shoot_next_tick )
			m_shoot_next_tick = false;

		if ( m_target ) {
			// make sure to aim at un-interpolated data.
			// do this so BacktrackEntity selects the exact record.
			if ( m_record && !g_lagcompensation.BreakingLagCompensation( m_target ) || m_record && !g_cfg[ XOR( "aimbot_fix_lag" ) ].get< bool >( ) ) {
				g_cl.m_cmd->m_tick = game::TIME_TO_TICKS( m_record->m_flSimulationTime + g_cl.m_lerp );
			}

			// set angles to target.
			g_cl.m_cmd->m_view_angles = m_angle;

		}

		// norecoil.
		g_cl.m_cmd->m_view_angles -= g_cl.m_local->m_aimPunchAngle( ) * g_csgo.weapon_recoil_scale->GetFloat( );

		// store fired shot.
		if ( g_cl.IsFiring( game::TICKS_TO_TIME( g_cl.m_local->m_nTickBase( ) ) ) ) {
			g_shots.OnShotFire( m_target ? m_target : nullptr, m_target ? m_damage : -1.f, 1, m_target ? m_record : nullptr, m_hitbox );

			// set that we fired.
			g_cl.m_shot = true;
		}

		if ( !m_shoot_next_tick && ( g_cl.m_goal_shift == ( g_cl.m_max_lag - (14 - g_cfg[ XOR( "aimbot_exploits_teleport_ticks" ) ].get< int >( ) ) ) ) && g_tickbase.m_shift_data.m_should_attempt_shift && !( g_tickbase.m_shift_data.m_prepare_recharge || g_tickbase.m_shift_data.m_did_shift_before && !g_tickbase.m_shift_data.m_should_be_ready ) ) {
			m_shoot_next_tick = true;
		}
	}
}


bool Aimbot::CanHit( vec3_t start, vec3_t end, LagComp::LagRecord_t* record, int box, bool in_shot, BoneArray* bones )
{
	if ( !record || !record->m_pEntity )
		return false;

	// backup player
	const auto backup_origin = record->m_pEntity->m_vecOrigin( );
	const auto backup_abs_origin = record->m_pEntity->GetAbsOrigin( );
	const auto backup_abs_angles = record->m_pEntity->GetAbsAngles( );
	const auto backup_obb_mins = record->m_pEntity->m_vecMins( );
	const auto backup_obb_maxs = record->m_pEntity->m_vecMaxs( );
	const auto backup_cache = record->m_pEntity->m_BoneCache2( );

	// always try to use our aimbot matrix first.
	auto matrix = m_current_matrix;

	// this is basically for using a custom matrix.
	if ( in_shot )
		matrix = bones;

	if ( !matrix )
		return false;

	const model_t* model = record->m_pEntity->GetModel( );
	if ( !model )
		return false;

	studiohdr_t* hdr = g_csgo.m_model_info->GetStudioModel( model );
	if ( !hdr )
		return false;

	mstudiohitboxset_t* set = hdr->GetHitboxSet( record->m_pEntity->m_nHitboxSet( ) );
	if ( !set )
		return false;

	mstudiobbox_t* bbox = set->GetHitbox( box );
	if ( !bbox )
		return false;

	vec3_t min, max;
	const auto IsCapsule = false && bbox->m_radius != -1.f; //crash

	if ( IsCapsule ) {
		math::VectorTransform( bbox->m_mins, matrix[ bbox->m_bone ], min );
		math::VectorTransform( bbox->m_maxs, matrix[ bbox->m_bone ], max );
		const auto dist = math::SegmentToSegment( start, end, min, max );

		if ( dist < bbox->m_radius ) {
			return true;
		}
	}
	else {
		CGameTrace tr;

		// setup trace data
		record->m_pEntity->m_vecOrigin( ) = record->m_vecOrigin;
		record->m_pEntity->SetAbsOrigin( record->m_vecOrigin );
		record->m_pEntity->SetAbsAngles( record->m_angAbsAngles );
		record->m_pEntity->m_vecMins( ) = record->m_vecMins;
		record->m_pEntity->m_vecMaxs( ) = record->m_vecMaxs;
		record->m_pEntity->m_BoneCache2( ) = reinterpret_cast< matrix3x4_t** >( matrix );

		// setup ray and trace.
		g_csgo.m_engine_trace->ClipRayToEntity( Ray( start, end ), MASK_SHOT, record->m_pEntity, &tr );

		record->m_pEntity->m_vecOrigin( ) = backup_origin;
		record->m_pEntity->SetAbsOrigin( backup_abs_origin );
		record->m_pEntity->SetAbsAngles( backup_abs_angles );
		record->m_pEntity->m_vecMins( ) = backup_obb_mins;
		record->m_pEntity->m_vecMaxs( ) = backup_obb_maxs;
		record->m_pEntity->m_BoneCache2( ) = backup_cache;

		// check if we hit a valid player / hitgroup on the player and increment total hits.
		if ( tr.m_entity == record->m_pEntity && game::IsValidHitgroup( tr.m_hitgroup ) )
			return true;
	}

	return false;
}

void Aimbot::update_config( ) {

	const char* weapon_name = XOR( "gen" );

	if ( !g_cl.m_local || !g_cl.m_weapon )
		goto GENERAL;

	// get weapon name.
	if ( g_cfg[ XOR( "aimbot_adaptive_config" ) ].get< bool >( ) ) {
		switch ( g_cl.m_local->GetActiveWeapon( )->m_iItemDefinitionIndex( ) ) {
		case Weapons_t::GLOCK: case Weapons_t::USPS: case Weapons_t::FIVESEVEN:
		case Weapons_t::P250: case Weapons_t::TEC9:
		case Weapons_t::ELITE: weapon_name = XOR( "pistol" ); break;
		case Weapons_t::REVOLVER: case Weapons_t::DEAGLE: weapon_name = XOR( "r8" ); break;
		case Weapons_t::SSG08: weapon_name = XOR( "ssg08" ); break;
		case Weapons_t::SCAR20: case Weapons_t::G3SG1: weapon_name = XOR( "auto" );  break;
		case Weapons_t::AWP: weapon_name = XOR( "awp" ); break;
		default: weapon_name = XOR( "other" ); break;
		}
	}
GENERAL:

	m_autostop = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "autostop" ) ) ) ].get<bool>( );
	m_minimum_hitchance = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hc" ) ) ) ].get<int>( );
	m_overriden_hitchance = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hc" ) ) ) ].get<int>( );
	m_minimum_damage = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "min_dmg" ) ) ) ].get<int>( );
	m_minimum_penetration_damage = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "min_penetration_dmg" ) ) ) ].get<int>( );
	m_overriden_damage = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_min_dmg" ) ) ) ].get<int>( );
	m_autoscope = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "autoscope" ) ) ) ].get<bool>( );
	m_between_shots = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "autostop_between" ) ) ) ].get<bool>( );
	m_force_accuracy = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "autostop_force" ) ) ) ].get<bool>( );
	m_in_air = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "autostop_air" ) ) ) ].get<bool>( );
	m_duck = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "autostop_duck" ) ) ) ].get<bool>( );

	m_bodyscale = g_cfg [ std::string ( XOR ( "aimbot_" ) + std::string ( weapon_name ) + std::string ( XOR ( "_" ) ) + std::string ( XOR ( "bodyscale" ) ) ) ].get<int> ( );
	m_headscale = g_cfg [ std::string ( XOR ( "aimbot_" ) + std::string ( weapon_name ) + std::string ( XOR ( "_" ) ) + std::string ( XOR ( "headscale" ) ) ) ].get<int> ( );

	m_normal_hitboxes.head = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_head" ) ) ) ].get<bool>( );
	m_normal_hitboxes.neck = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_upper_body" ) ) ) ].get<bool>( );
	m_normal_hitboxes.upper_chest = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_upper_chest" ) ) ) ].get<bool>( );
	m_normal_hitboxes.body = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_lower_body" ) ) ) ].get<bool>( );
	m_normal_hitboxes.stomach = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_stomach" ) ) ) ].get<bool>( );
	m_normal_hitboxes.feet = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_legs" ) ) ) ].get<bool>( );
	m_normal_hitboxes.legs = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "hitbox_feet" ) ) ) ].get<bool>( );

	m_multipoint_hitboxes.head = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_head" ) ) ) ].get<bool>( );
	m_multipoint_hitboxes.neck = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_upper_body" ) ) ) ].get<bool>( );
	m_multipoint_hitboxes.upper_chest = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_upper_chest" ) ) ) ].get<bool>( );
	m_multipoint_hitboxes.body = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_lower_body" ) ) ) ].get<bool>( );
	m_multipoint_hitboxes.stomach = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_stomach" ) ) ) ].get<bool>( );
	m_multipoint_hitboxes.feet = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_legs" ) ) ) ].get<bool>( );
	m_multipoint_hitboxes.legs = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "mutlipoint_hitbox_feet" ) ) ) ].get<bool>( );

	m_priority_hitbox = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "priority_hitbox" ) ) ) ].get<int>( );

	m_body_in_air = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "body_in_air" ) ) ) ].get<bool>( );
	m_body_on_crouch = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "body_on_crouch" ) ) ) ].get<bool>( );
	m_body_lethal = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "body_lethal" ) ) ) ].get<bool>( );
	m_body_lethal2 = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "body_lethal2" ) ) ) ].get<bool>( );

	m_overriden_hitboxes.head = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_head" ) ) ) ].get<bool>( );
	m_overriden_hitboxes.neck = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_upper_body" ) ) ) ].get<bool>( );
	m_overriden_hitboxes.upper_chest = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_upper_chest" ) ) ) ].get<bool>( );
	m_overriden_hitboxes.body = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_lower_body" ) ) ) ].get<bool>( );
	m_overriden_hitboxes.stomach = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_stomach" ) ) ) ].get<bool>( );
	m_overriden_hitboxes.feet = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_legs" ) ) ) ].get<bool>( );
	m_overriden_hitboxes.legs = g_cfg[ std::string( XOR( "aimbot_" ) + std::string( weapon_name ) + std::string( XOR( "_" ) ) + std::string( XOR( "overriden_hitbox_feet" ) ) ) ].get<bool>( );
}