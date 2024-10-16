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
	class ItemInfo;
	class UniformItem;

	//M56
	class MA_M56S_BDU;
	class Basilisk_M56_BDU : MA_M56S_BDU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Soldner";
		displayName = "[Basilisk] M56 BDU";
		CBRN_protectionLevel = "4 + 8";
		ACE_GForceCoef = 0.9;
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Basilisk_M56_BDU_Base";
			containerClass = "Supply150";
			mass = 10;
			uniformType = "Neopren";
			modelSides[] = { 6 };
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
	//Base setup
	class SoldierWB;
	class Basilisk_Soldier_Base : SoldierWB
	{
		class HitPoints;
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
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
	class Basilisk_M56_BDU_Base : Basilisk_Base_Uniform
	{
		scope = 1;		
		dlc = "Basilisk Aux Mod";
		UniformClass = "Basilisk_M56_BDU";
		model = "MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture = "\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
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