class CfgPatches
{
	class BasiliskGear_Vests
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
	class ItemInfo;
	class MA_Vest_Base;
	class Basilisk_Base_M56R_Armor: MA_Vest_Base
	{
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		mass = 20;
		displayName = "Basilisk M56R Body Armor - BASE";
		descriptionShort = "ODST Style armor";
		vestType = "Rebreather";
		picture = "";
		model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture = "MA_Armor\data\Icons\H3ODST_Vest.paa";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			containerClass = "Supply200";
			mass = 20;
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
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
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"Forearm_Vent_Left", 
				"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
			passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 45;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};

	class Basilisk_Base_SPI_Armor : MA_Vest_Base
	{
		author = "Soldner";
		scope = 1;
		scopeArsenal = 1;
		mass = 20;
		displayName = "Basilisk SPI Body Armor - BASE";
		descriptionShort = "Semi-Powered Infiltration Armour";
		vestType = "Rebreather";
		picture = "";
		model = "MA_Armor\data\Vests\SPI\SPI_Armor.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\SPI\Color_Variants\Olive_SPI_Armour_CO.paa" };
		class ItemInfo : ItemInfo
		{
			vestType = "Rebreather";
			containerClass = "Supply200";
			mass = 20;
			uniformModel = "MA_Armor\data\Vests\SPI\SPI_Armor.p3d";
			hiddenSelections[] = { "camo" };
			hiddenSelectionsTextures[] = { "MA_Armor\data\Vests\SPI\Color_Variants\Olive_SPI_Armour_CO.paa" };
			passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 45;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 45;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 45;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 45;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};
};
