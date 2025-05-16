class CfgPatches
{
	class BasiliskMusic
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
class CfgMusic
{
	#include "BasiliskMusicTracks.hpp"
};
class CfgMusicClasses
{
	class BasiliskAction {
		displayName = "Basilisk - Action";
	};
	class BasiliskSuspense {
		displayName = "Basilisk - Suspense";
	};
	class BasiliskIdle {
		displayName = "Basilisk - Idle";
	};
	class BasiliskGoofy {
		displayName = "Basilisk - Goofy";
	};
};