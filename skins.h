#pragma once

constexpr int sequence_default_draw = 0;
constexpr int sequence_default_idle1 = 1;
constexpr int sequence_default_idle2 = 2;
constexpr int sequence_default_heavy_miss1 = 9;
constexpr int sequence_default_heavy_hit1 = 10;
constexpr int sequence_default_heavy_backstab = 11;
constexpr int sequence_default_lookat01 = 12;

constexpr int sequence_butterfly_draw = 0;
constexpr int sequence_butterfly_draw2 = 1;
constexpr int sequence_butterfly_lookat01 = 13;
constexpr int sequence_butterfly_lookat03 = 15;

constexpr int sequence_falchion_idle1 = 1;
constexpr int sequence_falchion_heavy_miss1 = 8;
constexpr int sequence_falchion_heavy_miss1_noflip = 9;
constexpr int sequence_falchion_lookat01 = 12;
constexpr int sequence_falchion_lookat02 = 13;

constexpr int sequence_push_idle1 = 1;
constexpr int sequence_push_heavy_miss2 = 11;

class CCStrike15ItemSchema;

class CCStrike15ItemSystem;

template <typename Key, typename Value>

struct Node_t {
	int previous_id;        //0x0000
	int next_id;            //0x0004
	void* _unknown_ptr;        //0x0008
	int _unknown;            //0x000C
	Key key;                //0x0010
	Value value;            //0x0014
};

template <typename Key, typename Value>

struct Head_t {
	Node_t<Key, Value>* memory;        //0x0000
	int allocation_count;            //0x0004
	int grow_size;                    //0x0008
	int start_element;                //0x000C
	int next_available;                //0x0010
	int _unknown;                    //0x0014
	int last_element;                //0x0018
}; //Size=0x001C

struct String_t {
	char* buffer;    //0x0000
	int capacity;    //0x0004
	int grow_size;    //0x0008
	int length;        //0x000C
}; //Size=0x0010

struct CPaintKit {
	int id;                        //0x0000

	String_t name;                //0x0004
	String_t description;        //0x0014
	String_t item_name;            //0x0024
	String_t material_name;        //0x0034
	String_t image_inventory;    //0x0044

	char pad_0x0054[0x8C];        //0x0054
}; //Size=0x00E0

struct paint_kit_t {
	int id;
	std::string name;

	auto operator < (const paint_kit_t& other) const -> bool {
		return name < other.name;
	}
};


struct KnifeData {
	int         m_id;
	std::string m_model, m_world_model, m_name;
	int         m_model_index, m_world_model_index;

	__forceinline KnifeData( ) : m_id{}, m_model{}, m_world_model{}, m_name {}, m_model_index{}, m_world_model_index{} {}

	__forceinline void setup( int id, const std::string& model, const std::string& world_model, const std::string& name ) {
		m_id                = id;
		m_model             = model;
		m_name              = name;
		m_model_index       = g_csgo.m_model_info->GetModelIndex( model.data( ) );
		m_world_model_index = g_csgo.m_model_info->GetModelIndex( world_model.data( ) );
	}
};

struct GloveData {
	int         m_id;
	std::string m_model, m_world_model;
	int         m_model_index, m_world_model_index;

	__forceinline GloveData( ) : m_id{}, m_model{}, m_model_index{} {}

	__forceinline void setup( int id, const std::string& model, const std::string& world_model ) {
		m_id                = id;
		m_model             = model;
		m_world_model       = world_model;
		m_model_index       = g_csgo.m_model_info->GetModelIndex( model.data( ) );
		m_world_model_index = g_csgo.m_model_info->GetModelIndex( world_model.data( ) );
	}
};

struct HudWeapons_t {
	std::int32_t* GetWeaponCount() {
		return reinterpret_cast<std::int32_t*>(std::uintptr_t(this) + 0x80);
	}
};

class Skins {
public:

	std::vector< std::string > m_agents {
		XOR( "models/player/custom_player/legacy/ctm_fbi_variantb.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_fbi_variantf.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_fbi_variantg.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_fbi_varianth.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_sas_variantf.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_variante.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_variantg.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_varianti.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_variantk.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_variantm.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_variantj.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_st6_variantl.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_variantf.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_variantg.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_varianth.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_varianti.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_variantj.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_variantk.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_balkan_variantl.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_leet_variantf.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_leet_variantg.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_leet_varianth.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_leet_varianti.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_phoenix_variantf.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_phoenix_variantg.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_phoenix_varianth.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_phoenix_varianti.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_swat_variante.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_swat_variantf.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_swat_variantg.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_swat_varianth.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_swat_varianti.mdl" ),
		XOR( "models/player/custom_player/legacy/ctm_swat_variantj.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varf.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varf1.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varf2.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varf3.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varf4.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varg.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varh.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_vari.mdl" ),
		XOR( "models/player/custom_player/legacy/tm_professional_varj.mdl" )
	};

	enum knives_t {
		//DEFAULT_T = 0,
		//DEFAULT_CT = 1,
		BAYONET = 1,
		BOWIE,
		BUTTERFLY,
		FALCHION ,
		FLIP,
		GUT,
		HUNTSMAN,
		KARAMBIT,
		M9,
		DAGGER,
		CLASSIC,
		PARACORD,
		CANIS,
		URSUS,
		NAVAJA,
		NOMAD,
		STILETTO,
		TALON,
		SKELETON,
		KNIFE_MAX
	};

	enum gloves_t {
		BLOODHOUND = 1,
		SPORTY,
		DRIVER,
		HANDWRAP,
		MOTO,
		SPECIALIST,
		HYDRA,
		BROKENFANG,
		GLOVE_MAX
	};

public:
	KnifeData   m_knife_data[ knives_t::KNIFE_MAX ];
	GloveData   m_glove_data[ gloves_t::GLOVE_MAX ];
	int         m_last_seq;
	CBaseHandle m_glove_handle;
	bool        m_update;
	float       m_update_time;
	int         m_old_agent;

	std::vector<paint_kit_t> m_skins;
	std::vector<std::string> m_paint_kits;

	std::vector<paint_kit_t> m_gloves;
	std::vector<std::string> m_glove_kits;

public:
	void load( );
	void think( );
	void AgentChanger( Stage_t stage );
	void UpdateItem( Weapon* item );
	void UpdateAnimations( Entity* ent );
	void init();
	void UpdateHud();
};

extern Skins g_skins;