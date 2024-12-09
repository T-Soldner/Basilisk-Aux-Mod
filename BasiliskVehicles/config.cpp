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
	class HMCS;
	class OPTRE_M12_Base;
	class OPTRE_UNSC_falcon;
	class OPTRE_UNSC_falcon_armed;
	class Splits_UNSC_D77_TC_Pelican;

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
		fuelCapacity = 900;
		peakTorque = 1750;
		enginePower = 625;
		maxOmega = 385;
		redRpm = 4500;
		armor = 400;
		scope = 1;
		scopeCurator = 1;
		DLC = "Kart";
		crew = "C_Driver_2_F";
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
		hiddenSelectionsTextures[] = { "\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_8_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_7_CA.paa" };
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
		hiddenSelectionsTextures[] = { "\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_8_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_7_CA.paa" };
	};

	//Searcher Drone
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ITC_Land_Unpack
				{
					class ITC_Land_Unpack_AR2_B;
					class Basilisk_Unpack_Searcher {
						displayName = "[Basilisk] Searcher Drone";
						condition = "'Basilisk_Searcher_Drone_Item' in (items _player)";
						statement = "['Basilisk_Searcher_Drone_Item',_player] call itc_land_packable_fnc_unPack";
						priority = 1;
						showDisabled = 1;
						exceptions[] = { "isNotInside","isNotSitting" };
						enableInside = 0;
					};
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
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = { "BasiliskVehicles\Textures\Searcher_Drone.paa" };
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
				class ITC_Land_PackDarter
				{
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_packable_fnc_Pack";
				};
			};
		};
	};

	//Wombat
	class OPTRE_Wombat_Base;
	class Basilisk_Aurora : OPTRE_Wombat_Base
	{
		maximumLoad = 2000;
		scope = 2;
		scopeCurator = 2;
		author = "Soldner";
		displayName = "[Basilisk] Aurora Drone";
		fuelCapacity = 2000;
		fuelConsumptionRate = 0.01;
		editorCategory = "Basilisk_AUX_EdCat";
		editorSubcategory = "Basilisk_EdSubCat_Drones";
		maxHeight = 2500;
		avgHeight = 1250;
		radarTargetSize = 0.01;
		maxSpeed = 400;
		landingAoa = 0.1309;
		landingSpeed = 140;
		stallSpeed = 50;
		stallWarningTreshold = 0.07;
		wheelSteeringSensitivity = 1.3;
		airBrake = 1;
		airBrakeFrictionCoef = 2;
		flaps = 1;
		flapsFrictionCoef = 0.2;
		gearsUpFrictionCoef = 0.35;
		airFrictionCoefs0[] = { 0.0,0.0,0.0 };
		airFrictionCoefs1[] = { 0.1,0.7,0.005 };
		airFrictionCoefs2[] = { 0.001,0.0075,6e-05 };
		angleOfIndicence = 0;
		envelope[] = { 0.0,0.07,0.26,0.59,1.04,1.63,1.98,2.7,3.2,4.05,4.68,5.49,6.19,7.04,7.53,7.9,8.2,8.4,8.5,8.2,7.0 };
		altNoForce = 13000;
		altFullForce = 2000;
		thrustCoef[] = { 1.36,1.25,1.14,1.04,0.95,0.86,0.78,0.7,0.61,0.3,0.0,0.0,0.0 };
		aileronSensitivity = 0.6;
		aileronCoef[] = { 0.0,0.12,0.46,0.65,0.75,0.82,0.88,0.92,0.95,0.97,0.99,1.0,1.01 };
		elevatorSensitivity = 0.7;
		elevatorCoef[] = { 0.0,0.2,0.7,0.47,0.38,0.32,0.28,0.25,0.22,0.19,0.17,0.15,0.13 };
		rudderInfluence = 0.9397;
		rudderCoef[] = { 0.0,0.6,1.2,1.5,1.7,1.8,1.9,1.9,2.0,2.0,2.0,1.8,1.4 };
		aileronControlsSensitivityCoef = 3.0;
		elevatorControlsSensitivityCoef = 3.0;
		rudderControlsSensitivityCoef = 3.0;
		draconicForceXCoef = 8.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = { 2.0,2.5,3.1,3.7,4.4,5.1,5.9,6.5,7.0,7.5,7.9,8.3,8.5 };
		draconicTorqueYCoef[] = { 12.0,8.0,3.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0 };
		maxOmega = 6000;
		class Components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons {};
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = { "missiles_SCALPEL","Laserdesignator_mounted" };
				magazines[] = { "Laserbatteries","8Rnd_LG_scalpel" };
			};
		};
	};
};
class CfgWeapons
{
	//inherted stuff
	class ITC_Land_UAV_Packed_base;

	class Basilisk_Searcher_Drone_Item : ITC_Land_UAV_Packed_base
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "[Basilisk] Searcher Drone";
		itc_land_unPacksTo = "Basilisk_Searcher_Mk1";
	};
};
