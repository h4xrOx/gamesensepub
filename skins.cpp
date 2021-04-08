#include "gamesense.h"

#include <codecvt>
#include <cassert>
#include <locale>

Skins g_skins{ };;

void Skins::load( ) {

	m_knife_data[ knives_t::BAYONET ].setup( KNIFE_BAYONET,
		XOR( "models/weapons/v_knife_bayonet.mdl" ),
		XOR( "models/weapons/w_knife_bayonet.mdl" ),
		XOR( "bayonet" ) );

	m_knife_data[ knives_t::BOWIE ].setup( KNIFE_BOWIE,
		XOR( "models/weapons/v_knife_survival_bowie.mdl" ),
		XOR( "models/weapons/w_knife_survival_bowie.mdl" ),
		XOR( "knife_survival_bowie" ) );

	m_knife_data[ knives_t::BUTTERFLY ].setup( KNIFE_BUTTERFLY,
		XOR( "models/weapons/v_knife_butterfly.mdl" ),
		XOR( "models/weapons/w_knife_butterfly.mdl" ),
		XOR( "knife_butterfly" ) );

	m_knife_data[ knives_t::FALCHION ].setup( KNIFE_FALCHION,
		XOR( "models/weapons/v_knife_falchion_advanced.mdl" ),
		XOR( "models/weapons/w_knife_falchion_advanced.mdl" ),
		XOR( "knife_falchion" ) );

	m_knife_data[ knives_t::FLIP ].setup( KNIFE_FLIP,
		XOR( "models/weapons/v_knife_flip.mdl" ),
		XOR( "models/weapons/w_knife_flip.mdl" ),
		XOR( "knife_flip" ) );

	m_knife_data[ knives_t::GUT ].setup( KNIFE_GUT,
		XOR( "models/weapons/v_knife_gut.mdl" ),
		XOR( "models/weapons/w_knife_gut.mdl" ),
		XOR( "knife_gut" ) );

	m_knife_data[ knives_t::HUNTSMAN ].setup( KNIFE_HUNTSMAN,
		XOR( "models/weapons/v_knife_tactical.mdl" ),
		XOR( "models/weapons/w_knife_tactical.mdl" ),
		XOR( "knife_tactical" ) );

	m_knife_data[ knives_t::KARAMBIT ].setup( KNIFE_KARAMBIT,
		XOR( "models/weapons/v_knife_karam.mdl" ),
		XOR( "models/weapons/w_knife_karam.mdl" ),
		XOR( "knife_karambit" ) );

	m_knife_data[ knives_t::M9 ].setup( KNIFE_M9_BAYONET,
		XOR( "models/weapons/v_knife_m9_bay.mdl" ),
		XOR( "models/weapons/w_knife_m9_bay.mdl" ),
		XOR( "knife_m9_bayonet" ) );

	m_knife_data[ knives_t::DAGGER ].setup( KNIFE_SHADOW_DAGGERS,
		XOR( "models/weapons/v_knife_push.mdl" ),
		XOR( "models/weapons/w_knife_push.mdl" ),
		XOR( "knife_push" ) );

	m_knife_data[ knives_t::CLASSIC ].setup( KNIFE_CSS,
		XOR( "models/weapons/v_knife_css.mdl" ),
		XOR( "models/weapons/w_knife_css.mdl" ),
		XOR( "knife_css" ) );

	m_knife_data[ knives_t::PARACORD ].setup( KNIFE_CORD,
		XOR( "models/weapons/v_knife_cord.mdl" ),
		XOR( "models/weapons/w_knife_cord.mdl" ),
		XOR( "knife_cord" ) );

	m_knife_data[ knives_t::CANIS ].setup( KNIFE_CANIS,
		XOR( "models/weapons/v_knife_canis.mdl" ),
		XOR( "models/weapons/w_knife_canis.mdl" ),
		XOR( "knife_canis" ) );

	m_knife_data[ knives_t::URSUS ].setup( KNIFE_URSUS,
		XOR( "models/weapons/v_knife_ursus.mdl" ),
		XOR( "models/weapons/w_knife_ursus.mdl" ),
		XOR( "knife_ursus" ) );

	m_knife_data[ knives_t::NAVAJA ].setup( KNIFE_GYPSY_JACKKNIFE,
		XOR( "models/weapons/v_knife_gypsy_jackknife.mdl" ),
		XOR( "models/weapons/w_knife_gypsy_jackknife.mdl" ),
		XOR( "knife_gypsy_jackknife" ) );

	m_knife_data[ knives_t::NOMAD ].setup( KNIFE_OUTDOOR,
		XOR( "models/weapons/v_knife_outdoor.mdl" ),
		XOR( "models/weapons/w_knife_outdoor.mdl" ),
		XOR( "knife_outdoor" ) );

	m_knife_data[ knives_t::STILETTO ].setup( KNIFE_STILETTO,
		XOR( "models/weapons/v_knife_stiletto.mdl" ),
		XOR( "models/weapons/w_knife_stiletto.mdl" ),
		XOR( "knife_stiletto" ) );

	m_knife_data[ knives_t::TALON ].setup( KNIFE_WIDOWMAKER,
		XOR( "models/weapons/v_knife_widowmaker.mdl" ),
		XOR( "models/weapons/w_knife_widowmaker.mdl" ),
		XOR( "knife_widowmaker" ) );

	m_knife_data[ knives_t::SKELETON ].setup( KNIFE_SKELETON,
		XOR( "models/weapons/v_knife_skeleton.mdl" ),
		XOR( "models/weapons/w_knife_skeleton.mdl" ),
		XOR( "knife_skeleton" ) );

	// update glove model indexes on mapload.
	m_glove_data[ gloves_t::BLOODHOUND ].setup( 5027,
		XOR( "models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_bloodhound/w_glove_bloodhound.mdl" ) );

	m_glove_data[ gloves_t::SPORTY ].setup( 5030,
		XOR( "models/weapons/v_models/arms/glove_sporty/v_glove_sporty.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_sporty/w_glove_sporty.mdl" ) );

	m_glove_data[ gloves_t::DRIVER ].setup( 5031,
		XOR( "models/weapons/v_models/arms/glove_slick/v_glove_slick.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_slick/w_glove_slick.mdl" ) );

	m_glove_data[ gloves_t::HANDWRAP ].setup( 5032,
		XOR( "models/weapons/v_models/arms/glove_handwrap_leathery/v_glove_handwrap_leathery.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_handwrap_leathery/w_glove_handwrap_leathery.mdl" ) );

	m_glove_data[ gloves_t::MOTO ].setup( 5033,
		XOR( "models/weapons/v_models/arms/glove_motorcycle/v_glove_motorcycle.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_motorcycle/w_glove_motorcycle.mdl" ) );

	m_glove_data[ gloves_t::SPECIALIST ].setup( 5034,
		XOR( "models/weapons/v_models/arms/glove_specialist/v_glove_specialist.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_specialist/w_glove_specialist.mdl" ) );

	m_glove_data[ gloves_t::HYDRA ].setup( 5035,
		XOR( "models/weapons/v_models/arms/glove_specialist/v_glove_hydra.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_specialist/w_glove_hydra.mdl" ) );

	m_glove_data[ gloves_t::BROKENFANG ].setup( 4725,
		XOR( "models/weapons/v_models/arms/glove_specialist/v_glove_brokenfang.mdl" ),
		XOR( "models/weapons/w_models/arms/glove_specialist/w_glove_brokenfang.mdl" ) );

	m_update_time = 0.f;
}

