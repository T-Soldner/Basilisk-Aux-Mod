class CfgPatches
{
	class BasiliskUnits
	{
		name = "Basilisk AUX Mod";
		author = "Soldner";
		url = "https://discord.gg/ZpeRJyyddS";
		requiredVersion = 1.6;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder"};
		units[] = {"B_BasiliskFaction_Rifleman_01","B_BasiliskFaction_Corpsman_01","B_BasiliskFaction_AT_Specialist_01","B_BasiliskFaction_Autorifleman_01","B_BasiliskFaction_Engineer_01","B_BasiliskFaction_Squad_Leader_01","B_BasiliskFaction_Marksman_01"};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class B_Sharpshooter_F;
	class B_Sharpshooter_F_OCimport_01: B_Sharpshooter_F
	{
		scope = 0;
		class EventHandlers;
	};
	class B_Sharpshooter_F_OCimport_02: B_Sharpshooter_F_OCimport_01
	{
		class EventHandlers;
		camouflage = 1.5;
		sensitivity = 2.5;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitHands
			{
				material = -1;
				name = "hand_l";
				radius = 0.08;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg: HitLegs
			{
				material = -1;
				name = "leg_l";
				radius = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class B_BasiliskFaction_Rifleman_01: B_Sharpshooter_F_OCimport_02
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "Basilisk_Faction";
		editorCategory = "Basilisk_AUX_EdCat";
		editorSubCategory = "Basilisk_EdSubCat_Garrison";
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"19_UNSC_MA5A","19_UNSC_M6C","OPTRE_Binoculars"};
		respawnWeapons[] = {"19_UNSC_MA5A","19_UNSC_M6C","OPTRE_Binoculars"};
		magazines[] = {"32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE","32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE"};
		respawnMagazines[] = {"32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE","32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE"};
		backpack = "Basilisk_H2A";
		ALiVE_orbatCreator_loadout[] = {{"19_UNSC_MA5A","","19_UNSC_MA5A_LAM","19_UNSC_MA5A_smartlink",{"32Rnd_762x51_MA5",32},{},""},{},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW",{{"FirstAidKit",10}}},{"19th_marine_vest_rifleman",{{"32Rnd_762x51_MA5",12,32},{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_127x40_m6_SAPHE",2,12}}},{"Basilisk_H2A",{{"ACE_surgicalKit",1}}},"Basilisk_HW_Helmet",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
	class B_BasiliskFaction_Corpsman_01: B_BasiliskFaction_Rifleman_01
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Corpsman";
		side = 1;
		faction = "Basilisk_Faction";
		attendant = 1;
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW_Corpsman";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Corpsman_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"19_UNSC_MA5A","19_UNSC_M6C","OPTRE_Binoculars"};
		respawnWeapons[] = {"19_UNSC_MA5A","19_UNSC_M6C","OPTRE_Binoculars"};
		magazines[] = {"32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE","32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE"};
		respawnMagazines[] = {"32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE","32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE"};
		backpack = "Basilisk_H2A";
		ALiVE_orbatCreator_loadout[] = {{"19_UNSC_MA5A","","19_UNSC_MA5A_LAM","19_UNSC_MA5A_smartlink",{"32Rnd_762x51_MA5",32},{},""},{},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW_Corpsman",{{"FirstAidKit",10}}},{"19th_marine_vest_rifleman",{{"32Rnd_762x51_MA5",12,32},{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_127x40_m6_SAPHE",2,12}}},{"Basilisk_H2A",{{"ACE_surgicalKit",1},{"adv_aceCPR_AED",1},{"Medikit",1},{"ACE_salineIV",2},{"ACE_salineIV_500",2}}},"Basilisk_HW_Corpsman_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
	class B_BasiliskFaction_AT_Specialist_01: B_BasiliskFaction_Rifleman_01
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Specialist";
		side = 1;
		faction = "Basilisk_Faction";
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"19_UNSC_MA5A","OPTRE_M41_SSR","19_UNSC_M6C","OPTRE_Binoculars"};
		respawnWeapons[] = {"19_UNSC_MA5A","OPTRE_M41_SSR","19_UNSC_M6C","OPTRE_Binoculars"};
		magazines[] = {"32Rnd_762x51_MA5","OPTRE_M41_Twin_AI","12Rnd_127x40_m6_SAPHE","32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE"};
		respawnMagazines[] = {"32Rnd_762x51_MA5","OPTRE_M41_Twin_AI","12Rnd_127x40_m6_SAPHE","32Rnd_762x51_MA5","12Rnd_127x40_m6_SAPHE"};
		backpack = "Basilisk_H2A";
		ALiVE_orbatCreator_loadout[] = {{"19_UNSC_MA5A","","19_UNSC_MA5A_LAM","19_UNSC_MA5A_smartlink",{"32Rnd_762x51_MA5",32},{},""},{"OPTRE_M41_SSR","","","",{"OPTRE_M41_Twin_AI",2},{},""},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW",{{"FirstAidKit",10}}},{"19th_marine_vest_rifleman",{{"32Rnd_762x51_MA5",12,32},{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_127x40_m6_SAPHE",2,12}}},{"Basilisk_H2A",{{"ACE_surgicalKit",1},{"OPTRE_M41_Twin_AI",3,2}}},"Basilisk_HW_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
	class B_BasiliskFaction_Autorifleman_01: B_BasiliskFaction_Rifleman_01
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		side = 1;
		faction = "Basilisk_Faction";
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"OPTRE_M73","19_UNSC_M6C","OPTRE_Binoculars"};
		respawnWeapons[] = {"OPTRE_M73","19_UNSC_M6C","OPTRE_Binoculars"};
		magazines[] = {"12Rnd_127x40_m6_SAPHE","12Rnd_127x40_m6_SAPHE"};
		respawnMagazines[] = {"12Rnd_127x40_m6_SAPHE","12Rnd_127x40_m6_SAPHE"};
		backpack = "Basilisk_H2A";
		ALiVE_orbatCreator_loadout[] = {{"OPTRE_M73","","OPTRE_M45_Flashlight","OPTRE_M73_SmartLink",{},{},""},{},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW",{{"FirstAidKit",10}}},{"19th_marine_vest_rifleman",{{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_127x40_m6_SAPHE",2,12},{"TCF_200Rnd_95x40_Box_JHP",4,200}}},{"Basilisk_H2A",{{"ACE_surgicalKit",1},{"TCF_200Rnd_95x40_Box_JHP",3,200}}},"Basilisk_HW_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
	class B_BasiliskFaction_Engineer_01: B_BasiliskFaction_Rifleman_01
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		side = 1;
		faction = "Basilisk_Faction";
		engineer = 1;
		canDeactivateMines = 1;
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"19_UNSC_M90","19_UNSC_M6C","OPTRE_Binoculars"};
		respawnWeapons[] = {"19_UNSC_M90","19_UNSC_M6C","OPTRE_Binoculars"};
		magazines[] = {"12Rnd_8Gauge","12Rnd_127x40_m6_SAPHE","12Rnd_8Gauge","12Rnd_127x40_m6_SAPHE"};
		respawnMagazines[] = {"12Rnd_8Gauge","12Rnd_127x40_m6_SAPHE","12Rnd_8Gauge","12Rnd_127x40_m6_SAPHE"};
		backpack = "Basilisk_H2A";
		ALiVE_orbatCreator_loadout[] = {{"19_UNSC_M90","","","",{"12Rnd_8Gauge",12},{},""},{},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW",{{"FirstAidKit",10},{"12Rnd_8Gauge",3,12}}},{"19th_marine_vest_rifleman",{{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_8Gauge",4,12},{"12Rnd_8Gauge_slug",7,12},{"12Rnd_127x40_m6_SAPHE",3,12}}},{"Basilisk_H2A",{{"ACE_surgicalKit",1},{"ToolKit",1}}},"Basilisk_HW_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
	class B_BasiliskFaction_Squad_Leader_01: B_BasiliskFaction_Rifleman_01
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		side = 1;
		faction = "Basilisk_Faction";
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"19_UNSC_br55","19_UNSC_M6C","OPTRE_Smartfinder"};
		respawnWeapons[] = {"19_UNSC_br55","19_UNSC_M6C","OPTRE_Smartfinder"};
		magazines[] = {"36Rnd_95x40_br_55","12Rnd_127x40_m6_SAPHE","Laserbatteries","36Rnd_95x40_br_55","12Rnd_127x40_m6_SAPHE","Laserbatteries"};
		respawnMagazines[] = {"36Rnd_95x40_br_55","12Rnd_127x40_m6_SAPHE","Laserbatteries","36Rnd_95x40_br_55","12Rnd_127x40_m6_SAPHE","Laserbatteries"};
		backpack = "Basilisk_ANPRC_515";
		ALiVE_orbatCreator_loadout[] = {{"19_UNSC_br55","","19_UNSC_BR55_LAM","19_UNSC_br_scope",{"36Rnd_95x40_br_55",36},{},""},{},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW",{{"FirstAidKit",10},{"36Rnd_95x40_br_55",3,36}}},{"19th_marine_vest_rifleman",{{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_127x40_m6_SAPHE",2,12},{"36Rnd_95x40_br_55",12,36}}},{"Basilisk_ANPRC_515",{{"ACE_surgicalKit",1}}},"Basilisk_HW_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
	class B_BasiliskFaction_Marksman_01: B_BasiliskFaction_Rifleman_01
	{
		author = "Soldner";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		side = 1;
		faction = "Basilisk_Faction";
		identityTypes[] = {"NoGlasses"};
		uniformClass = "Basilisk_HW";
		linkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		respawnlinkedItems[] = {"19th_marine_vest_rifleman","Basilisk_HW_Helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"};
		weapons[] = {"19_UNSC_M392","19_UNSC_M6C","OPTRE_Binoculars"};
		respawnWeapons[] = {"19_UNSC_M392","19_UNSC_M6C","OPTRE_Binoculars"};
		magazines[] = {"15Rnd_762x51_M392","12Rnd_127x40_m6_SAPHE","15Rnd_762x51_M392","12Rnd_127x40_m6_SAPHE"};
		respawnMagazines[] = {"15Rnd_762x51_M392","12Rnd_127x40_m6_SAPHE","15Rnd_762x51_M392","12Rnd_127x40_m6_SAPHE"};
		backpack = "Basilisk_H2A";
		ALiVE_orbatCreator_loadout[] = {{"19_UNSC_M392","","19_UNSC_BR55_LAM","19_UNSC_evosd",{"15Rnd_762x51_M392",15},{},"bipod_01_F_blk"},{},{"19_UNSC_M6C","","","",{"12Rnd_127x40_m6_SAPHE",12},{},""},{"Basilisk_HW",{{"FirstAidKit",10},{"15Rnd_762x51_M392",3,15}}},{"19th_marine_vest_rifleman",{{"MA_M9_Frag_Mag",2,1},{"MA_M8_Smoke_White",4,1},{"12Rnd_127x40_m6_SAPHE",2,12},{"15Rnd_762x51_M392_HVAP",15,15}}},{"Basilisk_H2A",{{"ACE_surgicalKit",1}}},"Basilisk_HW_Helmet","",{"OPTRE_Binoculars","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ACE_Altimeter","OPTRE_NVG"}};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};
};
class CfgGroups
{
	class WEST
	{
		class Basilisk_Faction
		{
			name = "Basilisk Garrison";
			class Infantry
			{
				name = "Infantry";
				class b_BasiliskFaction_infantry_sentry
				{
					name = "Sentry";
					side = 1;
					faction = "Basilisk_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_BasiliskFaction_Rifleman_01";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_Rifleman_01";
					};
				};
				class b_BasiliskFaction_infantry_squad
				{
					name = "Squad";
					side = 1;
					faction = "Basilisk_Faction";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "B_BasiliskFaction_Squad_Leader_01";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "B_BasiliskFaction_Corpsman_01";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_AT_Specialist_01";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_Autorifleman_01";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_Engineer_01";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_Marksman_01";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_Rifleman_01";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "B_BasiliskFaction_Rifleman_01";
					};
				};
			};
		};
	};
};
