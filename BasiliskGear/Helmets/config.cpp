class CfgPatches
{
	class BasiliskGear
	{
		author = "Soldner";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Characters_F","OPTRE_Core" };
	};
};
class CfgWeapons
{
	//Helmet Inherits
	class HeadgearItem;
	class H_HelmetB;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_CQB_Helmet;

	//Recon Helmet
	class Basilisk_Base_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
	{
		class ItemInfo;
		dlc = "Basilisk Aux Mod";
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Recon Helmet - Base";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
		hiddenSelectionsTextures[] = { "optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
		class ItemInfo : ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\recon_helmet";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","H_Ghillie" };
			hiddenSelectionsTextures[] = { "optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\soft_packs_co.paa" };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//CQB Helmet
	class Basilisk_Base_CQB_Helmet : OPTRE_UNSC_CQB_Helmet
	{
		class ItemInfo;
		dlc = "Basilisk Aux Mod";
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Mark V/C Helmet - Base";
		class ItemInfo : ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//MA Base
	class MA_Helmet_Base;
	class MA_Helmet_Base_o : MA_Helmet_Base
	{
		class ItemInfo;
	};
	class MA_Helmet_Base_on : MA_Helmet_Base_o
	{
		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class MA_Helmet_Base_one : MA_Helmet_Base_on
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
	class Basilisk_M56SR_Helmet_Base : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56SH
	class Basilisk_M56SH_Helmet_Base : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56G
	class Basilisk_M56G_Helmet_Base : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56E
	class Basilisk_M56E_Helmet_Base : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56A
	class Basilisk_M56S_Helmet_Base : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//MA CQC
	class Basilisk_CQC_Helmet_Base : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Reach Scout
	class Basilisk_Base_Reach_Scout_Helmet : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//M56A Air Assault
	class Basilisk_Base_M56A_Helmet : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	//Pilot Helmet
	class Basilisk_Fishbowl_Helmet : MA_Helmet_Base_one
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
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
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