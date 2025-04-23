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
	class Basilisk_Olympus_SprayCan: CBA_MiscItem 
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Basilisk] Olympus Sprays";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "BasiliskGear\Sprays\Data\Olympus\Olympus.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
	class Basilisk_Fury_SprayCan: CBA_MiscItem 
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Basilisk] Fury Sprays";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "BasiliskGear\Sprays\Data\logo.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
	class Basilisk_Corvus_SprayCan: CBA_MiscItem 
	{
		author = "Soldner";
		scope = 2;
		displayname = "[Basilisk] Corvus Sprays";
		descriptionShort = "An item that lets you tag walls.";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		icon = "BasiliskGear\Sprays\Data\logo.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
};
class ACE_Tags
{
	//Olympus Sprays
	class Basilisk_Olympus_Logo_Spray
	{
		displayName = "Basilisk";
		requiredItem = "Basilisk_Olympus_SprayCan";
		materials[] = {};
		textures[] = { "BasiliskGear\Sprays\Data\logo.paa" };
		icon = "BasiliskGear\Sprays\Data\logo.paa";
	};
	class Basilisk_Olympus_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Olympus";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Olympus.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Olympus.paa";
	};
	class Basilisk_Fries_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Fries";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Fries.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Fries.paa";
	};
	class Basilisk_BK_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "BK";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\BK.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\BK.paa";
	};
	class Basilisk_GucciMan_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Gucci Man";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\GucciMan.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\GucciMan.paa";
	};
	class Basilisk_Assman_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Assman";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Sabbath-was-here.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Sabbath-was-here.paa";
	};
	class Basilisk_Etilka_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Dead Etilka";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Lancer.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Lancer.paa";
	};
	class Basilisk_Syndrome_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Syndrome";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Syndrome.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Syndrome.paa";
	};
	class Basilisk_Docky_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Docky Way";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Docky.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Docky.paa";
	};
	class Basilisk_Missing_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Missing";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Missing.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Missing.paa";
	};
	class Basilisk_Sniper_Spray : Basilisk_Olympus_Logo_Spray
	{
		displayName = "Sniper at Work";
		textures[] = { "BasiliskGear\Sprays\Data\Olympus\Sniper.paa" };
		icon = "BasiliskGear\Sprays\Data\Olympus\Sniper.paa";
	};
	
	//Furry Sprays
	class Basilisk_Fury_Logo_Spray
	{
		displayName = "Basilisk";
		requiredItem = "Basilisk_Fury_SprayCan";
		materials[] = {};
		textures[] = { "BasiliskGear\Sprays\Data\logo.paa" };
		icon = "BasiliskGear\Sprays\Data\logo.paa";
	};
	
	//Corvus Sprays
	class Basilisk_Corvus_Logo_Spray
	{
		displayName = "Basilisk";
		requiredItem = "Basilisk_Corvus_SprayCan";
		materials[] = {};
		textures[] = { "BasiliskGear\Sprays\Data\logo.paa" };
		icon = "BasiliskGear\Sprays\Data\logo.paa";
	};
	class Basilisk_Corvus_Spray : Basilisk_Corvus_Logo_Spray
	{
		displayName = "Corvus";
		textures[] = { "BasiliskGear\Sprays\Data\Corvus\Corvus.paa" };
		icon = "BasiliskGear\Sprays\Data\Corvus\Corvus.paa";
	};
	class Basilisk_Driver_Spray : Basilisk_Corvus_Logo_Spray
	{
		displayName = "Student Driver";
		textures[] = { "BasiliskGear\Sprays\Data\Corvus\Driver.paa" };
		icon = "BasiliskGear\Sprays\Data\Corvus\Driver.paa";
	};
	class Basilisk_Columbine_Spray : Basilisk_Corvus_Logo_Spray
	{
		displayName = "Erik and Dylan";
		textures[] = { "BasiliskGear\Sprays\Data\Corvus\Columbine.paa" };
		icon = "BasiliskGear\Sprays\Data\Corvus\Columbine.paa";
	};
	class Basilisk_Money_Spray : Basilisk_Corvus_Logo_Spray
	{
		displayName = "Money Bird";
		textures[] = { "BasiliskGear\Sprays\Data\Corvus\Money.paa" };
		icon = "BasiliskGear\Sprays\Data\Corvus\Money.paa";
	};
	class Basilisk_Needler_Spray : Basilisk_Corvus_Logo_Spray
	{
		displayName = "Needler";
		textures[] = { "BasiliskGear\Sprays\Data\Corvus\Needler.paa" };
		icon = "BasiliskGear\Sprays\Data\Corvus\Needler.paa";
	};
	class Basilisk_Secure_Spray : Basilisk_Corvus_Logo_Spray
	{
		displayName = "Secure";
		textures[] = { "BasiliskGear\Sprays\Data\Corvus\Secure.paa" };
		icon = "BasiliskGear\Sprays\Data\Corvus\Secure.paa";
	};
};