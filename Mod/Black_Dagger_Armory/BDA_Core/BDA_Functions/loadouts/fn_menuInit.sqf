private _defaultLoadouts = ["BDA_Rifleman", "BDA_AutoRifleman", "BDA_Sniper", "BDA_EOD", "BDA_Demolitions", "BDA_Grenadier", "BDA_RktJky", "BDA_Breacher"];

createDialog "BDA_LoadoutDiag";

disableSerialization;

private _display = findDisplay 42000;
private _picture = _display displayCtrl 42005;
private _weapon = _display displayCtrl 42002;

// ------------------------------------- Getting all Loadouts

lbClear 42001;

{
	private _getFrName = getText(configFile >> "CfgWallaceLoad" >> _x >> "name");
	private _getData = getText(configFile >> "CfgWallaceLoad" >> _x >> "data");

	lbAdd [42001, _getFrName];
	lbSetData [42001, lbSize 42001 - 1, _x];
} forEach _defaultLoadouts;

lbSetCurSel [42001, 0];

// ------------------------------------- Getting all Launcher

lbClear 42003;

private _allowedLaunch = ["NO LAUNCHER", "OPTRE_M41_SSR"];

{
	private _getRealName = getText(configFile >> "CfgWeapons" >> _x >> "displayname");

	lbAdd [42003, _getRealName];
	lbSetData [42003, lbSize 42003 - 1, _x];
} forEach _allowedLaunch;

lbSetCurSel [42003, 0];

// ------------------------------------- Getting all Squads

lbClear 42006;

private _squadLists = ["Default", "1st CMD", "1-1", "1-2", "1-3", "1-4", "2nd CMD", "2-1", "2-2", "2-3"];

{
	lbAdd [42006, _x];
	lbSetData [42006, lbSize 42006 - 1, _x];
} forEach _squadLists;

lbSetCurSel [42006, 0];
