_getIndex = lbCurSel 42001;
_getSel = lbData [42001, _getIndex]; 

_getWeaponIndex = lbCurSel 42002;
_getSelWeapon = lbData [42002, _getWeaponIndex]; 

_getLauncherIndex = lbCurSel 42003;
_getSelLauncher = lbData [42003, _getLauncherIndex]; 

_getUniIndex = lbCurSel 42006;
_getSelUni = lbData [42006, _getUniIndex]; 

removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "BDA_Uniform_B_SL";

// Role determines the vest family; squad selection determines the P/S variant suffix.
private _vestBase = switch (_getSel) do {
	case "BDA_AutoRifleman": { "BDA_Armor_AR" };
	case "BDA_Sniper": { "BDA_Armor_SN" };
	case "BDA_EOD": { "BDA_Armor_DM" };
	case "BDA_Demolitions": { "BDA_Armor_DM" };
	default { "BDA_Armor_RF" };
};

private _squadSuffix = switch (_getSelUni) do {
	case "1st CMD": { "_P1" };
	case "1-1": { "_S1" };
	case "1-2": { "_S2" };
	case "1-3": { "_S3" };
	case "1-4": { "_S4" };
	case "2nd CMD": { "_P2" };
	case "2-1": { "_S5" };
	case "2-2": { "_S6" };
	case "2-3": { "_S7" };
	default { "" };
};

player addVest (_vestBase + _squadSuffix);
player addHeadgear ("BDA_CH252D_Helmet" + _squadSuffix);

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player linkItem "OPTRE_NVG";

// Adding Secondary
player addWeapon "OPTRE_M6C";
player addHandgunItem "OPTRE_M6C_compensator";
player addHandgunItem "OPTRE_M6C_Laser";
player addHandgunItem "OPTRE_M6C_Scope";
player addHandgunItem "TCF_12Rnd_127x40_Mag_JHP";
for "_i" from 1 to 2 do {player addItemToUniform "TCF_12Rnd_127x40_Mag_JHP";};
player addWeapon "OPTRE_Binoculars";

