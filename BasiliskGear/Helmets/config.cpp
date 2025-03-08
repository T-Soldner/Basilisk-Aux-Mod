class CfgPatches
{
	class BasiliskGear_Helmets
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "BasiliskGear";

		requiredVersion = 1.60;
		requiredAddons[] = { "BasiliskGear" };
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	//Helmet Inherits
	class HeadgearItem;
	class H_HelmetB;

	//MA Base
	class MA_Helmet_Base;
	class Basilisk_Helmet_Base_o : MA_Helmet_Base
	{
		class ItemInfo;
	};
	class Basilisk_Helmet_Base_on : Basilisk_Helmet_Base_o
	{
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class Basilisk_Helmet_Base_one : Basilisk_Helmet_Base_on
	{
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo : HitpointsProtectionInfo
			{
				class Face;
				class Head;
				class Neck;
			};
		};
	};

	//M56SR
	class Basilisk_M56SR_Helmet_Base : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Soldner";
		model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture = "MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		displayName = "[Basilisk] M56S-R Helmet - Base";
		hiddenSelectionsTextures[] =
		{
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[] =
			{
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56SH
	class Basilisk_M56SH_Helmet_Base : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Soldner";
		displayName = "[Basilisk] M56S-H Helmet - Base";
		model = "MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
		picture = "MA_Armor\data\Icons\H3_ODST_Helmet.paa";
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\H3_ODST\H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\H3_ODST\H3_Helmet_co.paa","MA_Armor\data\Helmets\H3_ODST\H3_Visor_Blue_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56G
	class Basilisk_M56G_Helmet_Base : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] M56-G Helmet - Base";
		model = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		picture = "MA_Armor\data\Icons\Gungnir_Helmet.paa";
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Gungnir\Gungnir_co.paa","MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Gungnir\Gungnir_co.paa","MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56E
	class Basilisk_M56E_Helmet_Base : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] M56-E Helmet - Base";
		model = "MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture = "MA_Armor\data\Icons\EOD_Helm.paa";
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\EOD\EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\EOD\EOD_Helmet_co.paa","MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56S
	class Basilisk_M56S_Helmet_Base : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] M65-S Helmet";
		model = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		picture = "MA_Armor\data\Icons\H4_Scout_Helmet.paa";
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\H4_Scout\Scout_Helm_co.paa","MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\H4_Scout\Scout_Helm_co.paa","MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//MA CQC
	class Basilisk_CQC_Helmet_Base : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] CQC Helmet";
		model = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\CQC\Helmets\Gray_CQC_Helmet_CO.paa","MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\CQC\Helmets\Gray_CQC_Helmet_CO.paa","MA_Armor\data\Helmets\CQC\Visors\Base_CQC_Visor_CO.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Reach Scout
	class Basilisk_Base_Reach_Scout_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] Reach Scout Helmet";
		model = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Scout\Helmets\Olive_Scout_Helmet_CO.paa","MA_Armor\data\Helmets\Scout\Visors\Base_Scout_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Scout\HR_Scout_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56A Air Assault
	class Basilisk_Base_M56A_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] M56-A Helmet";
		model = "MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture = "\MA_Armor\data\Icons\AA_Helmet.paa";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\AA\AA_Helm_co.paa","MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\AA\AA_Helm_co.paa","MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Pilot Helmet
	class Basilisk_Fishbowl_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] Hellbringer Helmet";
		model = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Pilot\Helmets\Olive_Pilot_Helmet_CO.paa","MA_Armor\data\Helmets\Pilot\Visors\Base_Pilot_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Pilot\Pilot_Helm.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Pilot\Helmets\Olive_Pilot_Helmet_CO.paa","MA_Armor\data\Helmets\Pilot\Visors\Base_Pilot_Visor_CO.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Recon Helmet
	class Basilisk_Recon_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] Recon Helmet";
		model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
		hiddenSelections[] = { "Camo1","Camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Recon\Helmets\Black_Recon_Helmet_CO.paa","MA_Armor\data\Helmets\Recon\Visors\Base_Recon_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
			hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Recon\Helmets\Black_Recon_Helmet_CO.paa","MA_Armor\data\Helmets\Recon\Visors\Base_Recon_Visor_CO.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Grenadier Helmet
	class Basilisk_Grenadier_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk]  Grenadier Helmet";
		model = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\Grenadier\Helmets\Olive_Grenadier_Helmet_CO.paa","MA_Armor\data\Helmets\Grenadier\Visors\Base_Grenadier_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\Grenadier\Grenadier_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//SPI
	class Basilisk_SPI_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] SPI Helmet";
		model = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\SPI\Helmets\Olive_SPI_Helmet_CO.paa","MA_Armor\data\Helmets\SPI\Visors\Base_SPI_Visor_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\SPI\SPI_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//HR EOD
	class Basilisk_HR_EOD_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] HR EOD Helmet";
		model = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\HR_EOD\Helmets\Olive_EOD_Helmet_R_CO.paa","MA_Armor\data\Helmets\HR_EOD\Visors\Base_EOD_Visor_R_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "MA_Armor\data\Helmets\HR_EOD\HR_EOD_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//H3 EOD
	class Basilisk_H3_EOD_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] HR EOD Helmet";
		model = "MA_Armor\data\Helmets\H3_EOD\H3_EOD_Helmet.p3d";
		hiddenSelections[] = { "camo1","camo2" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Helmets\H3_EOD\Helmets\Olive_EOD_Helmet_H3_CO.paa","MA_Armor\data\Helmets\H3_EOD\Visors\Base_EOD_Visor_H3_CO.paa" };
		class ItemInfo : ItemInfo
		{
			model = "MA_Armor\data\Helmets\H3_EOD\H3_EOD_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Rogue
	class Basilisk_Rogue_Helmet : Basilisk_Helmet_Base_one
	{
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] Rogue Helmet";
		model = "OPTRE_FC_Units\Spartan\Human\Mark_VI_Rogue_Helmet.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "OPTRE_FC_Units\Spartan\data\Mark_VI_Rogue_CO.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "OPTRE_FC_Units\Spartan\Human\Mark_VI_Rogue_Helmet.p3d";
			hiddenSelectionsTextures[] = { "OPTRE_FC_Units\Spartan\data\Mark_VI_Rogue_CO.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//CH252A
	class Basilisk_CH252A_Helmet : Basilisk_Helmet_Base_one {
		dlc = "Basilisk Aux Mod";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "[Basilisk] CH252A";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "optre_unsc_units\army\data\aa_helmet_co.paa" };
		class ItemInfo : ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
			hiddenSelectionsTextures[] = { "optre_unsc_units\army\data\aa_helmet_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Covers
	class H_MilCap_Blue;
	class Basilisk_Base_Beret : H_HelmetB
	{
		dlc = "Basilisk Aux Mod";
		author = "VorpalHotdog";
		scope = 1;
		displayName = "Basilisk Beret Base";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\headgear_basiliskberet_co.paa" };
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "a3\characters_f_epb\BLUFOR\headgear_beret02";
			hiddenSelections[] = { "Camo" };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class Basilisk_Base_Boonie : H_HelmetB
	{
		dlc = "Basilisk Aux Mod";
		author = "VorpalHotdog";
		scope = 1;
		displayName = "Basilisk Boonie Base";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\helmets\headgear_basiliskboonie_co.paa" };
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "a3\characters_f\Common\booniehat.p3d";
			hiddenSelections[] = { "Camo" };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
};