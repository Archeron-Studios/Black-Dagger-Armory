class CfgPatches {
	class BDA_Accessories {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"DMNS_Supplies_F_Bags",
			"NSM_patch_end",
			"OPTRE_Weapons_Backpacks",
			"cba_main"
		};
		units[]={};
		weapons[]={};
		vehicles[]={
			"BDA_S13_Jumppack",
			"BDA_S13_Jumppack_RTO",
			"BDA_S13_Jumppack_Medic",
			"BDA_S13_Jumppack_Heavy",
			"BDA_Rucksack_B",
			"BDA_Rucksack_B_Medical",
			"BDA_Rucksack_B_Heavy",
			"BDA_Rucksack_B_Super_Heavy",
			"BDA_Rucksack_B_SL",
			"BDA_COMM_Uplink_Module",
			"BDA_Rucksack_B_TEST",
			"BDA_Naval_Belt_R",
			"BDA_Naval_Pilot_Harness"
		};
		requiredVersion=0.1;
	};
};
class CfgVehicles {
	class B_Bergen_Base;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class NSM_neutral_XD_1_Backpack;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base {
		/*extern*/ class assembleInfo;
	};

	class BDA_Rucksack_B: B_Bergen_Base {
		dlc="BDA";
		author="Schlopp";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
		displayName="ILCS Rucksack";
		model="\OPTRE_weapons\backpacks\ODST_ruck.p3d";
		vehicleClass="OPTRE_UNSC_Backpack_class";
		allowedSlots[]={901};
		maximumLoad=400;
		mass=40;
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Accessories\data\BDA_Rucksack_B_CO.paa"
		};
		transportMaxWeapons=10;
		transportMaxMagazines=100;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class BDA_Rucksack_B_Medical: BDA_Rucksack_B {
		author="Schlopp";
		displayName="ILCS Backpack (Medic)";
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy"
		};
	};
	class BDA_Rucksack_B_Heavy: BDA_Rucksack_B {
		author="Schlopp";
		maximumLoad=550;
		mass=50;
		displayName="ILCS Rucksack (Heavy)";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
	};
	class BDA_Rucksack_B_Super_Heavy: BDA_Rucksack_B {
		author="Rib";
		maximumLoad=800;
		mass=60;
		displayName="ILCS Rucksack (Super Heavy)";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
	};
	class BDA_Rucksack_B_SL: BDA_Rucksack_B {
		displayName="ILCS Rucksack UL/CNM";
		mass = 50;
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy",
			"biofoam"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Accessories\data\BDA_Rucksack_B_CO.paa"
		};
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};

	class BDA_COMM_Uplink_Module: BDA_Rucksack_B {
		picture="\OPTRE_UNSC_Units\Army\NVGs\HUL\V_UL";
		displayName="UNSC Communications Uplink Module";
		model="\OPTRE_UNSC_Units\Army\NVGs\HUL\V_UL";
		maximumLoad=400;
		mass=40;
		hiddenSelections[]= {
			"camo1"
		};
		hiddenSelectionsTextures[]={};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	class BDA_Naval_Belt_R: BDA_Rucksack_B {
		picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		displayName="NAVCOM Carrier Belt";
		model="\A3\Characters_F\BLUFOR\equip_b_belt";
		maximumLoad=400;
		mass=10;
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "BDA_Armor\BDA_Vests\data\BDA_Belt_NAVCOM_CO.paa" };
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=30000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	// Bag_Base only — no B_Parachute / backpackSimulation (keeps vanilla get out/eject; our scripts deploy the chute)
	class BDA_Naval_Pilot_Harness: Bag_Base {
		dlc = "BDA";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Rib";
		isBackpack = 1;
		displayName = "NAVCOM Pilot Harness";
		picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperLightHarness_blk_F_ca.paa";
		model = "\A3\Supplies_F_Exp\Bags\B_ViperLightHarness_F.p3d";
		maximumLoad = 400;
		mass = 15;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Accessories\Data\BDA_Pilot_Harness_CO.paa"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};

	class BDA_S13_Jumppack: NSM_neutral_XD_1_Backpack {
		dlc = "BDA";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Rib, Namenai & OPTRE";
		displayName = "S13 SOLA Jumppack";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
        maximumload = 400;
		mass = 75;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Accessories\data\BDA_jetpack_S13_SOLA_Outlaw_co.paa"};
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_energy_capacity = 120;
		NSM_jumppack_recharge = 6;
		NSM_jumppack_jump_type[] = {
			{"Forward Jump",{
					12, //forward v m/s
					20, //vert v m/s
					45, //cost energy
					0, //angle
					0, //directional bool
					0 //can prone jump bool
				}},
			{"Short Jump",{25,7,25,0,1,1}},
			{"High Jump",{5,35,50,0,0,0}}	//custom - doesn't work... FOR now
		};
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
	};
	class BDA_S13_Jumppack_On: BDA_S13_Jumppack {
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_vehicles\pelican\data\bolt_blue_ca.paa",
			"BDA_Armor\BDA_Accessories\data\BDA_jetpack_S13_SOLA_co.paa"
		};
	};

	class BDA_S13_Jumppack_DEV: BDA_S13_Jumppack {
		scopeArsenal = 1;
		scopeCurator = 1;
		displayName = "S13 SOLA Jumppack (DEV)";
        maximumload = 500;
        hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Accessories\data\BDA_jetpack_S13_SOLA_co.paa"};
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_energy_capacity = 120;
		NSM_jumppack_recharge = 10;
		NSM_jumppack_jump_type[] = {
			{"Forward Jump",{
					12, //forward v m/s
					20, //vert v m/s
					50, //cost energy
					0, //angle
					0, //directional bool
					1 //can prone jump bool
				}},
			{"Short Jump",{25,7,20,0,1,1}},
			{"High Jump",{5,35,50,0,0,1}}	//custom - doesn't work... FOR now
		};
	};

	class BDA_S13_Jumppack_Heavy: BDA_S13_Jumppack {
		displayName = "S13 SOLA Jumppack (Heavy)";
        maximumload = 550;
		mass = 100;
	};
	class BDA_S13_Jumppack_Heavy_On: BDA_S13_Jumppack_On {};

	class BDA_S13_Jumppack_Medic: BDA_S13_Jumppack {
		displayName = "S13 SOLA Jumppack (Medic)";
		hiddenSelectionsTextures[]={"BDA_Armor\BDA_Accessories\data\BDA_jetpack_S13_SOLA_MED_CO.paa"};
	};
	class BDA_S13_Jumppack_Medic_On: BDA_S13_Jumppack_On {};

	class BDA_S13_Jumppack_RTO: BDA_S13_Jumppack {
		displayName = "S13 SOLA Jumppack RTO";
		hiddenSelectionsTextures[]={"BDA_Armor\BDA_Accessories\data\BDA_jetpack_S13_SOLA_CMD_CO.paa"};
		maximumLoad = 400;
		mass = 85;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};
	class BDA_S13_Jumppack_RTO_On: BDA_S13_Jumppack_On {
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
	};

	class BDA_UAV_Backpack: Weapon_Bag_Base {
		dlc="BDA";
		scope = 1;
		scopeCurator = 1;
		_generalMacro="BDA_UAV_Backpack";
		author="Rib";
		displayName="(WIP) UAV MQ94 Drone Bag";
		maximumLoad=150;
		mass = 300;
		faction="B_UNSCODST";
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_C_IDAP_UAV_ca";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		hiddenSelectionTextures[]={
			"BDA_Armor\BDA_Accessories\data\BDA_UAV_Bacpack_CO.paa"
		};
		class assembleInfo: assembleInfo {
			base = "";
			displayName = "Assemble MQ-94 Drone";
			assembleTo = "DMNS_UAV_01_F";
		};
	};
};

class CfgRemoteExec {
	class Functions {
		mode = 1;
		jip = 0;
		class BDA_fnc_harnessParachuteDeploy { allowedTargets = 2; };
		class BDA_fnc_harnessParachuteEnterChute { allowedTargets = 1; };
		class BDA_fnc_harnessParachuteRestore { allowedTargets = 1; };
	};
};

class CfgFunctions {
	class BDA {
		tag = "BDA";
		class HarnessParachute {
			file = "\BDA_Armor\BDA_Accessories\functions";
			class initHarnessParachute { postInit = 1; };
			class harnessParachuteDeploy {};
			class harnessParachuteEnterChute {};
			class harnessParachuteMonitor {};
			class harnessParachuteRestore {};
			class harnessParachuteStash {};
			class harnessParachuteCanOpen {};
			class harnessParachuteAddAction {};
			class harnessParachuteOpenFromAction {};
			class harnessParachuteAddVehicleActions {};
			class harnessParachuteRemoveVehicleActions {};
		};
	};
};

class cfgMods
{
	author="Rib";
	timepacked="3001250210";
};
