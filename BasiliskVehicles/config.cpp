class CfgPatches
{
	class BasiliskVehicles
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
		units[] = {
			"Basilisk_SDV_01",
			"Basilisk_Aurora",
			"Basilisk_Searcher_Mk1",
			"Basilisk_Kaker_Kart",
			"Basilisk_Soldner_Kart"
		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = { "Basilisk_Searcher_Drone_Item" };

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	//Required inherits
	class Man;
	class Air;
	class Turrets;
	class MainTurret;
	class NewTurret;
	class assembleInfo;
	class Components;
	class ViewOptics;
	class EventHandlers;
	class SensorTemplateIR;
	class SDV_01_base_F;
	class OPTRE_M12_Base;
	class OPTRE_UNSC_falcon;
	class OPTRE_UNSC_falcon_armed;
	class Splits_UNSC_D77_TC_Pelican;
	class HitPoints;
	class HitLFWheel;
	class HitLF2Wheel;
	class HitRFWheel;
	class HitRF2Wheel;
	class HitBody;

	//Submarine
	class B_SDV_01_F: SDV_01_base_F
	{
		class EventHandlers;
	};
	class Basilisk_SDV_01: B_SDV_01_F
	{
		dlc = "Basilisk Aux Mod";
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayname = "Basilisk SDV - Engine Enhanced";
		faction = "Basilisk_Faction";
		side = 1;
		editorCategory = "Basilisk_AUX_EdCat";
		editorSubcategory = "Basilisk_EdSubCat_Water";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) animateSource [""periscope"",3,true];(_this select 0) animateSource [""Antenna"",3,true];(_this select 0) animateSource [""HideScope"",3,true]; (_this select 0) animateSource [""display_on_R"",1,true];";
		};
		acceleration = 20;
		maxSpeed = 100;
		enginePower = 100;
		waterSpeedFactor = 0.1;
		enableRadio = 1;
	};

	//Kaker Kart
	class C_Kart_01_Blu_F;
	class Basilisk_Kart_base : C_Kart_01_Blu_F {
		maxSpeed = 200;
		fuelCapacity = 20;
		peakTorque = 500;
		enginePower = 400;
		maxOmega = 800;
		redRpm = 4500;
		armor = 400;
		scope = 1;
		scopeCurator = 1;
		DLC = "Kart";
		crew = "C_Driver_2_F";
		side = 1;
		class HitPoints : HitPoints
		{
			class HitLFWheel : HitLFWheel
			{
				armor = 10;
				radius = 0.2;
				visual = "wheel_1_1_hide";
			};
			class HitLF2Wheel : HitLF2Wheel
			{
				armor = 10;
				radius = 0.2;
				visual = "wheel_1_2_hide";
			};
			class HitRFWheel : HitRFWheel
			{
				armor = 10;
				radius = 0.2;
				visual = "wheel_2_1_hide";
			};
			class HitRF2Wheel : HitRF2Wheel
			{
				armor = 10;
				radius = 0.2;
				visual = "wheel_2_2_hide";
			};
			class HitFuel
			{
				armor = 50;
				material = -1;
				name = "fuel";
				visual = "";
				passThrough = 0.2;
				radius = 0.2;
			};
			class HitEngine
			{
				armor = 20;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.2;
				radius = 0.2;
			};
			class HitBody : HitBody
			{
				armor = 10;
				visual = "zbytek";
				passThrough = 1;
				radius = 0.2;
			};
		};
	};
	class Basilisk_Kaker_Kart : Basilisk_Kart_base
	{
		editorCategory = "Basilisk_AUX_EdCat";
		editorSubcategory = "Basilisk_EdSubCat_Cars";
		scope = 2;
		scopeCurator = 2;
		faction = "Basilisk_Faction";
		author = "Jimbo";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_Red_F.jpg";
		_generalMacro = "Basilisk_Kaker_Kart";
		displayName = "Kaker's Kart";
		hiddenSelectionsTextures[] = { "BasiliskVehicles\Textures\Kaker_Kart_CO.paa","BasiliskVehicles\Textures\Kaker_Kart_Logos_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_8_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_7_CA.paa" };
	};
	class Basilisk_Soldner_Kart : Basilisk_Kart_base
	{
		editorCategory = "Basilisk_AUX_EdCat";
		editorSubcategory = "Basilisk_EdSubCat_Cars";
		scope = 2;
		scopeCurator = 2;
		faction = "Basilisk_Faction";
		author = "Soldner";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Kart_01_Blu_F.jpg";
		_generalMacro = "Basilisk_Soldner_Kart";
		scope = 2;
		scopeCurator = 2;
		displayName = "Soldner's Kart";
		hiddenSelectionsTextures[] = { "BasiliskVehicles\Textures\Soldner_Kart_CO.paa","BasiliskVehicles\Textures\Soldner_Kart_Logos_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_7_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_7_CA.paa" };
	};

	//Quadcopter Drone
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class Basilisk_Searcher_Drone_place
				{
					displayName = "Deploy Raven";
					condition = "[_player, 'Basilisk_Searcher_Drone_Item'] call ace_common_fnc_hasItem";
					statement = "[_player, 'Basilisk_Searcher_Mk1', 'Basilisk_Searcher_Drone_Item'] call aux_1stMEU_fnc_place_down_vic";
					showDisabled = 0;
					icon = "\1st_meu_functions\place_down\data\rave_icon.paa";
				};
			};
		};
	};
	class Helicopter : Air
	{
		class ACE_Actions
		{
			class ACE_MainActions {};
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class Helicopter_Base_F : Helicopter
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions {};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret {};
		};
	};
	class UAV_01_base_F : Helicopter_Base_F
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions {};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret {};
		};
	};
	class Basilisk_Searcher_Mk1 : UAV_01_base_F
	{
		author = "Soldner";
		displayName = "[Basilisk] Searcher Drone";
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.01;
		editorCategory = "Basilisk_AUX_EdCat";
		editorSubcategory = "Basilisk_EdSubCat_Drones";
		faction = "Basilisk_Faction";
		radarTargetSize = 0.01;
		altFullForce = 2500;
		altNoForce = 5000;
		maxHeight = 2500;
		avgHeight = 1250;
		scope = 2;
		scopeCurator = 2;
		side = 1;
		itc_land_PacksTo = "Basilisk_Searcher_Drone_Item";
		class Viewoptics : ViewOptics
		{
			minFov = 0.01;
			maxFov = 1.25;
			initFov = 1;
			visionMode[] = { "Normal","Ti" };
			thermalMode[] = { 0,1 };
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		crew = "B_UAV_AI";
		typicalCargo[] = { "B_UAV_AI" };
		accuracy = 0.5;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = { "Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries" };
			};
		};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = { "BasiliskVehicles\Textures\Searcher_Drone.paa" };
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "interaction_point";
				distance = 5;
				condition = "(true)";
				class ACE_Pickup
				{
					selection = "";
					displayName = "Pick Up Drone";
					distance = 5;
					condition = "(alive _target)";
					statement = "[_player, _target, 'Basilisk_Searcher_Drone_Item'] call aux_1stMEU_fnc_pick_up_vic";
					showDisabled = 0;
					exceptions[] = {};
					//icon = "\1st_meu_vehicles\air\drones\data\rave_icon.paa";
				};
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class Basilisk_Searcher_Drone_Item : ACE_ItemCore
	{
		author = "Soldner";
		scope = 2;
		displayName = "[Basilisk] Searcher Drone";
		descriptionShort = "";
		model = "\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		picture = "\1st_meu_vehicles\air\drones\data\rave_icon.paa";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 60;
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class 1st_meu_place_and_pick
	{
		init = "call compile preprocessFileLineNumbers '1st_meu_functions\place_down\xeh_preinit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class Basilisk_Searcher_Mk1
	{
		class 1st_MEU_Raven_Drone_Carry
		{
			init = "[_this select 0, true, [0, 1, 1], 0] call ace_dragging_fnc_setCarryable;";
		};
		class 1st_MEU_Raven_Drone_Drag
		{
			init = "[_this select 0, true, [0, 1.5, 0], 0] call ace_dragging_fnc_setDraggable;";
		};
	};
};