void Skins::think( ) {
	std::vector< Weapon* > weapons{ };

	if( !g_csgo.m_engine->IsInGame( ) )
		return;

	if( !g_cl.m_local || !g_cl.m_local->alive( ) )
		return;

	player_info_t info;
	if( !g_csgo.m_engine->GetPlayerInfo( g_cl.m_local->index( ), &info ) )
		return;

	// store knife index.
	KnifeData* knife = &m_knife_data[ g_cfg[ XOR( "skins_knife" ) ].get<int>( ) ];

	for( int i { 1 }; i <= g_csgo.m_entlist->GetHighestEntityIndex( ); ++i ) {
		Entity* ent = g_csgo.m_entlist->GetClientEntity( i );
		if( !ent )
			continue;

		// run knifechanger.
		if( g_cfg[ XOR( "skins_knife" ) ].get<int>( ) > 0 && ent->is( HASH( "CPredictedViewModel" ) ) ) {
			// get weapon entity from predicted viewmodel.
			Weapon* weapon = ent->as< Weapon* >( )->GetWeapon( );

			// no need to be here anymore.
			if( !weapon || !weapon->IsKnife( ) )
				continue;

			// this weapon does not belong to us, we are done here.
			// should barely happen unless you pick up someones knife.
			// possible on servers with 'mp_drop_knife_enable 1'.
			if( info.m_xuid_low != weapon->m_OriginalOwnerXuidLow( ) || info.m_xuid_high != weapon->m_OriginalOwnerXuidHigh( ) )
				continue;

			// get and validate world model handle from the weapon
			Weapon* weapon_world_model = weapon->GetWeaponWorldModel( );
			if( !weapon_world_model )
				continue;

			// set model index of the predicted viewmodel.
			ent->m_nModelIndex( ) = knife->m_model_index;

			// set the world model index.
			// do this to have knifechanger in third person. verry p.
			weapon_world_model->m_nModelIndex( ) = knife->m_world_model_index;

			// correct m_nSequence and m_flCycle.
			UpdateAnimations( ent );
		}

		else if( ent->IsBaseCombatWeapon( ) ) {
			// cast to weapon class.
			Weapon* weapon = ent->as< Weapon* >( );

			// this is not our gun.
			if( info.m_xuid_low != weapon->m_OriginalOwnerXuidLow( ) || info.m_xuid_high != weapon->m_OriginalOwnerXuidHigh( ) )
				continue;

			// we found a weapon that we own.
			weapons.push_back( weapon );

			if( weapon->IsKnife( ) ) {
				// if this weapon is a knife, set some additional stuff.
				if( g_cfg[ XOR( "skins_knife" ) ].get<int>( ) > 0 ) {
					// set the item id, this is for the hud.
					weapon->m_iItemDefinitionIndex( ) = knife->m_id;

					// not needed. but everyone does this, try without.
					weapon->m_nModelIndex( ) = knife->m_model_index;

					// not needed. but everyone does this, try without.
					weapon->m_iViewModelIndex( ) = knife->m_model_index;

					// not needed. but everyone does this, try without.
					weapon->m_iWorldModelIndex( ) = knife->m_world_model_index;

					// set the little star thing.
					weapon->m_iEntityQuality( ) = 3;
				}

				else if( g_cfg[ XOR( "skins_knife" ) ].get<int>( ) == 0 ) {
					// fix definition.
					if( g_cl.m_local->m_iTeamNum( ) == TEAM_TERRORISTS ) {
						weapon->m_iItemDefinitionIndex( ) = KNIFE_T;

						// not needed. but everyone does this, try without.
						weapon->m_iViewModelIndex( ) = g_csgo.m_model_info->GetModelIndex( XOR( "models/weapons/v_knife_default_t.mdl" ) );

						// not needed. but everyone does this, try without.
						weapon->m_iWorldModelIndex( ) = g_csgo.m_model_info->GetModelIndex( XOR( "models/weapons/w_knife_default_t.mdl" ) );
					}

					else if( g_cl.m_local->m_iTeamNum( ) == TEAM_COUNTERTERRORISTS ) {
						weapon->m_iItemDefinitionIndex( ) = KNIFE_CT;

						// not needed. but everyone does this, try without.
						weapon->m_iViewModelIndex( ) = g_csgo.m_model_info->GetModelIndex( XOR( "models/weapons/v_knife_default_ct.mdl" ) );

						// not needed. but everyone does this, try without.
						weapon->m_iWorldModelIndex( ) = g_csgo.m_model_info->GetModelIndex( XOR( "models/weapons/w_knife_default_ct.mdl" ) );
					}

					// reset.
					weapon->m_iEntityQuality( ) = 0;
					weapon->m_nFallbackPaintKit( ) = -1;
					weapon->m_nFallbackStatTrak( ) = -1;
				}
			}

			switch( weapon->m_iItemDefinitionIndex( ) ) {
			case DEAGLE:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_DEAGLE_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_DEAGLE_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_DEAGLE_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case ELITE:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_ELITE_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_ELITE_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_ELITE_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case FIVESEVEN:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_FIVESEVEN_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_FIVESEVEN_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_FIVESEVEN_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case GLOCK:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_GLOCK_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_GLOCK_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_GLOCK_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case AK47:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_AK47_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_AK47_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_AK47_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case AUG:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_AUG_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_AUG_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_AUG_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case AWP:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_AWP_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_AWP_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_AWP_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case FAMAS:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_FAMAS_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_FAMAS_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_FAMAS_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case G3SG1:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_G3SG1_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_G3SG1_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_G3SG1_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case GALIL:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_GALIL_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_GALIL_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_GALIL_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case M249:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_M249_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_M249_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_M249_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case M4A4:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_M4A4_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_M4A4_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_M4A4_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case MAC10:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_MAC10_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_MAC10_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_MAC10_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case P90:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_P90_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_P90_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_P90_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case MP5_SD:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_MP5_SD_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_MP5_SD_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_MP5_SD_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case UMP45:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_UMP45_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_UMP45_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_UMP45_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case XM1014:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_XM1014_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_XM1014_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_XM1014_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case BIZON:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_BIZON_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_BIZON_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_BIZON_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case MAG7:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_MAG7_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_MAG7_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_MAG7_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case NEGEV:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_NEGEV_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_NEGEV_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_NEGEV_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case SAWEDOFF:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_SAWEDOFF_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_SAWEDOFF_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_SAWEDOFF_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case TEC9:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_TEC9_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_TEC9_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_TEC9_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case P2000:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_P2000_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_P2000_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_P2000_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case MP7:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_MP7_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_MP7_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_MP7_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case MP9:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_MP9_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_MP9_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_MP9_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case NOVA:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_NOVA_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_NOVA_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_NOVA_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case P250:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_P250_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_P250_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_P250_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case SCAR20:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_SCAR20_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_SCAR20_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_SCAR20_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case SG553:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_SG553_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_SG553_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_SG553_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case SSG08:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_SSG08_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_SSG08_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_SSG08_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case M4A1S:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_M4A1S_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_M4A1S_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_M4A1S_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case USPS:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_USPS_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_USPS_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_USPS_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case CZ75A:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_CZ75A_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_CZ75A_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_CZ75A_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case REVOLVER:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_REVOLVER_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_REVOLVER_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_REVOLVER_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_BAYONET:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_BAYONET_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_BAYONET_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_BAYONET_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_FLIP:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_FLIP_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_FLIP_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_FLIP_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_GUT:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_GUT_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_GUT_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_GUT_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_KARAMBIT:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_KARAMBIT_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_KARAMBIT_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_KARAMBIT_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_M9_BAYONET:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_M9_BAYONET_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_M9_BAYONET_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_M9_BAYONET_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_HUNTSMAN:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_HUNTSMAN_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_HUNTSMAN_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_HUNTSMAN_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_FALCHION:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_FALCHION_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_FALCHION_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_FALCHION_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_BOWIE:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_BOWIE_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_BOWIE_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_BOWIE_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_BUTTERFLY:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_BUTTERFLY_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_BUTTERFLY_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_BUTTERFLY_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_SHADOW_DAGGERS:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_SHADOW_DAGGERS_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_SHADOW_DAGGERS_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_SHADOW_DAGGERS_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;

			case KNIFE_CSS:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_CSS_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_CSS_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_CSS_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_CORD:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_CORD_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_CORD_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_CORD_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_CANIS:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_CANIS_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_CANIS_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_CANIS_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_URSUS:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_URSUS_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_URSUS_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_URSUS_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_GYPSY_JACKKNIFE:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_GYPSY_JACKKNIFE_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_GYPSY_JACKKNIFE_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_GYPSY_JACKKNIFE_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_OUTDOOR:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_OUTDOOR_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_OUTDOOR_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_OUTDOOR_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_STILETTO:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_STILETTO_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_STILETTO_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_STILETTO_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_WIDOWMAKER:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_WIDOWMAKER_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_WIDOWMAKER_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_WIDOWMAKER_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;
			case KNIFE_SKELETON:
				weapon->m_nFallbackPaintKit( ) = m_skins[ g_cfg[ XOR( "skins_KNIFE_SKELETON_kit" ) ].get<int>( ) ].id;
				weapon->m_nFallbackStatTrak( ) = g_cfg[ XOR( "skins_KNIFE_SKELETON_stattrak" ) ].get<int>( ) ? 1337 : -1;
				weapon->m_nFallbackSeed( ) = g_cfg[ XOR( "skins_KNIFE_SKELETON_seed" ) ].get<int>( );
				weapon->m_flFallbackWear( ) = std::numeric_limits<float>::min( );
				break;

			default:
				break;
			}

			// fix stattrak ownership.
			weapon->m_iAccountID( ) = info.m_xuid_low;

			// fix stattrak in hud.
			if( weapon->m_nFallbackStatTrak( ) >= 0 )
				weapon->m_iEntityQuality( ) = 9;

			// force use fallback values.
			weapon->m_iItemIDHigh( ) = -1;
		}
	}

	if( g_cfg[ XOR( "skins_gloves" ) ].get<int>( ) > 0 ) {
		CBaseHandle* wearables = g_cl.m_local->m_hMyWearables( );

		// get pointer to entity from wearable handle 0.
		// glove is at wearable 0, valve will likely add more wearables like hats and boots. thats why.
		Weapon* glove = g_csgo.m_entlist->GetClientEntityFromHandle< Weapon* >( wearables[ 0 ] );

		// there is no glove entity yet.
		if( !glove ) {
			// attempt to get our old glove.
			Weapon* old = g_csgo.m_entlist->GetClientEntityFromHandle< Weapon* >( m_glove_handle );

			// this glove is still valid.
			if( old ) {

				// write back handle to wearables.
				wearables[ 0 ] = m_glove_handle;

				// set glove pointer.
				glove = old;
			}
		}

		// if we at this point still not have a glove entity.
		// we should create one.
		if( !glove ) {
			ClientClass* list{ g_csgo.m_client->GetAllClasses( ) };

			// iterate list.
			for( ; list != nullptr; list = list->m_pNext ) {

				// break if we found wearable
				if( list->m_ClassID == g_netvars.GetClientID( HASH( "CEconWearable" ) ) )
					break;
			}

			// create an ent index and serial no for the new glove entity.
			int index = g_csgo.m_entlist->GetHighestEntityIndex( ) + 1;
			int serial = g_csgo.RandomInt( 0xA00, 0xFFF );

			// call ctor on CEconWearable entity.
			Address networkable = list->m_pCreate( index, serial );

			// get entity ptr via index.
			glove = g_csgo.m_entlist->GetClientEntity< Weapon* >( index );

			static Address offset = g_netvars.get( HASH( "DT_EconEntity" ), HASH( "m_iItemIDLow" ) );

			// m_bInitialized?
			networkable.add( offset.add( 0x8 ) ).set< bool >( true );

			// no idea what this is.
			networkable.add( offset.sub( 0xC ) ).set< bool >( true );

			// set the wearable handle.
			wearables[ 0 ] = index | ( serial << 16 );

			// use this for later on.
			m_glove_handle = wearables[ 0 ];
		}

		// store glove data.
		GloveData* data = &m_glove_data[ g_cfg[ XOR( "skins_gloves" ) ].get<int>( ) ];

		// set default data,
		glove->m_nFallbackSeed( ) = 0;
		glove->m_nFallbackStatTrak( ) = -1;
		glove->m_iItemIDHigh( ) = -1;
		glove->m_iEntityQuality( ) = 4;
		glove->m_iAccountID( ) = info.m_xuid_low;

		// set custom data.
		glove->m_nFallbackPaintKit( ) = m_gloves[ g_cfg[ XOR( "skins_glove_kit" ) ].get<int>( ) ].id;
		glove->m_iItemDefinitionIndex( ) = data->m_id;
		glove->SetGloveModelIndex( data->m_model_index );

		// update the glove.
		glove->PreDataUpdate( DATA_UPDATE_CREATED );
	}

	// only force update every 1s.
	if( m_update && g_csgo.m_globals->m_curtime >= m_update_time ) {
		for( auto& w : weapons )
			UpdateItem( w );

		m_update = false;
		m_update_time = g_csgo.m_globals->m_curtime + 1.f;

		g_csgo.m_cl->m_delta_tick = -1;

		UpdateHud( );
	}
}

