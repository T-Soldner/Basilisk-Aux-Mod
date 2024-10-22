#define _ARMA_

class CfgPatches
{
	class Basilisk_patch_vehicle
	{
		author = "Soldner";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = { 
			"Basilisk_SDV_01",
			"Basilisk_Aurora",
			"Basilisk_Searcher_Mk1",
		};
		weapons[] = {"Basilisk_Searcher_Drone_Item"};
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

	////Warthog FAV, LAAG, APC, APC Medical, Gauss, AA, TT
	//class Basilisk_M12_FAV : OPTRE_M12_Base
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV.jpg";
	//	scope = 2;
	//	scopeCurator = 2;
	//	side = 1;
	//	author = "Soldner";
	//	displayName = "[Basilisk] M12 FAV Warthog";
	//	editorCategory = "Basilisk_AUX_EdCat";
	//	editorSubcategory = "Basilisk_EdSubCat_Cars";
	//	faction = "Gladius_Faction";
	//	maxSpeed = 180;
	//	fuelCapacity = 300;
	//	peakTorque = 1750;
	//	enginePower = 625;
	//	maxOmega = 385;
	//	redRpm = 4500;
	//	armor = 400
	//	hiddenSelections[] = { "Camo1","Camo2","camo_details","camo_interior","camo_doors" };
	//	hiddenSelectionsTextures[] = { 
	//		"PHVehicles\Textures\m12_Basilisk_co.paa",
	//		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
	//		"\OPTRE_Vehicles\Warthog\data\decals_ca.paa",
	//		"\OPTRE_Vehicles\Warthog\data\night\m12hogmaav_interior_night_co.paa",
	//		"PHVehicles\Textures\m12_Basilisk_apc_co.paa" 
	//	};
	//};
	//class Basilisk_M12_LAAG : Basilisk_M12_FAV
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_LRV.jpg";
	//	displayName = "[Basilisk] M12 LAAG Warthog";
	//	model = "\OPTRE_Vehicles\Warthog\M12_MAAV_MG.p3d";
	//	transportSoldier = 0;
	//	class Turrets : Turrets
	//	{
	//		class CargoGunner_1 : NewTurret
	//		{
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
	//			gunnerCompartments = "Compartment1";
	//			memoryPointsGetInGunner = "pos pas";
	//			memoryPointsGetInGunnerDir = "pos pas dir";
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			memoryPointGunnerOptics = "";
	//			gunnerName = "Front Passenger";
	//			proxyIndex = 1;
	//			proxyType = "CPCargo";
	//			showAsCargo = 1;
	//			maxElev = 30;
	//			minElev = -20;
	//			maxTurn = 95;
	//			minTurn = -95;
	//			animationSourceHatch = "cargo_front";
	//			enabledByAnimationSource = "";
	//			LODTurnedIn = 1200;
	//			LODTurnedOut = -1;
	//			viewGunnerInExternal = 1;
	//			canHideGunner = 1;
	//			hasGunner = 1;
	//			allowLauncherIn = 0;
	//			allowLauncherOut = 1;
	//			isPersonTurret = 2;
	//			weapons[] = {};
	//			magazines[] = {};
	//			primaryGunner = 0;
	//			primaryObserver = 0;
	//			gunnerOpticsShowCursor = 0;
	//			body = "";
	//			gun = "";
	//			animationSourceBody = "";
	//			animationSourceGun = "";
	//			soundServo[] = { "","db-50",1.0 };
	//			startEngine = 0;
	//			hideWeaponsGunner = 0;
	//			gunnerGetInAction = "GetInHigh";
	//			gunnerGetOutAction = "GetOutHigh";
	//			commanding = -1;
	//			gunnerOpticsModel = "";
	//			gunnerOutOpticsColor[] = { 0,0,0,1 };
	//			gunnerForceOptics = 0;
	//			gunnerOutForceOptics = 0;
	//			gunnerOutOpticsShowCursor = 0;
	//			gunnerOpticsEffect[] = {};
	//			stabilizedInAxes = 0;
	//		};
	//		class MainTurret : MainTurret
	//		{
	//			body = "mainturret";
	//			gun = "maingun";
	//			animationsourcebody = "mainturret";
	//			animationSourceGun = "maingun";
	//			gunAxis = "Osa Hlavne";
	//			gunBeg = "Usti hlavne";
	//			gunEnd = "konec hlavne";
	//			LODTurnedOut = 1100;
	//			LODTurnedIn = 1100;
	//			LODOpticsIn = 1100;
	//			LODOpticsOut = 1100;
	//			ejectDeadGunner = 1;
	//			minElev = -15;
	//			maxElev = 30;
	//			minTurn = -360;
	//			maxTurn = 360;
	//			initTurn = 0;
	//			turretAxis = "OsaVeze";
	//			maxHorizontalRotSpeed = 1.75;
	//			maxVerticalRotSpeed = 1.5;
	//			gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
	//			gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
	//			gunnerGetInAction = "GetInMRAP_01";
	//			gunnerGetOutAction = "GetOutMRAP_01";
	//			gunnerName = "Gunner";
	//			hideWeaponsGunner = 0;
	//			soundServo[] = { "",0.01,1 };
	//			stabilizedInAxes = 3;
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			commanding = 1;
	//			primaryGunner = 1;
	//			turretInfoType = "RscWeaponZeroing";
	//			memoryPointsGetInGunner = "Pos Gunner";
	//			memoryPointsGetInGunnerDir = "Pos Gunner dir";
	//			gunnerLeftHandAnimName = "OtocHlaven";
	//			gunnerRightHandAnimName = "OtocHlaven";
	//			memoryPointGun = "machinegun";
	//			weapons[] = { "Basilisk_M41_LAAG" };
	//			magazines[] = { "OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41" };
	//			memoryPointGunnerOptics = "gunnerview";
	//			memoryPointGunnerOutOptics = "gunnerview";
	//			gunnerOpticsShowCursor = 1;
	//			castGunnerShadow = 1;
	//			startEngine = 0;
	//			enableManualFire = 0;
	//			gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
	//			gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty";
	//			gunnerForceOptics = 1;
	//			hasGunner = 1;
	//			class ViewOptics;
	//			class ViewGunner : ViewOptics
	//			{
	//				initAngleX = 0;
	//				minAngleX = -45;
	//				maxAngleX = 45;
	//				initFov = 0.9;
	//				minFov = 0.42;
	//				maxFov = 0.9;
	//				visionMode[] = {};
	//			};
	//			class ViewOptics : ViewOptics
	//			{
	//				initFov = 0.9;
	//				maxFov = 0.9;
	//				minFov = 0.07;
	//			};
	//		};
	//	};
	//	class AnimationSources
	//	{
	//		class Gatling
	//		{
	//			source = "revolving";
	//			weapon = "OPTRE_M41_LAAG";
	//		};
	//		class Gatling_flash
	//		{
	//			source = "reload";
	//			weapon = "OPTRE_M41_LAAG";
	//		};
	//		class showDoors
	//		{
	//			displayName = "Attach Armored Doors";
	//			author = "Article 2 Studios";
	//			source = "user";
	//			animPeriod = 0.001;
	//			initPhase = 0;
	//			mass = 200;
	//		};
	//	};
	//	hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_turret_decal","camo_sight","camo_doors" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\m12_Basilisk_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\m12hogmaav_interior_night_co.paa","\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","PHVehicles\Textures\m12_Basilisk_apc_co.paa" };
	//};
	//class Basilisk_M12_APC : Basilisk_M12_FAV
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC.jpg";
	//	displayName = "[Basilisk] M12 APC Warthog";
	//	model = "\OPTRE_Vehicles\Warthog\M12_MAAV_APC.p3d";
	//	transportSoldier = 5;
	//	cargoAction[] = { "passenger_generic01_foldhands" };
	//	class Turrets : Turrets {};
	//	hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_transport_details","camo_net" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\m12_Basilisk_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa","PHVehicles\Textures\m12_Basilisk_apc_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa" };
	//};
	//class Basilisk_M12_APC_MED : Basilisk_M12_FAV
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12_FAV_APC_MED.jpg";
	//	displayName = "[Basilisk] M12 Medical APC Warthog";
	//	model = "\OPTRE_Vehicles\Warthog\M12_MAAV_MED.p3d";
	//	transportSoldier = 3;
	//	cargoAction[] = { "passenger_generic01_foldhands","Patient_Van_02_Medevac_Back","Patient_Van_02_Medevac_Back" };
	//	class AnimationSources {};
	//	class Turrets : Turrets {};
	//	hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_transport_details","camo_net","camo_medical" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\m12_Basilisk_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_interior_night_co.paa","PHVehicles\Textures\m12_Basilisk_medicalapc_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa","\OPTRE_Vehicles\warthog\data\medical_lopo_co.paa" };
	//};
	//class Basilisk_M12_Gauss : Basilisk_M12_FAV
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12G1_LRV.jpg";
	//	displayName = "[Basilisk] M12 Gauss Warthog";
	//	model = "\OPTRE_Vehicles\Warthog\M12_MAAV_G.p3d";
	//	transportSoldier = 0;
	//	class Turrets : Turrets
	//	{
	//		class CargoGunner_1 : NewTurret
	//		{
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
	//			gunnerCompartments = "Compartment1";
	//			memoryPointsGetInGunner = "pos pas";
	//			memoryPointsGetInGunnerDir = "pos pas dir";
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			memoryPointGunnerOptics = "";
	//			gunnerName = "Front Passenger";
	//			proxyIndex = 1;
	//			proxyType = "CPCargo";
	//			showAsCargo = 1;
	//			maxElev = 30;
	//			minElev = -20;
	//			maxTurn = 95;
	//			minTurn = -95;
	//			animationSourceHatch = "cargo_front";
	//			enabledByAnimationSource = "";
	//			LODTurnedIn = 1200;
	//			LODTurnedOut = -1;
	//			viewGunnerInExternal = 1;
	//			canHideGunner = 1;
	//			hasGunner = 1;
	//			allowLauncherIn = 0;
	//			allowLauncherOut = 1;
	//			isPersonTurret = 2;
	//			weapons[] = {};
	//			magazines[] = {};
	//			primaryGunner = 0;
	//			primaryObserver = 0;
	//			gunnerOpticsShowCursor = 0;
	//			body = "";
	//			gun = "";
	//			animationSourceBody = "";
	//			animationSourceGun = "";
	//			soundServo[] = { "","db-50",1.0 };
	//			startEngine = 0;
	//			hideWeaponsGunner = 0;
	//			gunnerGetInAction = "GetInHigh";
	//			gunnerGetOutAction = "GetOutHigh";
	//			commanding = -1;
	//			gunnerOpticsModel = "";
	//			gunnerOutOpticsColor[] = { 0,0,0,1 };
	//			gunnerForceOptics = 0;
	//			gunnerOutForceOptics = 0;
	//			gunnerOutOpticsShowCursor = 0;
	//			gunnerOpticsEffect[] = {};
	//			stabilizedInAxes = 0;
	//		};
	//		class MainTurret : MainTurret
	//		{
	//			body = "mainturret";
	//			gun = "maingun";
	//			animationsourcebody = "mainturret";
	//			animationSourceGun = "maingun";
	//			gunAxis = "Osa Hlavne";
	//			gunBeg = "Usti hlavne";
	//			gunEnd = "konec hlavne";
	//			minElev = -15;
	//			maxElev = 15;
	//			minTurn = -360;
	//			maxTurn = 360;
	//			initTurn = 0;
	//			turretAxis = "OsaVeze";
	//			maxHorizontalRotSpeed = 1.75;
	//			maxVerticalRotSpeed = 1.5;
	//			gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
	//			gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
	//			gunnerGetInAction = "GetInMRAP_01";
	//			gunnerGetOutAction = "GetOutMRAP_01";
	//			gunnerName = "Gunner";
	//			ejectDeadGunner = 1;
	//			hideWeaponsGunner = 0;
	//			stabilizedInAxes = 3;
	//			soundServo[] = { "",0.01,1 };
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			commanding = 1;
	//			primaryGunner = 1;
	//			memoryPointsGetInGunner = "Pos Gunner";
	//			memoryPointsGetInGunnerDir = "Pos Gunner dir";
	//			gunnerLeftHandAnimName = "OtocHlaven";
	//			gunnerRightHandAnimName = "OtocHlaven";
	//			memoryPointGun = "usti hlavne";
	//			weapons[] = { "OPTRE_M68_GAUSS" };
	//			magazines[] = { "OPTRE_15Rnd_ALIM_Gauss_Slugs","OPTRE_15Rnd_ALIM_Gauss_Slugs","OPTRE_15Rnd_ALIM_Gauss_Slugs","OPTRE_15Rnd_ALIM_Gauss_Slugs" };
	//			memoryPointGunnerOptics = "gunnerview";
	//			memoryPointGunnerOutOptics = "gunnerview";
	//			gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
	//			gunnerOutOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
	//			gunnerOpticsShowCursor = 1;
	//			turretInfoType = "OPTRE_RscOptics_Static_Turret_Gunner";
	//			discreteDistance[] = { 100,200,300,400,600,800,1000,1200,1500,1800,2100,2400,2700,3000,3500,4000,4500,5000 };
	//			discreteDistanceInitIndex = 0;
	//			class Viewoptics : ViewOptics
	//			{
	//				minFov = 0.025;
	//				opticsZoomMin = 0.025;
	//				opticsZoomMax = 0.75;
	//				opticsZoomInit = 0.75;
	//				visionMode[] = { "Normal","NVG","Ti" };
	//				thermalMode[] = { 0,1 };
	//				initFov = 0.85;
	//				maxFov = 0.9;
	//			};
	//			castGunnerShadow = 1;
	//			startEngine = 0;
	//			enableManualFire = 0;
	//			gunnerForceOptics = 0;
	//			class ViewGunner : ViewOptics
	//			{
	//				initFov = 0.75;
	//				minFov = 0.375;
	//				maxFov = 1.1;
	//			};
	//		};
	//	};
	//	class AnimationSources
	//	{
	//		class Gatling
	//		{
	//			source = "revolving";
	//			weapon = "OPTRE_M68_GAUSS";
	//		};
	//		class Gatling_flash
	//		{
	//			source = "reload";
	//			weapon = "OPTRE_M68_GAUSS";
	//		};
	//		class showDoors
	//		{
	//			displayName = "Attach Armored Doors";
	//			author = "Article 2 Studios";
	//			source = "user";
	//			animPeriod = 0.001;
	//			initPhase = 0;
	//			mass = 200;
	//		};
	//	};
	//	hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_doors" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\m12_Basilisk_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","PHVehicles\Textures\m12_Basilisk_apc_co.paa" };
	//};
	//class Basilisk_M12_AA : Basilisk_M12_FAV
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M12R_AA.jpg";
	//	displayName = "[Basilisk] M12 AA Warthog";
	//	model = "\OPTRE_Vehicles\Warthog\M12_MAAV_AA.p3d";
	//	transportSoldier = 0;
	//	memoryPointLMissile = "Rocket_1";
	//	memoryPointRMissile = "Rocket_4";
	//	class Turrets : Turrets
	//	{
	//		class CargoGunner_1 : NewTurret
	//		{
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
	//			gunnerCompartments = "Compartment1";
	//			memoryPointsGetInGunner = "pos pas";
	//			memoryPointsGetInGunnerDir = "pos pas dir";
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			memoryPointGunnerOptics = "";
	//			gunnerName = "Front Passenger";
	//			proxyIndex = 1;
	//			proxyType = "CPCargo";
	//			showAsCargo = 1;
	//			maxElev = 30;
	//			minElev = -20;
	//			maxTurn = 95;
	//			minTurn = -95;
	//			animationSourceHatch = "cargo_front";
	//			enabledByAnimationSource = "";
	//			LODTurnedIn = 1200;
	//			LODTurnedOut = -1;
	//			viewGunnerInExternal = 1;
	//			canHideGunner = 1;
	//			hasGunner = 1;
	//			allowLauncherIn = 0;
	//			allowLauncherOut = 1;
	//			isPersonTurret = 2;
	//			weapons[] = {};
	//			magazines[] = {};
	//			primaryGunner = 0;
	//			primaryObserver = 0;
	//			gunnerOpticsShowCursor = 0;
	//			body = "";
	//			gun = "";
	//			animationSourceBody = "";
	//			animationSourceGun = "";
	//			soundServo[] = { "","db-50",1.0 };
	//			startEngine = 0;
	//			hideWeaponsGunner = 0;
	//			gunnerGetInAction = "GetInHigh";
	//			gunnerGetOutAction = "GetOutHigh";
	//			commanding = -1;
	//			gunnerOpticsModel = "";
	//			gunnerOutOpticsColor[] = { 0,0,0,1 };
	//			gunnerForceOptics = 0;
	//			gunnerOutForceOptics = 0;
	//			gunnerOutOpticsShowCursor = 0;
	//			gunnerOpticsEffect[] = {};
	//			stabilizedInAxes = 0;
	//		};
	//		class MainTurret : MainTurret
	//		{
	//			body = "mainturret";
	//			gun = "maingun";
	//			animationsourcebody = "mainturret";
	//			animationSourceGun = "maingun";
	//			gunBeg = "Usti hlavne";
	//			gunEnd = "konec hlavne";
	//			gunAxis = "Osa Hlavne";
	//			minElev = -15;
	//			maxElev = 45;
	//			minTurn = -360;
	//			maxTurn = 360;
	//			initTurn = 0;
	//			turretAxis = "OsaVeze";
	//			maxHorizontalRotSpeed = 1.75;
	//			maxVerticalRotSpeed = 1.5;
	//			ejectDeadGunner = 1;
	//			gunnerAction = "OPTRE_Gunner_Gaus_Warthog";
	//			gunnerInAction = "OPTRE_Gunner_Gaus_Warthog";
	//			gunnerGetInAction = "GetInMRAP_01";
	//			gunnerGetOutAction = "GetOutMRAP_01";
	//			gunnerName = "Gunner";
	//			hideWeaponsGunner = 0;
	//			soundServo[] = { "",0.01,1 };
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			commanding = 1;
	//			primaryGunner = 1;
	//			turretInfoType = "RscWeaponZeroing";
	//			memoryPointsGetInGunner = "Pos Gunner";
	//			memoryPointsGetInGunnerDir = "Pos Gunner dir";
	//			gunnerLeftHandAnimName = "OtocHlaven";
	//			gunnerRightHandAnimName = "OtocHlaven";
	//			stabilizedInAxes = 3;
	//			weapons[] = { "OPTRE_M79_MLRS" };
	//			magazines[] = { "OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets","OPTRE_6Rnd_ASGM2_rockets" };
	//			memoryPointGunnerOptics = "gunnerview";
	//			memoryPointGunneroutOptics = "gunnerview";
	//			gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
	//			gunnerOutOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
	//			gunnerOpticsShowCursor = 1;
	//			castGunnerShadow = 1;
	//			hasGunner = 1;
	//			class Viewoptics : ViewOptics
	//			{
	//				opticsZoomMin = 0.25;
	//				opticsZoomMax = 0.75;
	//				opticsZoomInit = 0.75;
	//				visionMode[] = { "Normal","NVG","Ti" };
	//				thermalMode[] = { 5,6 };
	//			};
	//			startEngine = 0;
	//			enableManualFire = 0;
	//			gunnerForceOptics = 0;
	//			class ViewGunner : ViewOptics
	//			{
	//				initFov = 0.75;
	//				minFov = 0.375;
	//				maxFov = 1.1;
	//			};
	//		};
	//	};
	//	hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_doors" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\m12_Basilisk_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","PHVehicles\Textures\m12_Basilisk_apc_co.paa" };
	//	class AnimationSources
	//	{
	//		class Missiles_revolving
	//		{
	//			source = "revolving";
	//			weapon = "OPTRE_M79_MLRS";
	//		};
	//		class Missiles_reloading : Missiles_revolving
	//		{
	//			source = "reloadMagazine";
	//		};
	//		class missiles_alternating
	//		{
	//			source = "ammo";
	//			weapon = "OPTRE_M79_MLRS";
	//		};
	//		class showDoors
	//		{
	//			displayName = "Attach Armored Doors";
	//			author = "Article 2 Studios";
	//			source = "user";
	//			animPeriod = 0.001;
	//			initPhase = 0;
	//			mass = 200;
	//		};
	//	};
	//	class EventHandlers : EventHandlers
	//	{
	//		fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
	//	};
	//};
	//class Basilisk_M12_TT : Basilisk_M12_FAV
	//{
	//	editorPreview = "\OPTRE_Misc\Image\OPTRE\Landcraft\OPTRE_M813_TT.jpg";
	//	displayName = "[Basilisk] M12 Troop Transport Warthog";
	//	class AnimationSources {};
	//	model = "\OPTRE_Vehicles\Warthog\M12_MAAV_TT.p3d";
	//	transportSoldier = 0;
	//	class Turrets : Turrets
	//	{
	//		class CargoGunner_1 : NewTurret
	//		{
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
	//			gunnerCompartments = "Compartment1";
	//			memoryPointsGetInGunner = "pos pas";
	//			memoryPointsGetInGunnerDir = "pos pas dir";
	//			outGunnerMayFire = 1;
	//			inGunnerMayFire = 1;
	//			memoryPointGunnerOptics = "";
	//			gunnerName = "Front Passenger";
	//			proxyIndex = 1;
	//			proxyType = "CPCargo";
	//			showAsCargo = 1;
	//			maxElev = 30;
	//			minElev = -20;
	//			maxTurn = 95;
	//			minTurn = -95;
	//			animationSourceHatch = "cargo_front";
	//			enabledByAnimationSource = "";
	//			LODTurnedIn = 1200;
	//			LODTurnedOut = -1;
	//			viewGunnerInExternal = 1;
	//			canHideGunner = 1;
	//			hasGunner = 1;
	//			allowLauncherIn = 0;
	//			allowLauncherOut = 1;
	//			isPersonTurret = 2;
	//			weapons[] = {};
	//			magazines[] = {};
	//			primaryGunner = 0;
	//			primaryObserver = 0;
	//			gunnerOpticsShowCursor = 0;
	//			body = "";
	//			gun = "";
	//			animationSourceBody = "";
	//			animationSourceGun = "";
	//			soundServo[] = { "","db-50",1.0 };
	//			startEngine = 0;
	//			hideWeaponsGunner = 0;
	//			gunnerGetInAction = "GetInHigh";
	//			gunnerGetOutAction = "GetOutHigh";
	//			commanding = -1;
	//			gunnerOpticsModel = "";
	//			gunnerOutOpticsColor[] = { 0,0,0,1 };
	//			gunnerForceOptics = 0;
	//			gunnerOutForceOptics = 0;
	//			gunnerOutOpticsShowCursor = 0;
	//			gunnerOpticsEffect[] = {};
	//			stabilizedInAxes = 0;
	//		};
	//		class CargoGunner_02 : CargoGunner_1
	//		{
	//			gunnerAction = "passenger_bench_1";
	//			gunnerInAction = "passenger_bench_1";
	//			gunnerName = "Right Passenger (Rear)";
	//			memoryPointsGetInGunner = "pos pasrr";
	//			memoryPointsGetInGunnerDir = "pos pasrr dir";
	//			proxyIndex = 4;
	//			gunnerCompartments = "Compartment2";
	//			canHideGunner = 0;
	//			inGunnerMayFire = 1;
	//		};
	//		class CargoGunner_03 : CargoGunner_02
	//		{
	//			gunnerAction = "passenger_bench_1";
	//			gunnerInAction = "passenger_bench_1";
	//			gunnerName = "Left Passenger (Rear)";
	//			memoryPointsGetInGunner = "pos paslr";
	//			memoryPointsGetInGunnerDir = "pos paslr dir";
	//			proxyIndex = 5;
	//			gunnerCompartments = "Compartment2";
	//			canHideGunner = 0;
	//		};
	//		class CargoGunner_04 : CargoGunner_02
	//		{
	//			gunnerAction = "passenger_inside_2";
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerName = "Right Passenger (Middle)";
	//			memoryPointsGetInGunner = "pos pasrm";
	//			memoryPointsGetInGunnerDir = "pos pasrm dir";
	//			proxyIndex = 6;
	//			gunnerCompartments = "Compartment2";
	//			canHideGunner = 0;
	//		};
	//		class CargoGunner_05 : CargoGunner_02
	//		{
	//			gunnerAction = "passenger_inside_2";
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerName = "Left Passenger (Middle)";
	//			memoryPointsGetInGunner = "pos paslm";
	//			memoryPointsGetInGunnerDir = "pos paslm dir";
	//			proxyIndex = 7;
	//			gunnerCompartments = "Compartment2";
	//			canHideGunner = 0;
	//		};
	//		class CargoGunner_06 : CargoGunner_02
	//		{
	//			gunnerAction = "passenger_inside_2";
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerName = "Right Passenger (Front)";
	//			memoryPointsGetInGunner = "pos pasrf";
	//			memoryPointsGetInGunnerDir = "pos pasrf dir";
	//			proxyIndex = 8;
	//			gunnerCompartments = "Compartment2";
	//			canHideGunner = 0;
	//		};
	//		class CargoGunner_07 : CargoGunner_02
	//		{
	//			gunnerAction = "passenger_inside_2";
	//			gunnerInAction = "passenger_inside_2";
	//			gunnerName = "Left Passenger (Front)";
	//			memoryPointsGetInGunner = "pos paslf";
	//			memoryPointsGetInGunnerDir = "pos paslf dir";
	//			proxyIndex = 9;
	//			gunnerCompartments = "Compartment2";
	//			canHideGunner = 0;
	//		};
	//	};
	//	hiddenSelections[] = { "Camo1","Camo2","Camo3","camo_details","camo_interior","camo_net","camo_transport_decal" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\m12_Basilisk_co.paa","\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa","\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\night\M12HogMaav_interior_night_co.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa","PHVehicles\Textures\m12_Basilisk_apc_co.paa" };
	//};

