private _getIndex = lbCurSel 42001;
if (_getIndex < 0) exitWith {};

private _getSel = lbData [42001, _getIndex];
if (_getSel isEqualTo "") exitWith {};

ctrlShow [42004, false];
ctrlShow [42003, false];

switch (_getSel) do {
	case "BDA_Rifleman": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\rifle.paa"]; };
	case "BDA_AutoRifleman": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\auto.paa"]; };
	case "BDA_Sniper": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\sniper.paa"]; };
	case "BDA_EOD": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\demo.paa"]; };
	case "BDA_Demolitions": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\demo.paa"]; };
	case "BDA_Grenadier": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\gren.paa"]; };
	case "BDA_RktJky": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\RkyJky.paa"]; ctrlShow [42003, true]; };
	case "BDA_Breacher": { ctrlSetText [42005, "BDA_Core\BDA_Functions\loadouts\data\sniper.paa"]; };
	default { };
};

// ------------------------------------- Getting all Weapons according to loadouts

lbClear 42002;

private _allowedWeapons = switch (_getSel) do {
	case "BDA_Rifleman": { ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
	case "BDA_AutoRifleman": { ["OPTRE_M73", "OPTRE_M247"] };
	case "BDA_Sniper": { ["OPTRE_SRS99D", "OPTRE_M392_DMR"] };
	case "BDA_EOD": { ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
	case "BDA_Demolitions": { ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
	case "BDA_Grenadier": { ["OPTRE_MA5BGL", "OPTRE_M319N", "OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
	case "BDA_RktJky": { ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
	case "BDA_Breacher": { ["OPTRE_M90A", "OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
	default { ["OPTRE_MA5B", "OPTRE_BR55HB_Grey", "OPTRE_M392_DMR", "OPTRE_M45", "OPTRE_M7"] };
};

{
	private _getRealName = getText(configFile >> "CfgWeapons" >> _x >> "displayname");
	private _getIcon = getText(configFile >> "CfgWeapons" >> _x >> "picture");

	lbAdd [42002, _getRealName];
	lbSetData [42002, lbSize 42002 - 1, _x];
	lbSetPicture[42002, lbSize 42002 - 1, _getIcon];
	lbSetPictureColor[42002, lbSize 42002 - 1, [1,1,1,1]];
} forEach _allowedWeapons;

lbSetCurSel [42002, 0];
