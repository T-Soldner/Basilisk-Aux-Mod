class CfgPatches
{
	class BasiliskGear
	{
		author = "Soldner";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Characters_F" };
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class Basilisk_Custom_helmets
		{
			label = "Basilisk Helmets";
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
		class Basilisk_Olympus_Helmets {
			label = "Olympus Helmets";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role {
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
		class Basilisk_Fury_Helmets {
			label = "Fury Helmets";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Buckley","Wolf","Payne" };
				class Buckley {
					label = "Buckley";
				};
				class Wolf {
					label = "Wolf";
				};
				class Payne {
					label = "Payne";
				};
			};
			class Basilisk_covers
			{
				label = "Basilisk Covers";
				author = "VorpalHotdog";
				options[] = { "Role" };
				class role
				{
					alwaysSelectable = 1;
					label = "Role";
					values[] = { "beret","boonie","patrol" };
					class beret
					{
						label = "Beret";
					};
					class boonie
					{
						label = "Boonie";
					};
					class patrol
					{
						label = "Patrol";
					};
				};
			};
		};
		class Basilisk_Corvus_helmets
		{
			label = "Corvus Helmets";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Blackburn" };
				class Blackburn {
					label = "Blackburn";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class Basilisk_Standard_M56SR_Helmet {
			role	= "Standard";
			model	= "Basilisk_Custom_helmets";
		};
		class Basilisk_Burtovski_M56SR_Helmet {
			role	= "Burtovski";
			model	= "Basilisk_Custom_helmets";
		};
		class Basilisk_Chopper_CQB_Helmet {
			role	= "Chop";
			model	= "Basilisk_Custom_helmets";
		};
		class Basilisk_Sabbath_M56SR_Helmet {
			role	= "Sabbath";
			model	= "Basilisk_Custom_helmets";
		};

		//Olympus
		class Basilisk_Soldner_Reach_Scout_Helmet {
			role	= "Soldner";
			model	= "Basilisk_Olympus_Helmets";
		};
		class Basilisk_Holland_M56SR_Helmet {
			role	= "Holland";
			model	= "Basilisk_Olympus_Helmets";
		};
		class Basilisk_Kaker_Fishbowl_Helmet {
			role	= "Kaker";
			model	= "Basilisk_Olympus_Helmets";
		};
		class Basilisk_Tepfer_M56SH_Helmet {
			role	= "Tepfer";
			model	= "Basilisk_Olympus_Helmets";
		};

		//Fury
		class Basilisk_Buckley_Recon_Helmet {
			role	= "Buckley";
			model	= "Basilisk_Fury_Helmets";
		};
		class Basilisk_Wolf_Recon_Helmet {
			role	= "Wolf";
			model	= "Basilisk_Fury_Helmets";
		};
		class Basilisk_Payne_Recon_Helmet {
			role	= "Payne";
			model	= "Basilisk_Fury_Helmets";
		};

		//Corvus
		class Basilisk_Blackburn_M56E_Helmet {
			role	= "Blackburn";
			model	= "Basilisk_Corvus_helmets";
		};

		//Covers
		class Basilisk_Basilisk_Beret{
			role	= "beret";
			model	= "Basilisk_covers";
		};
		class Basilisk_Basilisk_Boonie{
			role	= "boonie";
			model	= "Basilisk_covers";
		};
		class Basilisk_Basilisk_Patrol{
			role	= "patrol";
			model	= "Basilisk_covers";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class Basilisk_Base_Reach_Scout_Helmet;
	class Basilisk_Base_Recon_Helmet;
	class Basilisk_M56E_Helmet_Base;
	class Basilisk_M56SR_Helmet_Base;
	class Basilisk_M56SH_Helmet_Base;
	class Basilisk_Base_CQB_Helmet;
	class Basilisk_Fishbowl_Helmet;
	class Basilisk_M56S_Helmet_Base;

	class Basilisk_Standard_M56SR_Helmet : Basilisk_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] M56S-R Helmet (Standard)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Soldner_Reach_Scout_Helmet : Basilisk_Base_Reach_Scout_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Reach Scout Helmet (Soldner)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Soldner_Scout_Helmet_CO.paa","BasiliskGear\data\helmets\Soldner_Scout_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Soldner_Scout_Helmet_CO.paa","BasiliskGear\data\helmets\Soldner_Scout_Visor_CO.paa" };
		};
	};
	class Basilisk_Buckley_Recon_Helmet : Basilisk_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Recon Helmet (Buckley)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_buckley_co.paa","BasiliskGear\data\helmets\customvisor_buckley_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
	};
	class Basilisk_Buckley_Recon_Helmet_dp : Basilisk_Buckley_Recon_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_buckley_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
	};
	class Basilisk_Wolf_Recon_Helmet : Basilisk_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Recon Helmet (Wolf)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_wolf_co.paa","BasiliskGear\data\helmets\customvisor_wolf_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
	};
	class Basilisk_Wolf_Recon_Helmet_dp : Basilisk_Wolf_Recon_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_wolf_co.paa","BasiliskGear\data\helmets\ODST_Helmet_Visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
	};
	class Basilisk_Payne_Recon_Helmet : Basilisk_Base_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Recon Helmet (Payne)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_payne_co.paa","BasiliskGear\data\helmets\customvisor_payne_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
	};
	class Basilisk_Payne_Recon_Helmet_dp : Basilisk_Payne_Recon_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_payne_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
	};
	class Basilisk_Blackburn_M56E_Helmet : Basilisk_M56E_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] M56-E Helmet (Blackburn)";
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Blackburn_EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Blackburn_EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Burtovski_M56SR_Helmet : Basilisk_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56S-R Helmet (Burtovski)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\burtovski_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\burtovski_HR_ODST_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\burtovski_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\burtovski_HR_ODST_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Holland_M56SR_Helmet : Basilisk_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] M56S-R Helmet (Holland)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\holland_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\holland_HR_ODST_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\holland_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\holland_HR_ODST_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Chopper_CQB_Helmet : Basilisk_Base_CQB_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Jimbo";
		displayName = "[Basilisk] Mark V/C Helmet (Chopper)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_chopper_co.paa","BasiliskGear\data\helmets\chopper_CQB_Visor_co.paa" };
	};
	class Basilisk_Chopper_CQB_Helmet_dp : Basilisk_Chopper_CQB_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\customhelmet_chopper_co.paa","BasiliskGear\data\helmets\chopper_CQB_Visor_co.paa" };
	};
	class Basilisk_Sabbath_M56SR_Helmet : Basilisk_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56S-R Helmet (Sabbath)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Sabbath_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Sabbath_HR_ODST_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Sabbath_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Sabbath_HR_ODST_Visor_co.paa" };
		};
	};
	class Basilisk_Tepfer_M56SH_Helmet : Basilisk_M56SH_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56SH (Tepfer)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Tepfer_H3_Helmet_co.paa","BasiliskGear\data\helmets\Tepfer_H3_Visor_co.paa" };
		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Tepfer_H3_Helmet_co.paa","BasiliskGear\data\helmets\Tepfer_H3_Visor_co.paa" };
		};
	};
	class Basilisk_Kaker_Fishbowl_Helmet : Basilisk_Fishbowl_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Kaker";
		displayName = "[Basilisk] Hellbringer Helmet (Kaker)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Kaker_Pilot_Helmet_CO.paa","BasiliskGear\data\helmets\Kaker_Pilot_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Kaker_Pilot_Helmet_CO.paa","BasiliskGear\data\helmets\Kaker_Pilot_Visor_co.paa" };
		};
	};


	class Basilisk_Base_Beret;
	class Basilisk_Base_Boonie;
	class H_MilCap_Blue;

	class Basilisk_Basilisk_Beret : Basilisk_Base_Beret
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		mass = 1;
		author = "VorpalHotdog";
		displayName = "Basilisk Beret";
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\headgear_Basiliskberet_co.paa" };
	};
	class Basilisk_Basilisk_Boonie : Basilisk_Base_Boonie
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		mass = 1;
		author = "VorpalHotdog";
		displayName = "Basilisk Boonie";
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\headgear_Basiliskboonie_co.paa" };
	};

};