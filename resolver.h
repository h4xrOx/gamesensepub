#pragma once

class ShotRecord;

struct BackupData_t {
	CCSGOPlayerAnimState   m_nBackupState;
	C_AnimationLayer       m_nBackupLayers[ 13 ];
	ang_t                  m_nBackupAngles{ }, m_nBackupAbsAngles{ };
	vec3_t                 m_nBackupOrigin, m_nBackupVelocity{ }, m_nBackupAbsVelocity{ };
	int                    m_nBackupFlags{ };
	float                  m_nBackupDuckAmount, m_nBackupPoses[ 24 ]{ }, m_nBackupGoalFeetYaw{ }, m_flBackupLowerBodyTarget{ }, m_nBackupSimulationTime{ };
	bool                   m_nBackupClientSideAnimation{ }, m_nBackupDucked{ };
	Player*				   m_pPlayer;
};

class Resolver {
public:
	static void StoreMatrices( LagComp::LagRecord_t& record );
	void ResolveAngles( Player* player, LagComp::LagRecord_t* record, LagComp::LagRecord_t* prev_record );
	void BackupData( BackupData_t* m_data );
	void RestoreData( BackupData_t* m_data );

	float fl_stored_brute[ 65 ];
public:
	void setup_detect( AimPlayer* data, Player* player, LagComp::LagRecord_t* record );
	void detect_side( Player* player, int* side );
	void check_low_delta_desync( AimPlayer* data, Player* player, LagComp::LagRecord_t* record );
	void AntiFreestand();
	void logic ( Player* entity );
	void ResolveEntity(Player* player,AimPlayer* data,LagComp::LagRecord_t* record,LagComp::LagRecord_t* prev_record);
	float ResolveShot( AimPlayer* data, LagComp::LagRecord_t* record );
};

extern Resolver g_resolver;