if(_getSel isEqualTo "BDA_Rifleman") then 
{
	player addBackpack "BDA_Rucksack_B";
	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_IR_Strobe_Item";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
};
if(_getSel isEqualTo "BDA_AutoRifleman") then 
{
	player addBackpack "BDA_Rucksack_B";

	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "ACE_IR_Strobe_Item";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
};
if(_getSel isEqualTo "BDA_Sniper") then 
{
	
	removeGoggles player;
	player addBackpack "BDA_Rucksack_B";
	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_IR_Strobe_Item";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ACE_Tripod";
	player addItemToBackpack "ItemcTabHCam";
	player linkItem "OPTRE_NVG_MVI_UL";
};
if(_getSel isEqualTo "BDA_EOD") then 
{
	player addBackpack "BDA_Rucksack_B_Heavy";

	comment "Add items to containers";
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	player addItemToVest "ACE_IR_Strobe_Item";
	for "_i" from 1 to 3 do {player addItemToVest "ACE_CableTie";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "MineDetector";
	player addItemToBackpack "ItemcTabHCam";
	player addItemToBackpack "ACE_M26_Clacker";
	player addItemToBackpack "ACE_DefusalKit";
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_blue";};
	for "_i" from 1 to 20 do {player addItemToBackpack "ace_marker_flags_red";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_white";};
	for "_i" from 1 to 3 do {player addItemToBackpack "APERSMineDispenser_Mag";};
	for "_i" from 1 to 2 do {player addItemToBackpack "ATMine_Range_Mag";};
};
if(_getSel isEqualTo "BDA_Demolitions") then 
{
	player addBackpack "BDA_Rucksack_B_Heavy";

	comment "Add items to containers";
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	player addItemToVest "ACE_IR_Strobe_Item";
	for "_i" from 1 to 3 do {player addItemToVest "ACE_CableTie";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "MineDetector";
	player addItemToBackpack "ItemcTabHCam";
	player addItemToBackpack "ACE_M26_Clacker";
	player addItemToBackpack "ACE_DefusalKit";
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_white";};
	for "_i" from 1 to 20 do {player addItemToBackpack "ace_marker_flags_red";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ace_marker_flags_blue";};
	for "_i" from 1 to 4 do {player addItemToBackpack "C7_Remote_Mag";};
	for "_i" from 1 to 2 do {player addItemToBackpack "C12_Remote_Mag";};
};
if(_getSel isEqualTo "BDA_Grenadier") then 
{
	player addBackpack "BDA_Rucksack_B";
	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	player addItemToUniform "ACE_EntrenchingTool";
	player addItemToUniform "ACE_IR_Strobe_Item";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	player addItemToVest "ACE_HuntIR_monitor";
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
	for "_i" from 1 to 25 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_HuntIR_M203";};
	for "_i" from 1 to 6 do {player addItemToBackpack "OPTRE_1Rnd_Smoke_Grenade_shell";};
	for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_1Rnd_SmokeBlue_Grenade_shell";};
	for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_1Rnd_SmokeRed_Grenade_shell";};
	for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_1Rnd_SmokePurple_Grenade_shell";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_white";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_red";};
	for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_green";};
};
if(_getSel isEqualTo "BDA_RktJky") then 
{
	player addBackpack "BDA_Rucksack_B_Heavy";

	comment "Add items to containers";
	for "_i" from 1 to 6 do {player addItemToUniform "ACE_CableTie";};
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_IR_Strobe_Item";};
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	player addItemToVest "ACE_painkillers";
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToBackpack "ItemcTabHCam";
};
if(_getSel isEqualTo "BDA_Breacher") then 
{
	player addBackpack "BDA_Rucksack_B";

	comment "Add items to containers";
	for "_i" from 1 to 12 do {player addItemToUniform "ACE_CableTie";};
	for "_i" from 1 to 3 do {player addItemToUniform "ACE_IR_Strobe_Item";};
	player addItemToUniform "ACE_EntrenchingTool";
	for "_i" from 1 to 10 do {player addItemToVest "ACE_fieldDressing";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_elasticBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_packingBandage";};
	for "_i" from 1 to 10 do {player addItemToVest "ACE_quikclot";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_epinephrine";};
	for "_i" from 1 to 2 do {player addItemToVest "ACE_splint";};
	for "_i" from 1 to 4 do {player addItemToVest "ACE_tourniquet";};
	for "_i" from 1 to 4 do {player addItemToVest "OPTRE_M9_Frag";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke";};
	for "_i" from 1 to 2 do {player addItemToVest "OPTRE_M2_Smoke_Blue";};
	player addItemToVest "ACE_painkillers";
	player addItemToBackpack "ItemcTabHCam";
	player addItemToBackpack "ACE_wirecutter";
	player addItemToBackpack "OPTRE_MA5B";
	for "_i" from 1 to 8 do {player addItemToBackpack "TCF_60Rnd_762x51_Mag_JHP";};
	player addItemToBackpack "TCF_12Rnd_8Gauge_Beanbag";
};

switch (_getSelWeapon) do {
	// base template case "OPTRE_MA5BGL": { };
	case "OPTRE_MA5B": { player addWeapon "OPTRE_MA5B"; player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag"; for "_i" from 1 to 6 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";}; for "_i" from 1 to 2 do {player addItemToBackpack "TCF_60Rnd_762x51_Mag_JHP";}; };
	case "OPTRE_BR55HB_Grey": { player addWeapon "OPTRE_BR55HB_Grey"; player addPrimaryWeaponItem "OPTRE_36Rnd_95x40_Mag"; for "_i" from 1 to 12 do {player addItemToBackpack "OPTRE_36Rnd_95x40_Mag";}; };
	case "OPTRE_MA5BGL": {player addWeapon "OPTRE_MA5BGL"; player addPrimaryWeaponItem "OPTRE_60Rnd_762x51_Mag"; for "_i" from 1 to 8 do {player addItemToBackpack "OPTRE_60Rnd_762x51_Mag";};};
	case "OPTRE_M392_DMR": {player addWeapon "OPTRE_M392_DMR"; player addPrimaryWeaponItem "OPTRE_15Rnd_762x51_Mag"; for "_i" from 1 to 15 do {player addItemToBackpack "OPTRE_15Rnd_762x51_Mag";};};
	case "OPTRE_M45": {player addWeapon "OPTRE_M45"; player addPrimaryWeaponItem "OPTRE_6Rnd_8Gauge_Slugs"; for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_6Rnd_8Gauge_Slugs";}; for "_i" from 1 to 5 do {player addItemToBackpack "OPTRE_6Rnd_8Gauge_Pellets";};};
	case "OPTRE_M7": {player addWeapon "OPTRE_M7"; player addPrimaryWeaponItem "OPTRE_M7_silencer"; player addPrimaryWeaponItem "OPTRE_M7_Laser"; player addPrimaryWeaponItem "OPTRE_M7_Sight"; player addPrimaryWeaponItem "OPTRE_60Rnd_5x23mm_Mag"; for "_i" from 1 to 12 do {player addItemToBackpack "OPTRE_60Rnd_5x23mm_Mag";};};
	case "OPTRE_M247": {player addWeapon "OPTRE_M247"; player addPrimaryWeaponItem "OPTRE_400Rnd_762x51_Box_Tracer"; for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_400Rnd_762x51_Box_Tracer";};};
	case "OPTRE_SRS99D": {player addWeapon "OPTRE_SRS99D"; player addPrimaryWeaponItem "OPTRE_SRS99_Scope"; player addPrimaryWeaponItem "OPTRE_4Rnd_145x114_APFSDS_Mag"; for "_i" from 1 to 12 do {player addItemToBackpack "OPTRE_4Rnd_145x114_APFSDS_Mag";};};
	case "OPTRE_M73": {player addWeapon "OPTRE_M73"; player addPrimaryWeaponItem "OPTRE_200Rnd_95x40_Box"; for "_i" from 1 to 5 do {player addItemToBackpack "OPTRE_200Rnd_95x40_Box";};};
	case "OPTRE_M319N": {player addWeapon "OPTRE_M319N"; player addPrimaryWeaponItem "3Rnd_HE_Grenade_shell"; for "_i" from 1 to 8 do {player addItemToBackpack "3Rnd_HE_Grenade_shell";}; for "_i" from 1 to 5 do {player addItemToBackpack "ACE_40mm_Flare_white";}; for "_i" from 1 to 5 do {player addItemToBackpack "ACE_HuntIR_M203";}; for "_i" from 1 to 6 do {player addItemToBackpack "OPTRE_1Rnd_Smoke_Grenade_shell";}; for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_1Rnd_SmokeRed_Grenade_shell";}; for "_i" from 1 to 4 do {player addItemToBackpack "OPTRE_1Rnd_SmokeBlue_Grenade_shell";}; for "_i" from 1 to 8 do {player addItemToBackpack "OPTRE_36Rnd_95x40_Mag_Tracer";}; };
	case "OPTRE_M90A": {player addWeapon "OPTRE_M90A"; player addPrimaryWeaponItem "OPTRE_12Rnd_8Gauge_Slugs"; for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_12Rnd_8Gauge_Slugs";}; player addItemToBackpack "TCF_12Rnd_8Gauge_Beanbag"; };
	default { };
};

switch (_getSelLauncher) do {
	// base template case "OPTRE_MA5BGL": { };
	case "NO LAUNCHER": { };
	case "OPTRE_M41_SSR": { player addWeapon "OPTRE_M41_SSR"; player addPrimaryWeaponItem "OPTRE_M41_Twin_HEAT_SACLOS"; for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_M41_Twin_HEAT_SACLOS";}; for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_M41_Twin_HEAT_G"}; };
	case "OPTRE_BR55HB_Grey": { player addWeapon "OPTRE_BR55HB_Grey"; player addPrimaryWeaponItem "OPTRE_36Rnd_95x40_Mag"; player addItemToBackpack "OPTRE_M41_Twin_HEAT"; for "_i" from 1 to 2 do {player addItemToBackpack "OPTRE_M41_Twin_HEAT_G";}; };
	default { };
};