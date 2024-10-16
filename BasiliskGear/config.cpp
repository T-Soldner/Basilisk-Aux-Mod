class CfgPatches
{
	class Basilisk_Gear
	{
		author = "Basilisk Mod Team";
		name = "Project Harvest Units";
		url = "https://discord.gg/vSnh2zBTCu";
		units[] = {""};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgWeapons
{
	//Vest
	class ItemInfo;
	class MA_Vest_Base;
	class Basilisk_Base_M56R_Armor : MA_Vest_Base
	{
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		displayName = "Basilisk M56R Body Armor - BASE";
		vestType = "Rebreather";
		model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture = "MA_Armor\data\Icons\H3ODST_Vest.paa";
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = { "camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 55;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 55;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 55;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};

	//Helmet Inherits
	class HeadgearItem;
	class H_HelmetB;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_CQB_Helmet;
	class OPTRE_UNSC_Commando_Helmet;
	class OPTRE_UNSC_Security_Helmet;
	class OPTRE_UNSC_Operator_Helmet;

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


	//uniforms
	class Uniform_Base;
	class U_B_CombatUniform_mcam : Uniform_Base
	{
		class ItemInfo;
	};
	class Basilisk_Base : U_B_CombatUniform_mcam
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		author = "Soldner";
		ACE_GForceCoef = 0.9;
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protectionLevel = "4 + 8";
		class ItemInfo : ItemInfo
		{
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
		};
	}

	//M56
	class MA_M56S_BDU;
	class Basilisk_M56_BDU : MA_M56S_BDU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[Basilisk] M56 BDU";
		CBRN_protectionLevel = "4 + 8";
		ACE_GForceCoef = 0.9;
		class ItemInfo : ItemInfo
		{
			uniformClass = "Basilisk_M56S_BDU";
			uniformType = "Neopren";
		};
	};

	//Dress uniforms
	class OPTRE_UNSC_Dress_Uniform_gray;
	/*class MEU_Dress_Uniform_Cornflakes : OPTRE_UNSC_Dress_Uniform_gray
	{
		displayName = "[1st] Dress Uniform (Cornflakes)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "MEU_Dress_Uniform_Cornflakes_Soldier";
			containerClass = "Supply100";
			mass = 40;
			uniformModel = "-";
		};
	};*/
};
class CfgVehicles
{
	class SoldierWB;
	class B_Pilot_F;
	class Basilisk_Soldier_Base : SoldierWB
	{
		class HitPoints;
	};
	class Basilisk_Soldier_WDL : Basilisk_Soldier_Base
	{
		class HitPoints : HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
			class Incapacitated;
			class HitLeftArm;
			class HitRightArm;
			class HitLeftLeg;
			class HitRightLeg;
			class ACE_HDBracket;
		};
	};
	class Basilisk_Base_Uniform : Basilisk_Soldier_WDL
	{
		class HitPoints : HitPoints
		{
			class HitFace : HitFace
			{
				armor = 5;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck : HitNeck
			{
				armor = 5;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead : HitHead
			{
				armor = 5;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm : HitDiaphragm
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest : HitChest
			{
				armor = 6;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody : HitBody
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitArms
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands : HitHands
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs : HitLegs
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated : Incapacitated
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm : HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm : HitRightArm
			{
				armor = 6;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg : HitRightArm
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg : HitRightLeg
			{
				armor = 6;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class ACE_HDBracket : ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
		dlc = "Project Harvest Armory";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		vehicleClass = "";
		uniformClass = "";
		model = "";
		weapons[] = { "Throw","Put" };
		respawnWeapons[] = { "Throw","Put" };
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {};
		editorSubcategory = "Basilisk_EdSubCat_ODSTs";
	};


	//M56 BDU
	//class MA_M56S_BDU;
	class Basilisk_M56_BDU : Basilisk_Base_Uniform
	{
		dlc = "Basilisk Aux Mod";
		UniformClass = "Basilisk_M56_BDU";
		model = "MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa" };
	};


	//dress uniforms?
	/*class MEU_Dress_Uniform_Cornflakes_Soldier: Basilisk_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MEU";
		uniformClass = "MEU_Dress_Uniform_Cornflakes";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","1st_meu_gear\_textures\misc\dress_rank_cornflakes_co.paa"};
	};*/
};