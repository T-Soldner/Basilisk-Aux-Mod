class CfgPatches
{
	class BasiliskGear_Helmets_Custom
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "BasiliskGear";

		requiredVersion = 1.60;
		requiredAddons[] = { "BasiliskGear" };
		units[] = {};
		weapons[] = {};
	};
};
class XtdGearModels {
	class CfgWeapons {
		class Basilisk_Custom_helmets {
			label = "Auxiliary Helmets";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = { "Standard","Burtovski","Sabbath","Tepfer" };
				class Standard {
					label = "Standard";
				};
				class Burtovski {
					label = "Burtovski";
				};
				class Sabbath {
					label = "Sabbath";
				};
				class Tepfer {
					label = "Tepfer";
				};
			};
		};
		class Basilisk_Olympus_Helmets {
			label = "Olympus Helmets";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role {
				alwaysSelectable = 1;
				label = "Owner";
				values[] = { "Soldner","Holland","Kaker","Havoc","Ksiazek","Ishra","Grimshaw"};
				class Soldner {
					label = "Soldner";
				};
				class Holland {
					label = "Holland";
				};
				class Kaker {
					label = "Kaker";
				};
				class Havoc {
					label = "Havoc";
				};
				class Ksiazek {
					label = "Ksiazek";
				};
				class Ishra {
					label = "Ishra";
				};
				class Grimshaw {
					label = "Grimshaw";
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
				label = "Owner";
				values[] = { "Buckley","Wolf","Payne","Chop","Vargo","Famous"};
				class Buckley {
					label = "Buckley";
				};
				class Wolf {
					label = "Wolf";
				};
				class Payne {
					label = "Payne";
				};
				class Chop {
					label = "Chop";
				};
				class Vargo {
					label = "Vargo";
				};
				class Famous {
					label = "Famous";
				};
			};
		};
		class Basilisk_Corvus_helmets {
			label = "Corvus Helmets";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Owner";
				values[] = { "Blackburn","Pjetrovic","Lancer","Kincaid","Bauer"};
				class Blackburn {
					label = "Blackburn";
				};
				class Pjetrovic {
					label = "Pjetrovic";
				};
				class Lancer {
					label = "Lancer";
				};
				class Kincaid {
					label = "Kincaid";
				};
				class Bauer {
					label = "Bauer";
				};
			};
		};
		class Basilisk_covers {
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
};
class XtdGearInfos {
	class CfgWeapons {
		//Standard/auxilary
		class Basilisk_Standard_M56SR_Helmet {
			role	= "Standard";
			model	= "Basilisk_Custom_helmets";
		};
		class Basilisk_Burtovski_M56SR_Helmet {
			role	= "Burtovski";
			model	= "Basilisk_Custom_helmets";
		};
		class Basilisk_Sabbath_M56SR_Helmet {
			role	= "Sabbath";
			model	= "Basilisk_Custom_helmets";
		};
		class Basilisk_Tepfer_M56SH_Helmet {
			role	= "Tepfer";
			model	= "Basilisk_Olympus_Helmets";
		};

		//Olympus
		class Basilisk_Soldner_Rogue_Helmet {
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
		class Basilisk_Havoc_M56SR_Helmet {
			role	= "Havoc";
			model	= "Basilisk_Olympus_Helmets";
		};
		class Basilisk_Ksiazek_M56G_Helmet {
			role	= "Ksiazek";
			model	= "Basilisk_Olympus_Helmets";
		};
		class Basilisk_Ishra_M56SR_Helmet {
			role	= "Ishra";
			model	= "Basilisk_Olympus_Helmets";
		};
		class Basilisk_Grimshaw_M56SR_Helmet {
			role	= "Grimshaw";
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
		class Basilisk_Chopper_CH252A_Helmet {
			role 	= "Chop";
			model 	= "Basilisk_Fury_Helmets";
		};
		class Basilisk_Vargo_H3_EOD_Helmet {
			role 	= "Vargo";
			model	= "Basilisk_Fury_Helmets";
		};
		class Basilisk_Famous_M56E_Helmet {
			role	= "Famous";
			model	= "Basilisk_Fury_Helmets";
		};