	////Falcon UH and MH variants
	//class Basilisk_UH_144_Falcon : OPTRE_UNSC_falcon {
	//	author = "Soldner";
	//	editorCategory = "Basilisk_AUX_EdCat";
	//	editorSubcategory = "Basilisk_EdSubCat_Helicopters";
	//	model = "\OPTRE_Vehicles_Air\Falcon\falcon_unarmed.p3d";
	//	faction = "Gladius_Faction";
	//	displayName = "[Basilisk] UH-144 Falcon";
	//	visionMode[] = { "Normal","NVG","Ti" };
	//	hiddenSelections[] = { "camo1","camo2","camo3","camoGlass","camoGlassPilot" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\Basilisk_Falcon_Main_co.paa","PHVehicles\Textures\Basilisk_Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa","\optre_vehicles_air\falcon\data\falcon_glass_ca.paa","\optre_vehicles_air\falcon\data\falcon_glass_ca.paa" };
	//};
	//class Basilisk_MH_144_Falcon : OPTRE_UNSC_falcon_armed {
	//	author = "Soldner";
	//	editorCategory = "Basilisk_AUX_EdCat";
	//	editorSubcategory = "Basilisk_EdSubCat_Helicopters";
	//	faction = "Gladius_Faction";
	//	displayName = "[Basilisk] MH-144 Falcon";
	//	visionMode[] = { "Normal","NVG","Ti" };
	//	hiddenSelections[] = { "camo1","camo2","camo3","camoGlass","camoGlassPilot" };
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\Basilisk_Falcon_Main_co.paa","PHVehicles\Textures\Basilisk_Falcon_Attachments_co.paa","\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa","\optre_vehicles_air\falcon\data\falcon_glass_ca.paa","\optre_vehicles_air\falcon\data\falcon_glass_ca.paa" };
	//};