void Skins::AgentChanger( Stage_t stage ) {

	// make sure we aren't doing this while the game is setting up models.
	if ( stage != FRAME_NET_UPDATE_END && stage != FRAME_RENDER_END )
		return;

	// reset our old model.
	if ( !g_cl.m_local ) {
		m_old_agent = 0;
		return;
	}

	// no need to run the code since we can't set our old agent anyways.
	if( !g_cfg[ XOR( "skins_agent_enable" ) ].get< bool >( ) && !m_old_agent )
		return;

	// get agent from config.
	const char* m_agent = m_agents.at( g_cfg[ XOR( "skins_agent" ) ].get< int >( ) ).c_str( );		

	if ( stage == FRAME_NET_UPDATE_END )
		m_old_agent = g_cl.m_local->m_nModelIndex( );

	// get our model index, if we're at the end of the rendering queue we want to set our old model back.
	auto m_model_index = g_csgo.m_model_info->GetModelIndex( m_agent );

	if ( !g_cfg[ XOR( "skins_agent_enable" ) ].get< bool >( ) ) {
		m_model_index = m_old_agent;
		m_old_agent = 0;
	}

	g_cl.m_local->SetModelIndex( m_model_index );

	// fix ragdolls.
	if ( const auto ragdoll = g_csgo.m_entlist->GetClientEntityFromHandle( g_cl.m_local->m_hRagdoll( ) ) )
		ragdoll->SetModelIndex( m_model_index );
}