		//Corvus
		class Basilisk_Blackburn_M56E_Helmet {
			role	= "Blackburn";
			model	= "Basilisk_Corvus_helmets";
		};
		class Basilisk_Pjetrovic_SPI_Helmet {
			role	= "Pjetrovic";
			model	= "Basilisk_Corvus_helmets";
		};
		class Basilisk_Lancer_Grenadier_Helmet {
			role	= "Lancer";
			model	= "Basilisk_Corvus_helmets";
		};
		class Basilisk_Kincaid_M56S_Helmet {
			role	= "Kincaid";
			model	= "Basilisk_Corvus_helmets";
		};
		class Basilisk_Bauer_Commando_Helmet {
			role	= "Bauer";
			model	= "Basilisk_Corvus_helmets";
		};

		//Covers
		class Basilisk_Basilisk_Beret {
			role	= "beret";
			model	= "Basilisk_covers";
		};
		class Basilisk_Basilisk_Boonie {
			role	= "boonie";
			model	= "Basilisk_covers";
		};
		class Basilisk_Basilisk_Patrol {
			role	= "patrol";
			model	= "Basilisk_covers";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class Basilisk_Base_Reach_Scout_Helmet;
	class Basilisk_Recon_Helmet;
	class Basilisk_M56E_Helmet_Base;
	class Basilisk_M56SR_Helmet_Base;
	class Basilisk_M56SH_Helmet_Base;
	class Basilisk_Fishbowl_Helmet;
	class Basilisk_M56S_Helmet_Base;
	class Basilisk_Grenadier_Helmet;
	class Basilisk_SPI_Helmet;
	class Basilisk_HR_EOD_Helmet;
	class Basilisk_H3_EOD_Helmet;
	class Basilisk_Rogue_Helmet;
	class Basilisk_CH252A_Helmet;
	class Basilisk_M56G_Helmet_Base;
	class Basilisk_Commando_Helmet;

	//Standard/auxilary
	class Basilisk_Standard_M56SR_Helmet : Basilisk_M56SR_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56S-R Helmet (Standard)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa","MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Burtovski_M56SR_Helmet : Basilisk_M56SR_Helmet_Base {
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
	class Basilisk_Sabbath_M56SR_Helmet : Basilisk_M56SR_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Sabbath";
		displayName = "[Basilisk] M56S-R Helmet (Sabbath)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Sabbath_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Sabbath_HR_ODST_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Sabbath_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Sabbath_HR_ODST_Visor_co.paa" };
		};
	};
	class Basilisk_Tepfer_M56SH_Helmet : Basilisk_M56SH_Helmet_Base {
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

