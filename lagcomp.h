#pragma once

class AimPlayer;

class LagComp {
public:
	struct LagRecord_t {
		struct LayerData_t {
			int m_nSequence;
			float m_flPlaybackRate;
			float m_flCycle;
			float m_flWeight;
			float m_flWeightWithAirSmooth;
			float m_flFeetWeight;

			float m_flMovementSide;
			ang_t m_angMoveYaw;
			vec3_t m_vecDirection;
		};

		LagRecord_t( ) = default;

		explicit LagRecord_t( Player* pEntity );
		explicit LagRecord_t( Player* pEntity, ang_t vecLastReliableAngle );

		void Restore( Player* pEntity );
		void Apply( Player* pEntity );
		bool IsValid( float flSimulationTime, bool bValid, const float flRange = 0.2f );
		void BuildBones( Player* player, bool resolve = false );

		Player* m_pEntity;
		int m_iEntIndex;

		bool m_bValid;

		BoneArray m_pMatrix[128];
		BoneArray m_pMatrix_Resolved[ 128 ];
		//BoneArray m_pMatrix_Resolved_Inverted[128];

		BoneArray center_matrix[ 128 ];
		BoneArray left_matrix[ 128 ];
		BoneArray right_matrix[ 128 ];
		C_AnimationLayer right_layers[ 13 ];
		C_AnimationLayer left_layers[ 13 ];
		C_AnimationLayer center_layers[ 13 ];

		bool m_bDormant;

		vec3_t m_vecVelocity;
		vec3_t m_vecOrigin;
		vec3_t m_vecAbsOrigin;
		vec3_t m_vecMins;
		vec3_t m_vecMaxs;

		C_AnimationLayer m_pLayers[ 13 ];
		float m_pPoses[ 24 ];

		CCSGOPlayerAnimState* m_pState;

		float m_flSimulationTime;
		float m_flInterpTime;
		float m_flDuck;
		float m_flLowerBodyYawTarget;
		float m_flLastShotTime;
		float m_flSpawnTime;

		ang_t m_angLastReliableAngle;
		ang_t m_angEyeAngles;
		ang_t m_angAbsAngles;

		CBaseHandle m_ulEntHandle;

		int m_fFlags;
		int m_iEFlags;
		int m_iEffects;
		int m_iChoked;

		bool m_bDidShot;
		bool m_bPrefer = false;
		bool m_bAllowAnimationUpdate;
		bool m_bAnimatePlayer;

		LayerData_t m_LayerData[ 3 ];
	};

	void PostPlayerUpdate( );

	bool BreakingLagCompensation( Player* pEntity );

	std::optional<LagRecord_t*> GetLatestRecord( Player* pEntity );
	std::optional<LagRecord_t*> GetOldestRecord( Player* pEntity );

	std::optional<std::pair<LagRecord_t*, LagRecord_t*>> GetViableRecords( Player* pEntity, float flRange = 1.0f );

	std::vector<LagComp::LagRecord_t*> GetValidRecords( Player* pEntity, const float flRange = 1.0f );
};

extern LagComp g_lagcompensation;