void Skins::UpdateItem( Weapon* item ) {
	if( !item || !item->IsBaseCombatWeapon( ) )
		return;

	if( g_csgo.m_cl->m_delta_tick == -1 )
		return;

	//  if ( sub_106E32D0(v4, "round_start") )
	//		SFWeaponSelection::ShowAndUpdateSelection( v2, 2, 0, v10 );

	// v1 = CHud::FindElement(&g_HUD, "SFWeaponSelection");
	// if( v1 )
	//		SFWeaponSelection::ShowAndUpdateSelection( ( int * )v1, 2, 0, this );

	item->m_bCustomMaterialInitialized( ) = item->m_nFallbackPaintKit( ) <= 0;

	item->m_CustomMaterials( ).RemoveAll( );
	item->m_CustomMaterials2( ).RemoveAll( );

	size_t count = item->m_VisualsDataProcessors( ).Count( );
	for( size_t i{ }; i < count; ++i ) {
		auto& elem = item->m_VisualsDataProcessors( )[ i ];
		if( elem ) {
			elem->unreference( );
			elem = nullptr;
		}
	}

	item->m_VisualsDataProcessors( ).RemoveAll( );

	item->PostDataUpdate( DATA_UPDATE_CREATED );
	item->OnDataChanged( DATA_UPDATE_CREATED );

	//	CHudElement* SFWeaponSelection = g_csgo.m_hud->FindElement( HASH( "SFWeaponSelection" ) );
	//	g_csgo.ShowAndUpdateSelection( SFWeaponSelection, 0, item, false );
}

