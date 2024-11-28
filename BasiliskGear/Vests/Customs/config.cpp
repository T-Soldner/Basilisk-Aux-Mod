class CfgPatches
{
	class BasiliskGear_Vests_Custom
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "BasiliskGear";

		requiredVersion = 1.60;
		requiredAddons[] = { "BasiliskGear" };
		units[] = {};
		weapons[] = {};
	};
};
class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class Basilisk_custom_vests
		{
			label = "Custom Vests";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Standard","Burtovski","Chop","Sabbath" };
				class Standard {
					label = "Standard";
				};
				class Burtovski {
					label = "Burtovski";
				};
				class Chop {
					label = "Chop";
				};
				class Sabbath {
					label = "Sabbath";
				};
			};
		};
		class Basilisk_Olympus_vests
		{
			label = "Olympus Vests";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Soldner","Holland","Kaker","Tepfer" };
				class Soldner {
					label = "Soldner";
				};
				class Holland {
					label = "Holland";
				};
				class Kaker {
					label = "Kaker";
				};
				class Tepfer {
					label = "Tepfer";
				};
			};
		};
		class Basilisk_Fury_vests
		{
			label = "Fury Vests";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Buckley","Payne","Wolf" };
				class Buckley {
					label = "Buckley";
				};
				class Payne {
					label = "Payne";
				};
				class Wolf {
					label = "Wolf";
				};
			};
		};
		class Basilisk_Corvus_vests
		{
			label = "Corvus Vests";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Blackburn","Pjetrovic","Lancer"};
				class Blackburn {
					label = "Blackburn";
				};
				class Pjetrovic {
					label = "Pjetrovic";
				};
				class Lancer {
					label = "Lancer";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		//Standard
		class Basilisk_Standard_M56_Armor {
			model	= "Basilisk_custom_vests";
			role	= "Standard";
		};
		class Basilisk_Burtovski_M56R_Armor {
			model	= "Basilisk_custom_vests";
			role	= "Burtovski";
		};
		class Basilisk_Chopper_M56R_Armor {
			model	= "Basilisk_custom_vests";
			role	= "Chop";
		};
		class Basilisk_Sabbath_M56R_Armor {
			model	= "Basilisk_custom_vests";
			role	= "Sabbath";
		};

		//Olympus
		class Basilisk_Holland_M56R_Armor {
			model	= "Basilisk_Olympus_vests";
			role	= "Holland";
		};
		class Basilisk_Soldner_M56R_Armor {
			model	= "Basilisk_Olympus_vests";
			role	= "Soldner";
		};
		class Basilisk_Kaker_M56R_Armor {
			model	= "Basilisk_Olympus_vests";
			role	= "Kaker";
		};
		class Basilisk_Tepfer_M56R_Armor {
			model	= "Basilisk_Olympus_vests";
			role	= "Tepfer";
		};

		//Fury
		class Basilisk_Buckley_M56R_Armor {
			model	= "Basilisk_Fury_vests";
			role	= "Buckley";
		};
		class Basilisk_Payne_M56R_Armor {
			model	= "Basilisk_Fury_vests";
			role	= "Payne";
		};
		class Basilisk_Wolf_M56R_Armor {
			model	= "Basilisk_Fury_vests";
			role	= "Wolf";
		};

		//Corvus 
		class Basilisk_Blackburn_M56R_Armor {
			model	= "Basilisk_Corvus_vests";
			role	= "Blackburn";
		};
		class Basilisk_Pjetrovic_M56R_Armor {
			model	= "Basilisk_Corvus_vests";
			role	= "Pjetrovic";
		};
		class Basilisk_Lancer_M56S_Armor {
			model	= "Basilisk_Corvus_vests";
			role	= "Lancer";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class Basilisk_Base_M56R_Armor;

	//Standard
	class Basilisk_Standard_M56_Armor: Basilisk_Base_M56R_Armor {
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56R Combat Armor - Standard";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"H3_Armor_Upper",
			"H3_Armor_Lower"
		};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"};
		};
	};
	class Basilisk_Burtovski_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56R Combat Armor (Burtovski)";
		hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Burtovski_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\Burtovski_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","BasiliskGear\data\armor\Burtovski_Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Burtovski_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\Burtovski_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","BasiliskGear\data\armor\Burtovski_Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		};
	};
	class Basilisk_Chopper_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "[Basilisk] M56R Combat Armor (Chopper)";
		hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\chopper_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\chopper_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\chopper_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\chopper_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\chopper_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\chopper_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		};
	};
	class Basilisk_Sabbath_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Sabbath";
		displayName = "[Basilisk] M56R Combat Armor (Sabbath)";
		hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Sabbath_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\Sabbath_Reach_Armor_Lower_co.paa","BasiliskGear\data\armor\Sabbath_Canisters_co.paa","BasiliskGear\data\armor\Sabbath_Forearm_Vents_co.paa","BasiliskGear\data\armor\Sabbath_Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","BasiliskGear\data\armor\Sabbath_Shoulder_Radio_co.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Sabbath_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\Sabbath_Reach_Armor_Lower_co.paa","BasiliskGear\data\armor\Sabbath_Canisters_co.paa","BasiliskGear\data\armor\Sabbath_Forearm_Vents_co.paa","BasiliskGear\data\armor\Sabbath_Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","BasiliskGear\data\armor\Sabbath_Shoulder_Radio_co.paa" };
		};
	};

	//Olympus
	class Basilisk_Soldner_M56R_Armor: Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56R Combat Armor (Soldner)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Soldner_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\Soldner_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","BasiliskGear\data\armor\Soldner_Forearm_Vents_co.paa","BasiliskGear\data\armor\Soldner_Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","BasiliskGear\data\armor\Soldner_Shoulder_Radio_co.paa"};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Soldner_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\Soldner_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","BasiliskGear\data\armor\Soldner_Forearm_Vents_co.paa","BasiliskGear\data\armor\Soldner_Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","BasiliskGear\data\armor\Soldner_Shoulder_Radio_co.paa"};
		};
	};
	class Basilisk_Holland_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "[Basilisk] M56R Combat Armor (Holland)";
		hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Right","H3_Armor_Upper","H3_Armor_Lower" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","BasiliskGear\data\armor\holland_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\holland_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\holland_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Shoulder_Radio_Left","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Right","H3_Armor_Upper","H3_Armor_Lower" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","BasiliskGear\data\armor\holland_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\holland_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\holland_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		};
	};
	class Basilisk_Kaker_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Kaker";
		displayName = "[Basilisk] M56R Combat Armor (Kaker)";
		hiddenSelections[] = { 
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Thigh_Pouch",
			"Reach_Armor_Lower",
			"H3_Armor_Upper",
			"Canisters" 
		};
		hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\Reach_ODST\H3_Upper_Armor_co.paa","BasiliskGear\data\armor\kaker_H3_Armor_Lower_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","BasiliskGear\data\armor\kaker_Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\kaker_CQB_co.paa","BasiliskGear\data\armor\kaker_Shoulder_Radio_ODST_co.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Right","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Thigh_Pouch","Reach_Armor_Lower","H3_Armor_Upper","Canisters" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\Reach_ODST\H3_Upper_Armor_co.paa","BasiliskGear\data\armor\kaker_H3_Armor_Lower_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","BasiliskGear\data\armor\kaker_Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\kaker_CQB_co.paa","BasiliskGear\data\armor\kaker_Shoulder_Radio_ODST_co.paa" };
		};
	};
	class Basilisk_Tepfer_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56R Combat Armor (Tepfer)";
		hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","Reach_Forearm_Left","Reach_Forearm_Right","H3_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","Reach_Armor_Upper","Reach_Armor_Lower" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\armor\Tepfer_H3_Armor_Upper_co.paa","BasiliskGear\data\armor\Tepfer_H3_Armor_Lower_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","BasiliskGear\data\armor\Tepfer_Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","Reach_Forearm_Left","Reach_Forearm_Right","H3_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","Reach_Armor_Upper","Reach_Armor_Lower" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\armor\Tepfer_H3_Armor_Upper_co.paa","BasiliskGear\data\armor\Tepfer_H3_Armor_Lower_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa","BasiliskGear\data\armor\Tepfer_Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa" };
		};
	};

	//Fury
	class Basilisk_Buckley_M56R_Armor: Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] M56R Combat Armor (Buckley)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","H3_Armor_Upper","H3_Armor_Lower"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\buckley_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\buckley_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\buckley_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\buckley_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\buckley_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\buckley_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		};
	};
	class Basilisk_Payne_M56R_Armor: Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Payne";
		displayName = "[Basilisk] M56R Combat Armor (Payne)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","Reach_Forearm_Left","Reach_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Thigh_Pouch","Reach_Armor_Upper","Reach_Armor_Lower"};
		hiddenSelectionsTextures[] = {"BasiliskGear\data\armor\payne_H3_Upper_Armor_co.paa","BasiliskGear\data\armor\payne_H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\payne_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\payne_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","BasiliskGear\data\armor\payne_Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\payne_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","Reach_Forearm_Left","Reach_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Thigh_Pouch","Reach_Armor_Upper","Reach_Armor_Lower"};
			hiddenSelectionsTextures[] = {"BasiliskGear\data\armor\payne_H3_Upper_Armor_co.paa","BasiliskGear\data\armor\payne_H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\payne_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\payne_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","BasiliskGear\data\armor\payne_Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","BasiliskGear\data\armor\payne_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		};
	};
	class Basilisk_Wolf_M56R_Armor: Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56R Combat Armor (Wolf)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\wolf_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\wolf_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","BasiliskGear\data\armor\wolf_Forearm_Vents_co.paa","BasiliskGear\data\armor\wolf_Sniper_co.paa","BasiliskGear\data\armor\wolf_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Pauldron_Left","Reach_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\wolf_Reach_Armor_Upper_co.paa","BasiliskGear\data\armor\wolf_Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","BasiliskGear\data\armor\wolf_Forearm_Vents_co.paa","BasiliskGear\data\armor\wolf_Sniper_co.paa","BasiliskGear\data\armor\wolf_CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		};
	};

	//Corvus
	class Basilisk_Blackburn_M56R_Armor: Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "SirChungus";
		displayName = "[Basilisk] M56R Combat Armor (Blackburn)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Blackburn_Reach_Upper_Armor_co.paa","BasiliskGear\data\armor\Blackburn_Reach_Lower_Armor_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","BasiliskGear\data\armor\Blackburn_Reach_Upper_Armor_co.paa","BasiliskGear\data\armor\Blackburn_Reach_Lower_Armor_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
		};
	};class Basilisk_Pjetrovic_M56R_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "[Basilisk] M56S Combat Armor (Pjetrovic)";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			//"Reach_Forearm_Left",
			//"Reach_Forearm_Right",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			//"Reach_Pauldron_Left",
			//"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			//"Reach_Armor_Upper",
			//"Reach_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\H3_ODST\H3_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa",
			"BasiliskGear\data\armor\Pjetrovic_Reach_Armor_Upper_co.paa",
			"BasiliskGear\data\armor\Pjetrovic_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Reach_Armor_Upper",
				//"Reach_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\H3_ODST\H3_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\H3_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa",
				"BasiliskGear\data\armor\Pjetrovic_Reach_Armor_Upper_co.paa",
				"BasiliskGear\data\armor\Pjetrovic_Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
	class Basilisk_Lancer_M56S_Armor : Basilisk_Base_M56R_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56S Combat Armor (Lancer)";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			//"H3_Forearm_Left",
			//"H3_Forearm_Right",
			//"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			//"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			//"H3_Armor_Upper",
			//"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[] = {
			"BasiliskGear\data\armor\Lancer_H3_Armor_Upper_co.paa",
			"BasiliskGear\data\armor\Lancer_H3_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"BasiliskGear\data\armor\Lancer_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				//"H3_Forearm_Left",
				//"H3_Forearm_Right",
				//"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				//"H3_Armor_Upper",
				//"H3_Armor_Lower",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				//"Canisters"
			};
			hiddenSelectionsTextures[] = {
				"BasiliskGear\data\armor\Lancer_H3_Armor_Upper_co.paa",
				"BasiliskGear\data\armor\Lancer_H3_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"BasiliskGear\data\armor\Lancer_Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
		};
	};
};