	//Olympus
	class Basilisk_Soldner_Rogue_Helmet : Basilisk_Rogue_Helmet {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Rogue Helmet (Soldner)";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Soldner_Rogue_CO.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Soldner_Rogue_CO.paa" };
		};
	};
	class Basilisk_Holland_M56SR_Helmet : Basilisk_M56SR_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "VorpalHotdog";
		displayName = "[Basilisk] M56S-R Helmet (Holland)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\holland_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\holland_HR_ODST_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\holland_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\holland_HR_ODST_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Kaker_Fishbowl_Helmet : Basilisk_Fishbowl_Helmet {
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
	class Basilisk_Havoc_M56SR_Helmet : Basilisk_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Sabbath";
		displayName = "[Basilisk] M56S-R Helmet (Havoc)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Havoc_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Havoc_HR_ODST_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Havoc_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Havoc_HR_ODST_Visor_co.paa" };
		};
	};
	class Basilisk_Ksiazek_M56G_Helmet : Basilisk_M56G_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Sabbath";
		displayName = "[Basilisk] M56G Helmet (Ksiazek)";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"BasiliskGear\data\helmets\Ksiazek_Gungnir_Helmet_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"BasiliskGear\data\helmets\Ksiazek_Gungnir_Helmet_co.paa"};
		};
	};
	class Basilisk_Ishra_M56SR_Helmet : Basilisk_M56SR_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Sabbath";
		displayName = "[Basilisk] M56S-R Helmet (Ishra)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Ishra_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Ishra_HR_ODST_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Ishra_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Ishra_HR_ODST_Visor_co.paa" };
		};
	};
	class Basilisk_Grimshaw_M56SR_Helmet : Basilisk_M56SR_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Sir Chungus";
		displayName = "[Basilisk] M56S-R Helmet (Grimshaw)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Grimshaw_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Grimshaw_HR_ODST_Visor_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Grimshaw_HR_ODST_Helmet_CO.paa","BasiliskGear\data\helmets\Grimshaw_HR_ODST_Visor_co.paa" };
		};
	};

	//Fury
	class Basilisk_Buckley_Recon_Helmet : Basilisk_Recon_Helmet {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Recon Helmet (Buckley)";
		hiddenSelections[] = { "Camo1","Camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Buckley_Recon_Helmet_CO.paa","BasiliskGear\data\helmets\Buckley_Recon_Visor_CO.paa" };
		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Buckley_Recon_Helmet_CO.paa","BasiliskGear\data\helmets\Buckley_Recon_Visor_CO.paa" };
		};
	};
	class Basilisk_Wolf_Recon_Helmet : Basilisk_Recon_Helmet {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Recon Helmet (Wolf)";
		hiddenSelections[] = { "Camo1","Camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Wolf_Recon_Helmet_CO.paa","BasiliskGear\data\helmets\Wolf_Recon_Visor_CO.paa" };
		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Wolf_Recon_Helmet_CO.paa","BasiliskGear\data\helmets\Wolf_Recon_Visor_CO.paa" };
		};
	};
	class Basilisk_Payne_Recon_Helmet : Basilisk_Recon_Helmet {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] Recon Helmet (Payne)";
		hiddenSelections[] = { "Camo1","Camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Payne_Recon_Helmet_CO.paa","BasiliskGear\data\helmets\Payne_Recon_Visor_CO.paa" };
		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Payne_Recon_Helmet_CO.paa","BasiliskGear\data\helmets\Payne_Recon_Visor_CO.paa" };
		};
	};
	class Basilisk_Chopper_CH252A_Helmet : Basilisk_CH252A_Helmet {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] AA Helmet (Chopper)";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Chopper_AA_Helmet.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Chopper_AA_Helmet.paa"};
		};
	};
	class Basilisk_Vargo_H3_EOD_Helmet : Basilisk_H3_EOD_Helmet {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] H3 EOD Helmet (Vargo)";
		hiddenSelections[] = { "Camo1","Camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Vargo_H3_EOD_Helm.paa","BasiliskGear\data\helmets\Vargo_EOD_Visor_H3_CO.paa" };
		class ItemInfo : ItemInfo {
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Vargo_H3_EOD_Helm.paa","BasiliskGear\data\helmets\Vargo_EOD_Visor_H3_CO.paa" };
		};
	};
	class Basilisk_Famous_M56E_Helmet : Basilisk_M56E_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56-E Helmet (Famous)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Famous_EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Red_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Famous_EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Red_co.paa" };
		};
	};

	//Corvus
	class Basilisk_Blackburn_M56E_Helmet : Basilisk_M56E_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Sir Chungus";
		displayName = "[Basilisk] M56-E Helmet (Blackburn)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Blackburn_EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Blackburn_EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" };
		};
	};
	class Basilisk_Pjetrovic_SPI_Helmet : Basilisk_SPI_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] SPI Helmet (Pjetrovic)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Pjetrovic_SPI_Helmet_co.paa","BasiliskGear\data\helmets\Pjetrovic_SPI_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Pjetrovic_SPI_Helmet_co.paa","BasiliskGear\data\helmets\Pjetrovic_SPI_Visor_CO.paa" };
		};
	};
	class Basilisk_Lancer_Grenadier_Helmet : Basilisk_Grenadier_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] Grenadier Helmet (Lancer)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Lancer_Grenadier_Helmet_co.paa","MA_Armor\data\Helmets\Grenadier\Visors\Sky_Grenadier_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Lancer_Grenadier_Helmet_co.paa","MA_Armor\data\Helmets\Grenadier\Visors\Sky_Grenadier_Visor_CO.paa" };
		};
	};
	class Basilisk_Kincaid_M56S_Helmet : Basilisk_M56S_Helmet_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Sir Chungus";
		displayName = "[Basilisk] M56S Helmet (Kincaid)";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Kincaid_H4_Scout_Helmet_CO.paa","MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Black_co.paa" };
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = { "camo1","camo2" };
			hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\Kincaid_H4_Scout_Helmet_CO.paa","MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Black_co.paa"  };
		};
	};
	class Basilisk_Bauer_Commando_Helmet : Basilisk_Commando_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Sabbath";
		displayName = "[Basilisk] Commando Helmet (Bauer)";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"BasiliskGear\data\helmets\Bauer_Commando_Helmet_CO.paa","BasiliskGear\data\helmets\Bauer_Commando_Visor_CO.paa"};
		class ItemInfo : ItemInfo
		{
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"BasiliskGear\data\helmets\Bauer_Commando_Helmet_CO.paa","BasiliskGear\data\helmets\Bauer_Commando_Visor_CO.paa"};
		};
	};

	//Covers
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