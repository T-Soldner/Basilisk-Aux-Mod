#define _ARMA_

class CfgPatches
{
	class Mainmenu_Core
	{
		author = "Mainmenu Mod Team";
		name = "Mainmenu Aux Mod";
		url = "https://discord.gg/vSnh2zBTCu";
		units[] = {""};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"1st_MEU_patch_main_loadingScreens"
			// we dont actually extend anything from 1MEU, this is just to ensure our loading screen overwrites theirs
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class Mainmenu_Core: Mod_Base
	{
		logo = "BasiliskCore\textures\logo.paa";
		picture = "BasiliskCore\textures\logo.paa";
		name = "Mainmenu Aux Mod";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class Mainmenu_Core
		{
			list[] = {"Mainmenu_Core"};
		};
	};
};
class CfgEditorCategories
{
	class Mainmenu_AUX_EdCat
	{
		displayName = "Mainmenu Company";
	};
};
class CfgEditorSubcategories
{
	class Mainmenu_EdSubCat_ODSTs
	{
		displayName = "ODSTs";
	};
	class Mainmenu_EdSubCat_Cars
	{
		displayName = "Cars";
	};
	class Mainmenu_EdSubCat_Armored
	{
		displayName = "Armored";
	};
	class Mainmenu_EdSubCat_Helicopters
	{
		displayName = "Helicopters";
	};
	class Mainmenu_EdSubCat_Water
	{
		displayName = "Boats";
	};
	class Mainmenu_EdSubCat_Drones
	{
		displayName = "Drones";
	};
};
class cfgFactionClasses
{
	class Mainmenu_Faction
	{
		displayName = "Mainmenu Company";
		priority = 1;
		side = 1;
		icon = "";
	};
};
class RscPicture{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{};
class RscStandardDisplay{};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text="\BasiliskCore\textures\logo.paa";
		};
	};
	enableDisplay=0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\BasiliskCore\textures\Mainmenu.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\BasiliskCore\textures\loading.paa";
				};
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\BasiliskCore\textures\loading.paa";
				};
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\BasiliskCore\textures\Mainmenu.paa";
				};
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\BasiliskCore\textures\loading.paa";
				};
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\BasiliskCore\textures\Mainmenu.paa";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\BasiliskCore\textures\loading.paa";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\BasiliskCore\textures\loading.paa";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		idc=1;
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="\BasiliskCore\textures\Mainmenu.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\BasiliskCore\textures\Mainmenu.paa";
		};
	};
};
