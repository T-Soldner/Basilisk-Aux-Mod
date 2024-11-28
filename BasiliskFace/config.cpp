class CfgPatches
{
	class BasiliskFace
	{
		// Meta information for editor
		name = "Basilisk AUX Mod";
		author = "Soldner";
		url = "https://discord.gg/ZpeRJyyddS";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Data_F_Decade_Loadorder" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};
class CfgFaces
{
	class Man_A3
	{
		class WhiteHead_01;
		class PHRP_SoldnerHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Soldner";
			texture = "BasiliskFace\Data\soldner_co.paa";
			material = "BasiliskFace\Data\soldner.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "BasiliskFace\Data\soldner_tat_co.paa";
			textureHL2 = "BasiliskFace\Data\soldner_tat_co.paa";
		};
		class WhiteHead_10;
		class PHRP_BlackburnHead : WhiteHead_10
		{
			disabled = 0;
			displayname = "Blackburn";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			texture = "A3\Characters_F\Heads\data\m_White_10.paa";
			material = "A3\Characters_F\Heads\data\m_White_10.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\data\m_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\data\m_White_10_injury.rvmat";
			textureHL = "BasiliskFace\Data\blackburn_tat_co.paa";
			textureHL2 = "BasiliskFace\Data\blackburn_tat_co.paa";
		};
	};
};
