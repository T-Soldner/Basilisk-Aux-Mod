class CfgPatches
{
	class BasiliskWeapons
	{
		// Meta information for editor
		name = "Basilisk AUX Mod";
		author = "Soldner";
		url = "https://discord.gg/ZpeRJyyddS";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Data_F_Decade_Loadorder" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

//ace arsenal stuff

class XtdGearModels
{
	class CfgWeapons
	{
		class Basilisk_squad_weapons
		{
			label = "Basilisk Squad Weapons";
			options[] = {"type","GL"};
			class type {
				alwaysSelectable = 1;
				label = "Type";
				values[] = {"VulcanM7","TemplarMA5","OlympusM7"};
				class VulcanM7 {
					label = "Vulcan M7";
				};
				class TemplarMA5 {
					label = "Templar";
				};
				class OlympusM7 {
					label = "Olympus M7";
				};
			};
			class GL {
				alwaysSelectable = 1;
				label = "GL";
				values[] = {"NoGL","GL"};
				class NoGL {
					label = "No GL";
				};
				class GL {
					label = "GL";
				};
			};
		};
		class Basilisk_personal_primary_weapons
		{
			label = "Basilisk Personal Weapons";
			options[] = {"type"};
			class type {
				alwaysSelectable = 1;
				label = "Owner";
				values[] = {"HollandAK120"};
				class HollandAK120 {
					label = "Holland";
				};
			};
		};
	};		
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Basilisk_Olympus_M7 {
			model = "Basilisk_squad_weapons";
			type = "OlympusM7";
			GL = "NoGL";
		};
		class Basilisk_Vulcan_M7 {
			model = "Basilisk_squad_weapons";
			type = "VulcanM7";
			GL = "NoGL";
		};
		class Basilisk_Templar_MA5B {
			model = "Basilisk_squad_weapons";
			type = "TemplarMA5";
			GL = "NoGL";
		};
		class Basilisk_Templar_MA5BGL {
			model = "Basilisk_squad_weapons";
			type = "TemplarMA5";
			GL = "GL";
		};
		class Basilisk_Holland_AK120 {
			model = "Basilisk_personal_primary_weapons";
			type = "HollandAK120";
		};
	};
};


class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons
{
	//Vulcan M7
	class OPTRE_M7;	
	class Basilisk_Vulcan_M7 : OPTRE_M7
	{
		dlc = "Basilisk AUX Mod";
		author = "Soldner";
		baseWeapon = "Basilisk_Vulcan_M7";
		scope = 2;
		scopearsenal = 2;
		displayName = "[Basilisk] Vulcan M7X Caseless SMG";
		canShootInWater = 1;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"BasiliskWeapons\data\Vulcan_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"optre_m7_silencer","optre_ma5suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO_Red","optic_hamr","OPTRE_M7_Sight"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","ace_acc_pointer_green","MEU_M7_Vis_Laser","OPTRE_BMR_Laser"};
			};
		};
	};
	
	//Templar MA5B
	class OPTRE_MA5B;
	class OPTRE_MA5BGL;
	class OPTRE_M301UGL;
	class Basilisk_Templar_MA5B: OPTRE_MA5B
	{
		dlc = "Basilisk AUX Mod";
		author = "Soldner";
		baseWeapon = "Basilisk_Templar_MA5B";
		displayName = "[Basilisk] Templar's MA5B";
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw","MEU_60rnd_762_51"};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"BasiliskWeapons\data\templarWeapon_CO.paa","BasiliskWeapons\data\templarSmartlink_co.paa","BasiliskWeapons\data\templarCover_co.paa","optre_weapons\optics\data\reticles\ma5_reticle.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO","MEU_REC_HOLO_Red","MEU_REC_HOLO_Gre","optic_Yorris","optic_DMS","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_MRCO","optic_Arco","optic_Arco_ghex_F","optic_Arco_blk_F","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Hamr_khk_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M12_Optic","optic_ico_01_black_f","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","acc_pointer_ir","acc_flashlight","OPTRE_BMR_Laser","optre_m12_laser","ace_acc_pointer_green","optre_m45_flashlight","optre_m45_flashlight_red","acc_pointer_vis_red","MEU_M12_Vis_Laser","MEU_BMR_Vis_Laser","MEU_M7_Vis_Laser","MEU_M6G_Laser"};
			};
		};
	};
	class Basilisk_Templar_MA5BGL: OPTRE_MA5BGL
	{
		dlc = "Basilisk AUX Mod";
		author = "Soldner";
		baseWeapon = "Basilisk_Templar_MA5BGL";
		displayName = "[Basilisk] Templar's MA5BGL";
		canShootInWater = 1;
		magazineWell[] = {"MEU_rifle_uw","MEU_60rnd_762_51"};
		magazines[] = {};
		hiddenSelectionsTextures[] = {"BasiliskWeapons\data\templarWeapon_CO.paa","BasiliskWeapons\data\templarSmartlink_co.paa","BasiliskWeapons\data\templarCover_co.paa","optre_weapons\optics\data\reticles\ma5_reticle.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_h_mg_blk_f","muzzle_snds_l","optre_ma5suppressor","ace_muzzle_mzls_b","muzzle_snds_b","OPTRE_MA37KSuppressor","muzzle_snds_65_TI_blk_F"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"MEU_REC_HOLO","MEU_REC_HOLO_Red","MEU_REC_HOLO_Gre","optic_Yorris","optic_DMS","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_MRCO","optic_Arco","optic_Arco_ghex_F","optic_Arco_blk_F","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Hamr_khk_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M12_Optic","optic_ico_01_black_f","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_M7_Flashlight","OPTRE_M7_Laser","acc_pointer_ir","acc_flashlight","OPTRE_BMR_Laser","optre_m12_laser","ace_acc_pointer_green","optre_m45_flashlight","optre_m45_flashlight_red","acc_pointer_vis_red","MEU_M12_Vis_Laser","MEU_BMR_Vis_Laser","MEU_M7_Vis_Laser","MEU_M6G_Laser"};
			};
		};
		class OPTRE_M301UGL: OPTRE_M301UGL
		{
			magazines[] = {};
			magazineWell[] = {"MEU_GL_Explosive_Lethal","MEU_GL_Smokes","MEU_GL_Tactile","MEU_GL_Flares"};
		};
	};
	
	//Holland AK
	class arifle_AK12_GL_F;
	class Basilisk_Holland_AK120 : arifle_AK12_GL_F
	{
		dlc = "Basilisk AUX Mod";
		author = "VorpalHotdog";
		baseWeapon = "Basilisk_Holland_AK120";
		scope = 2;
		scopearsenal = 2;
		displayName = "[Basilisk] Holland's AK-120";
		canShootInWater = 1;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BasiliskWeapons\data\Holland_ak120_1.paa","BasiliskWeapons\data\Holland_ak120_2.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"OPTRE_MA5Suppressor"};
			}; 
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","tcf_ma1b_ammocounter",};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR","OPTRE_BMR_Laser"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
	};

	//Olympus M7
	class Basilisk_Olympus_M7 : OPTRE_M7
	{
		dlc = "Basilisk AUX Mod";
		author = "Soldner";
		baseWeapon = "Basilisk_Olympus_M7";
		scope = 2;
		scopearsenal = 2;
		displayName = "[Basilisk] Olympus M7X Caseless SMG";
		canShootInWater = 1;
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "BasiliskWeapons\data\Olympus_m7_co.paa","OPTRE_Weapons\smg\data\m7_magazine_co.paa" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] = { "optre_m7_silencer" };
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] = { "MEU_REC_HOLO_DMR","optic_hamr","OPTRE_M7_Sight" };
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = { "OPTRE_M7_Flashlight","OPTRE_M7_Laser","MEU_M7_Vis_Laser" };
			};
		};
	};

	//Basilisk Railgun
	class OPTRE_FC_Railgun;
	class Basilisk_Railgun : OPTRE_FC_Railgun
	{
		dlc = "Basilisk AUX Mod";
		scope = 2;
		scopearsenal = 2;
		displayname = "[Basilisk] Modified ARC-920 Railgun";
		author = "Soldner";
		baseWeapon = "Basilisk_Railgun";
		magazines[] = { "Basilisk_Railgun_Slug" };
		initspeed = 1000;
		maxZeroing = 1000;
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "BasiliskWeapons\data\railgun_co.paa","optre_fc_weapons\railgun\data\r_railgun_ca.paa" };
	};
};