void Skins::UpdateAnimations( Entity* ent ) {
	int knife = g_cfg[ XOR( "skins_knife" ) ].get<int>( );

	int seq = ent->m_nSequence( );

	// check if this knife needs extra fixing.
	if( knife == knives_t::BUTTERFLY || knife == knives_t::FALCHION || knife == knives_t::DAGGER || knife == knives_t::BOWIE || knife == knives_t::NOMAD ) {

		// fix the idle sequences.
		if( seq == sequence_default_idle1 || seq == sequence_default_idle2 ) {
			// set the animation to be completed.
			ent->m_flCycle( ) = 0.999f;

			// cycle change, re-render.
			ent->InvalidatePhysicsRecursive( ANIMATION_CHANGED );
		}
	}

	// fix sequences.
	if( m_last_seq != seq ) {
		if( knife == knives_t::BUTTERFLY ) {
			switch( seq ) {
			case sequence_default_draw:
				seq = g_csgo.RandomInt( sequence_butterfly_draw, sequence_butterfly_draw2 );
				break;

			case sequence_default_lookat01:
				seq = g_csgo.RandomInt( sequence_butterfly_lookat01, sequence_butterfly_lookat03 );
				break;

			default:
				seq++;
				break;
			}
		}

		else if( knife == knives_t::FALCHION ) {
			switch( seq ) {
			case sequence_default_draw:
			case sequence_default_idle1:
				break;

			case sequence_default_idle2:
				seq = sequence_falchion_idle1;
				break;

			case sequence_default_heavy_miss1:
				seq = g_csgo.RandomInt( sequence_falchion_heavy_miss1, sequence_falchion_heavy_miss1_noflip );
				break;

			case sequence_default_lookat01:
				seq = g_csgo.RandomInt( sequence_falchion_lookat01, sequence_falchion_lookat02 );
				break;
			}
		}

		else if( knife == knives_t::DAGGER ) {
			switch( seq ) {
			case sequence_default_idle2:
				seq = sequence_push_idle1;
				break;

			case sequence_default_heavy_hit1:
			case sequence_default_heavy_backstab:
			case sequence_default_lookat01:
				seq += 3;
				break;

			case sequence_default_heavy_miss1:
				seq = sequence_push_heavy_miss2;
				break;
			}

		}

		else if( knife == knives_t::BOWIE ) {
			if( seq > sequence_default_idle1 )
				seq--;
		}

		else if( knife == knives_t::URSUS ||
			knife == knives_t::PARACORD ||
			knife == knives_t::CANIS ||
			knife == knives_t::NOMAD ||
			knife == knives_t::SKELETON ) {
			switch( seq ) {
			case sequence_default_draw:
				seq = g_csgo.RandomInt( sequence_butterfly_draw, sequence_butterfly_draw2 );
				break;

			case sequence_default_lookat01:
				seq = g_csgo.RandomInt( sequence_butterfly_lookat01, 14 );
				break;

			default:
				seq++;
				break;
			}
		}

		else if( knife == knives_t::STILETTO ) {
			switch( seq ) {
			case sequence_butterfly_lookat01:
				seq = g_csgo.RandomInt( 12, 13 );
				break;
			}
		}
		else if( knife == knives_t::TALON ) {
			switch( seq ) {
			case sequence_butterfly_lookat01:
				seq = g_csgo.RandomInt( 14, 15 );
				break;
			}
		}

		m_last_seq = seq;
	}

	// write back fixed sequence.
	ent->m_nSequence( ) = seq;
}

