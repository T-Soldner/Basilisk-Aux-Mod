class CfgPatches
{
	class BasiliskGear_Sprays
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "BasiliskGear";

		requiredVersion = 1.60;
		requiredAddons[] = { "BasiliskGear" };
		units[] = {};
		weapons[] = {};
	};
};
class cfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class Basilisk_SprayCan: CBA_MiscItem 
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Basilisk] Spray Paint";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "BasiliskSprays\Sprays\logo.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
};
class ACE_Tags
{
	//Kaker Sprays
	class Basilisk_Logo_Spray
	{
		displayName = "Basilisk";
		requiredItem = "Basilisk_SprayCan";
		materials[] = {};
		textures[] = { "BasiliskSprays\Sprays\logo.paa" };
		icon = "BasiliskSprays\Sprays\logo.paa";
	};
	class Basilisk_Logo_1A_Spray : Basilisk_Logo_Spray
	{
		displayName = "Kronos";
		textures[] = {"BasiliskSprays\Sprays\1-A.paa"};
		icon = "BasiliskSprays\Sprays\1-A.paa";
	};
	class Basilisk_Logo_11_Spray : Basilisk_Logo_Spray
	{
		displayName = "Hydra";
		textures[] = {"BasiliskSprays\Sprays\1-1.paa"};
		icon = "BasiliskSprays\Sprays\1-1.paa";
	};
	class Basilisk_Logo_12_Spray : Basilisk_Logo_Spray
	{
		displayName = "Phoenix";
		textures[] = {"BasiliskSprays\Sprays\1-2.paa"};
		icon = "BasiliskSprays\Sprays\1-2.paa";
	};
	class Basilisk_Logo_13_Spray : Basilisk_Logo_Spray
	{
		displayName = "Misfit";
		textures[] = {"BasiliskSprays\Sprays\1-3.paa"};
		icon = "BasiliskSprays\Sprays\1-3.paa";
	};
	class Basilisk_CCP_Spray : Basilisk_Logo_Spray
	{
		displayName = "CCP";
		textures[] = { "BasiliskSprays\Sprays\CCP-Logo.paa" };
		icon = "BasiliskSprays\Sprays\CCP-Logo.paa";
	};
	class Basilisk_Assman_Spray : Basilisk_Logo_Spray
	{
		displayName = "Assman";
		textures[] = { "BasiliskSprays\Sprays\Sabbath-was-here.paa" };
		icon = "BasiliskSprays\Sprays\Sabbath-was-here.paa";
	};
};