class CfgMagazines
{
	//Railgun Ammo
	class OPTRE_FC_Railgun_Slug;
	class Basilisk_Railgun_Slug : OPTRE_FC_Railgun_Slug
	{
		displayName = "[Basilisk] Railgun";
		displayNameShort = "16x65mm Slug";
		ammo = "Basilisk_16x65mm_Slug";
		picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		descriptionshort = "16x65mm Slug for the ARC-920 Railgun";
		count = 1;
		mass = 20;
		ace_arsenal_hide = -1;
	};

	//45 Ammo
	class 11Rnd_45ACP_Mag;
	class Basilisk_20Rnd_45ACP_Mag : 11Rnd_45ACP_Mag {
		displayName = "[Basilisk] 20rnd 45ACP";
		ammo = "Basilisk_45ACP";
		count = 20;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		initSpeed = 700;
	};

};
class CfgAmmo {
	//Railgun Ammo
	class OPTRE_FC_16x65mm_Slug;
	class Basilisk_16x65mm_Slug : OPTRE_FC_16x65mm_Slug
	{
		hit = 2000;
		indirectHit = 50;
		indirectHitRange = 5;
		caliber = 2000;
	};
	
	//45 Ammo
	class B_45ACP_Ball;
	class Basilisk_45ACP : B_45ACP_Ball
	{
		hit = 20;
		caliber = 6;
		typicalSpeed = 300;
	};
};