	////Pelican
	//class Basilisk_Pelican : Splits_UNSC_D77_TC_Pelican
	//{
	//	author = "Soldner";
	//	crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
	//	editorCategory = "Basilisk_AUX_EdCat";
	//	editorSubcategory = "Basilisk_EdSubCat_Helicopters";
	//	faction = "Gladius_Faction";
	//	displayName = "[Basilisk] D77-TC Pelican";
	//	hiddenSelectionsTextures[] = { "PHVehicles\Textures\Basilisk_pelican_body_co.paa","PHVehicles\Textures\Basilisk_wings_and_gear_co.paa","PHVehicles\Textures\Basilisk_weaponry_co.paa" };
	//	class SimpleObject
	//	{
	//		eden = 0;
	//		animate[] = { {"damage_hide",0},{"glass_1",0},{"glass_2",0},{"glass_3",0},{"glass_4",0},{"glass_5",0},{"glass_6",0},{"glass_7",0},{"glass_8",0},{"glass_9",0},{"glass_10",0},{"glass_11",0},{"glass_12",0},{"glass_13",0},{"glass_14",0},{"glass_15",0},{"glass_16",0},{"glass_17",0},{"glass_18",0},{"glass_19",0},{"glass_20",0},{"cannon_barrel_hide",0},{"rotor_1_blur_hide",0},{"rotor_1_static_hide",0},{"rotor_2_blur_hide",0},{"rotor_2_static_hide",0},{"engine_1_1_rot",1},{"engine_1_2_rot",1},{"engine_2_1_rot",1},{"engine_2_2_rot",1},{"stator_1_rudder_rot",0},{"stator_1_elevator_rot",0},{"rotor_1_rot",0},{"stator_2_rudder_rot",0},{"stator_2_elevator_rot",0},{"rotor_2_rot",0},{"gear_1_move",0},{"gear_2_rot",0},{"gear_2_a_rot",0},{"gear_2_b_rot",0},{"gear_3_rot",0},{"gear_3_a_rot",0},{"gear_3_b_rot",0},{"gear_1_hatch_1_rot",0},{"gear_1_hatch_2_rot",0},{"wheel_1_rot",0},{"wheel_2_rot",0},{"wheel_3_rot",0},{"gear_1_damper_move",0},{"gear_1_damper_rotate",0},{"gear_1_link_1_rotate",0},{"gear_1_link_2_rotate",0},{"gear_2_damper_move",0},{"gear_3_damper_move",0},{"door_1_rot",0},{"cargoseats_hide",1},{"display_off_hide",0},{"positionlights_hide",0},{"cannon_turret_rot",0},{"cannon_rot",0.09},{"cannon_muzzleflash_hide",0},{"cannon_barrel_move",1},{"rotor_1_hide",0},{"rotor_1_unhide",0},{"rotor_2_hide",0},{"rotor_2_unhide",0},{"avionics_damage",0},{"stick_control_1_pitch_rot",0},{"Throttle",0},{"stick_control_2_pitch_rot",0},{"stick_control_1_roll_rot",0},{"stick_control_2_roll_rot",0},{"pedals_1_left_1_move",0},{"pedals_1_right_1_move",0},{"pedals_1_left_2_rot",0},{"pedals_1_right_2_rot",0},{"pedals_2_left_1_move",0},{"pedals_2_right_1_move",0},{"pedals_2_left_2_rot",0},{"pedals_2_right_2_rot",0},{"display_1_alt_ladder_rot",8.16},{"display_1_alt_1_rot",8.16},{"display_1_alt_10_rot",8.16},{"display_1_alt_100_rot",8.16},{"display_1_alt_1000_rot",8.16},{"display_1_compass_rot",0},{"display_1_fuel_move",1},{"display_1_gear_down_move",0},{"display_1_gear_up_move",0},{"display_1_horizon_bank_rot",0},{"display_1_horizon_move",0},{"display_1_hydraulics_1_rot",0},{"display_1_hydraulics_2_rot",0},{"display_1_oil_1_rot",1},{"display_1_oil_2_rot",1},{"display_1_oil_3_rot",1},{"display_1_oil_4_rot",1},{"display_1_oil_5_rot",1},{"display_1_oil_6_rot",1},{"display_1_pitch_rot",0},{"display_1_roll_rot",0},{"display_1_yaw_rot",0},{"display_1_rpm_1_rot",0},{"display_1_rpm_2_rot",0},{"display_1_speed_ladder_rot",0},{"display_1_speed_1_rot",0},{"display_1_speed_10_rot",0},{"display_1_speed_100_rot",0},{"display_1_vert_speed_rot",0},{"display_1_voltage_1_rot",0},{"display_1_voltage_2_rot",0},{"display_1_vtol_1_rot",1},{"display_1_vtol_2_rot",1},{"display_2_alt_ladder_rot",8.16},{"display_2_alt_1_rot",8.16},{"display_2_alt_10_rot",8.16},{"display_2_alt_100_rot",8.16},{"display_2_alt_1000_rot",8.16},{"display_2_compass_rot",0},{"display_2_fuel_move",1},{"display_2_horizon_bank_rot",0},{"display_2_horizon_move",0},{"display_2_oil_1_rot",1},{"display_2_oil_2_rot",1},{"display_2_speed_ladder_rot",0},{"display_2_speed_1_rot",0},{"display_2_speed_10_rot",0},{"display_2_speed_100_rot",0},{"display_2_vert_speed_rot",0},{"display_2_vtol_1_rot",1},{"display_2_vtol_2_rot",1},{"display_at_1_hide",1},{"display_at_2_hide",1},{"display_at_3_hide",1},{"display_at_4_hide",1},{"display_at_5_hide",1},{"display_at_6_hide",1},{"display_at_7_hide",1},{"display_at_8_hide",1},{"display_mg_ammo_1_hide",1},{"display_mg_ammo_2_hide",1},{"display_mg_ammo_3_hide",1},{"display_mg_ammo_4_hide",1},{"display_mg_ammo_5_hide",1},{"display_mg_ammo_6_hide",1},{"display_mg_ammo_7_hide",1},{"display_mg_ammo_8_hide",1},{"display_mg_ammo_9_hide",1},{"display_mg_ammo_10_hide",1},{"display_rocketspod_1_empty_hide",1},{"display_rocketspod_2_empty_hide",1},{"rocketb30_hide",1},{"rocketa30_hide",1},{"rocketb29_hide",1},{"rocketa29_hide",1},{"rocketb28_hide",1},{"rocketa28_hide",1},{"rocketb27_hide",1},{"rocketa27_hide",1},{"rocketb26_hide",1},{"rocketa26_hide",1},{"rocketb25_hide",1},{"rocketa25_hide",1},{"rocketb24_hide",1},{"rocketa24_hide",1},{"rocketb23_hide",1},{"rocketa23_hide",1},{"rocketb22_hide",1},{"rocketa22_hide",1},{"rocketb21_hide",1},{"rocketa21_hide",1},{"rocketb20_hide",1},{"rocketa20_hide",1},{"rocketb19_hide",1},{"rocketa19_hide",1},{"rocketb18_hide",1},{"rocketa18_hide",1},{"rocketb17_hide",1},{"rocketa17_hide",1},{"rocketb16_hide",1},{"rocketa16_hide",1},{"rocketb15_hide",1},{"rocketa15_hide",1},{"rocketb14_hide",1},{"rocketa14_hide",1},{"rocketb13_hide",1},{"rocketa13_hide",1},{"rocketb12_hide",1},{"rocketa12_hide",1},{"rocketb11_hide",1},{"rocketa11_hide",1},{"rocketb10_hide",1},{"rocketa10_hide",1},{"rocketb9_hide",1},{"rocketa9_hide",1},{"rocketb8_hide",1},{"rocketa8_hide",1},{"rocketb6_hide",1},{"rocketa6_hide",1},{"rocketb5_hide",1},{"rocketa5_hide",1},{"rocketb4_hide",1},{"rocketa4_hide",1},{"rocketb3_hide",1},{"rocketa3_hide",1},{"rocketb2_hide",1},{"rocketa2_hide",1},{"rocketb7_hide",1},{"rocketa7_hide",1},{"rocketb1_hide",1},{"rocketa1_hide",1} };
	//		hide[] = { "clan","zasleh","zasleh3","cannon_muzzleflash","light_1_hide","light_2_hide","light_3_hide","zadni svetlo","podsvit pristroju","poskozeni" };
	//		verticalOffset = 3.159;
	//		verticalOffsetWorld = -0.036;
	//		init = "[this, '', []] call bis_fnc_initVehicle";
	//	};
	//	class Components : Components
	//	{
	//		class TransportPylonsComponent
	//		{
	//			uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
	//			class Pylons
	//			{
	//				class PylonRight1
	//				{
	//					attachment = "Splits_PylonMissile_AA_Pelican_x2";
	//					priority = 5;
	//					hardpoints[] = { "Splits_T_Missiles" };
	//					turret[] = {};
	//					UIposition[] = { 0.25,0.1 };
	//				};
	//				class PylonRight2
	//				{
	//					attachment = "Splits_PylonMissile_AGM_Pelican_x2";
	//					priority = 4;
	//					hardpoints[] = { "Splits_T_Missiles" };
	//					turret[] = {};
	//					UIposition[] = { 0.25,0.2 };
	//				};
	//				class PylonRight3
	//				{
	//					attachment = "Splits_PylonMissile_AGM_Bottom_Pelican_x3";
	//					priority = 3;
	//					hardpoints[] = { "Splits_B_Missiles" };
	//					turret[] = {};
	//					UIposition[] = { 0.6,0.1 };
	//				};
	//				class PylonRight4
	//				{
	//					attachment = "Splits_PylonMissile_AGM_Bottom_Pelican_x3";
	//					priority = 2;
	//					hardpoints[] = { "Splits_B_Missiles" };
	//					turret[] = {};
	//					UIposition[] = { 0.6,0.2 };
	//				};
	//				class PylonsLeft1 : PylonRight1
	//				{
	//					UIposition[] = { 0.25,0.5 };
	//					mirroredMissilePos = 1;
	//				};
	//				class PylonsLeft2 : PylonRight2
	//				{
	//					UIposition[] = { 0.25,0.4 };
	//					mirroredMissilePos = 1;
	//				};
	//				class PylonsLeft3 : PylonRight3
	//				{
	//					UIposition[] = { 0.6,0.5 };
	//					mirroredMissilePos = 1;
	//				};
	//				class PylonsLeft4 : PylonRight4
	//				{
	//					UIposition[] = { 0.6,0.4 };
	//					mirroredMissilePos = 1;
	//				};
	//			};
	//			class Presets
	//			{
	//				class Empty
	//				{
	//					displayName = "$STR_empty";
	//					attachment[] = {};
	//				};
	//				class Default
	//				{
	//					displayName = "$STR_vehicle_default";
	//					attachment[] = { "Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2" };
	//				};
	//				class AT
	//				{
	//					displayName = "$STR_A3_cfgmagazines_titan_at_dns";
	//					attachment[] = { "Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2" };
	//				};
	//				class HAT
	//				{
	//					displayName = "$STR_A3_Heavy_AT_preset_displayName";
	//					attachment[] = { "Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2" };
	//				};
	//				class CAS
	//				{
	//					displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
	//					attachment[] = { "Splits_PylonMissile_AA_Pelican_x2","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Bottom_Pelican_x3","Splits_PylonMissile_AGM_Pelican_x2","Splits_PylonMissile_AA_Pelican_x2" };
	//				};
	//			};
	//		};
	//	};
	//	tf_range = 50000;
	//	tf_isolatedAmount = 0.4;
	//	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	//	tf_hasLRradio = 1;
	//	enableRadio = 1;
	//};

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
		faction = "Gladius_Faction";
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
		hiddenSelectionsTextures[] = { "PHVehicles\Textures\Searcher_Drone.paa" };
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