void Skins::init( )
{
	static std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	const auto sig_address = g_csgo.PainkitDefinition;
	const auto item_system_offset = *sig_address.add( 0x1 ).as< std::int32_t*>( );
	const auto item_system_fn = reinterpret_cast< CCStrike15ItemSystem * ( * )( ) >( sig_address.add( 0x5 ) + item_system_offset );
	const auto item_schema = reinterpret_cast< CCStrike15ItemSchema* >( std::uintptr_t( item_system_fn( ) ) + sizeof( void* ) );

	const auto get_paint_kit_definition_offset = *sig_address.add( 12 ).as< std::int32_t*>( );
	const auto get_paint_kit_definition_fn = reinterpret_cast< CPaintKit * ( __thiscall* )( CCStrike15ItemSchema*, int ) >( sig_address.add( 16 ) + get_paint_kit_definition_offset );
	const auto start_element_offset = *reinterpret_cast< std::intptr_t* >( std::uintptr_t( get_paint_kit_definition_fn ) + 8 + 2 );
	const auto head_offset = start_element_offset - 12;
	const auto map_head = reinterpret_cast< Head_t<int, CPaintKit*>* >( std::uintptr_t( item_schema ) + head_offset );

	for( auto i = 0; i <= map_head->last_element; ++i ) {
		const auto paint_kit = map_head->memory[ i ].value;

		if( paint_kit->id == 9001 )
			continue;

		const auto wide_name = g_csgo.m_localize->Find( paint_kit->item_name.buffer + 1 );
		const auto name = converter.to_bytes( wide_name );

		if( paint_kit->id < 10000 )
			m_skins.push_back( { paint_kit->id, name } );
		else
			m_gloves.push_back( { paint_kit->id, name } );
	}

	std::sort( m_skins.begin( ), m_skins.end( ) );
	std::sort( m_gloves.begin( ), m_gloves.end( ) );

	// copy array contents
	for( auto i = 0; i < m_skins.size( ); ++i ) {
		m_paint_kits.emplace_back( m_skins[ i ].name );
	}

	for( auto i = 0; i < m_gloves.size( ); ++i ) {
		m_glove_kits.emplace_back( m_gloves[ i ].name );
	}
}

void Skins::UpdateHud( )
{
	static auto fn = g_csgo.UpdateHud.as< std::int32_t( __thiscall* )( void*, std::int32_t )>( );
	if( !fn )
		return;

	auto element = game::FindHudElement<std::uintptr_t*>( XOR( ( "CCSGO_HudWeaponSelection" ) ) );
	if( !element )
		return;

	auto hud_weapons = reinterpret_cast< HudWeapons_t* >( std::uintptr_t( element ) - 0xA0 );
	if( !hud_weapons )
		return;

	if( !*hud_weapons->GetWeaponCount( ) )
		return;

	for( std::int32_t i = 0; i < *hud_weapons->GetWeaponCount( ); i++ )
		i = fn( hud_weapons, i );
}