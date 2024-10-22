class CfgPatches
{
	class BasiliskGear
	{
		author = "Soldner";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Characters_F","OPTRE_Core" };
	};
};
class XtdGearModels
{
	class CfgVehicles
	{
		class Basilisk_Backpacks
		{
			label = "Basilisk Packs";
			author = "Basilisk Mod Team";
			options[] = {"role","squad"};
			class role
			{
				alwaysSelectable = 1;
				label = "Type";
				values[] = {"basic","medic","radio","PRC515","PRC521","gunbagace"};
				class basic
				{
					label = "Basic";
					image = "";
				};
				class medic
				{
					label = "Corpsman";
					image = "";
				};
				class radio
				{
					label = "Radio";
					image = "";
				};
				class PRC515
				{
					label = "515";
					image = "";
				};
				class PRC521
				{
					label = "521";
					image = "";
				};
				class gunbagace
				{
					label = "Gunbag";
					image = "";
				};
			};
			class squad
			{
				alwaysSelectable = 1;
				label = "Squad";
				values[] = {"ilcs","unsc","custom"};
				class ilcs
				{
					label = "ODST";
				};
				class unsc
				{
					label = "Marine";
				};
				class custom
				{
					label = "placeholder";
				};
			};
		};
		class Basilisk_Custom_Backpacks
		{
			label = "Basilisk Custom Packs";
			author = "Basilisk Mod Team";
			options[] = { "role" };
			class role
			{
				alwaysSelectable = 1;
				label = "Owner";
				values[] = { "Holland","Soldner"};
				class Holland
				{
					label = "Holland";
				};
				class Soldner
				{
					label = "Soldner";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgVehicles
	{
		class Basilisk_M56_ILCS
		{
			model = "Basilisk_Backpacks";
			role = "basic";
			squad = "ilcs";
		};
		class Basilisk_M56_ILCS_Corpsman
		{
			model = "Basilisk_Backpacks";
			role = "medic";
			squad = "ilcs";
		};
		class Basilisk_M56_ILCS_Radio
		{
			model = "Basilisk_Backpacks";
			role = "radio";
			squad = "ilcs";
		};
		class Basilisk_ANPRC_515
		{
			model = "Basilisk_Backpacks";
			role = "PRC515";
			squad = "ilcs";
		};
		class Basilisk_ANPRC_521
		{
			model = "Basilisk_Backpacks";
			role = "PRC521";
			squad = "ilcs";
		};
		class Basilisk_M56_ILCS_Gunbag
		{
			model = "Basilisk_Backpacks";
			role = "gunbagace";
			squad = "ilcs";
		};
		class Basilisk_Rucksack
		{
			model = "Basilisk_Backpacks";
			role = "basic";
			squad = "unsc";
		};
		class Basilisk_Rucksack_Medical
		{
			model = "Basilisk_Backpacks";
			role = "medic";
			squad = "unsc";
		};
		class Basilisk_ANPRC_521_Holland {
			model = "Basilisk_Custom_Backpacks";
			role = "Holland";
		};
		class Basilisk_Soldner_Rucksack_Gunbag {
			model = "Basilisk_Custom_Backpacks";
			role = "Soldner";
		};
	};
};

class CfgVehicles
{
	//RTO Bags
	class OPTRE_ANPRC_515;
	class Basilisk_ANPRC_515: OPTRE_ANPRC_515
	{
		author = "Soldner";
		displayName = "Basilisk ILCS AN/PRC-515";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		hiddenSelectionsTextures[] = {"BasiliskGear\data\packs\prc515_CO.paa"};
		maximumLoad = 350;
	};
	class OPTRE_ANPRC_521_green;
	class Basilisk_ANPRC_521: OPTRE_ANPRC_521_green
	{
		author = "Soldner";
		displayName = "[Basilisk] ILCS AN/PRC-521";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"BasiliskGear\data\packs\soft_backpack_co.paa","BasiliskGear\data\packs\prc521_co.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 400;
	};
	class Basilisk_ANPRC_521_Holland: OPTRE_ANPRC_521_green
	{
		author = "Holland";
		displayName = "[Basilisk] Holland's ILCS AN/PRC-521";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"BasiliskGear\data\packs\soft_backpack_co.paa","BasiliskGear\data\packs\holland_prc521_co.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 50000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 500;
	};

	//Marine Rucksack	
	class OPTRE_UNSC_Rucksack;
	class Basilisk_Rucksack: OPTRE_UNSC_Rucksack
	{
		author = "Soldner";
		displayName = "[Basilisk] UNSC Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"BasiliskGear\data\packs\soft_backpack_co.paa"};
	};
	class OPTRE_UNSC_Rucksack_Medic;
	class Basilisk_Rucksack_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		author = "Soldner";
		displayName = "[Basilisk] UNSC Corpsman Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"BasiliskGear\data\packs\soft_backpack_co.paa"};
	};

	//m56
	class MA_M56S_Rucksack;
	class Basilisk_M56_ILCS: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[Basilisk] M56 ILCS Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class Basilisk_M56_ILCS_Corpsman : MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[Basilisk] M56 Corpsman ILCS Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1","camo2","Radio"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\Medical_ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class Basilisk_M56_ILCS_Radio: MA_M56S_Rucksack
	{
		author = "Soldner";
		displayName = "[Basilisk] M56 ILCS Radio Rucksack";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 300;
		mass = 50;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa","MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"};
	};
	class Basilisk_M56_ILCS_Gunbag : Basilisk_M56_ILCS
	{
		_generalMacro = "ace_gunbag_Tan";
		displayName = "[Basilisk] M56 ILCS Gunbag";
		maximumLoad = 250;
		ace_gunbag = 1;
	};
	class Basilisk_Soldner_Rucksack_Gunbag : Basilisk_M56_ILCS_Gunbag
	{
		_generalMacro = "ace_gunbag_Tan";
		displayName = "[Basilisk] M56 ILCS Gunbag (Soldner)";
		hiddenSelections[] = { "camo1","camo2","Radio" };
		hiddenSelectionsTextures[] = { "BasiliskGear\data\packs\Soldner_ODST_Ruck_co.paa" };
	};


	//Scion Conflict Jump pack modification
	/*class Basilisk_JumpPack : OPTRE_UNSC_Rucksack
	{
		author = "Moose (Scion Conflict)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_weapons\backpacks\jetpack.p3d";
		icon = "iconBackpack";
		displayName = "[Basilisk] Jump-pack";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "optre_weapons\backpacks\data\jetpack_co.paa" };
		maximumLoad = 300;
		sc_jumppack = 1;
		sc_particles[] = { {-0.22,-0.25,-0.15},{0.22,-0.25,-0.15} };
	};*/
};