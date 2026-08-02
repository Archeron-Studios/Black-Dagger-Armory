/*
 * Author: Rib / BDA
 * Put the NAVCOM harness back on the unit with the stashed backpack contents.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

if (!local _unit) exitWith {
	[_unit] remoteExecCall ["BDA_fnc_harnessParachuteRestore", _unit];
};

private _backpack = _unit getVariable ["BDA_harness_backpack", []];
if (_backpack isEqualTo []) exitWith {};

private _class = _backpack param [0, "BDA_Naval_Pilot_Harness"];

if (backpack _unit isNotEqualTo _class) then {
	if (backpack _unit isNotEqualTo "") then {
		removeBackpack _unit;
	};
	_unit addBackpackGlobal _class;
};

private _container = backpackContainer _unit;

if (!isNull _container) then {
	{
		_x params ["_item", "_count"];
		_container addItemCargoGlobal [_item, _count];
	} forEach +(_backpack param [1, []]);

	{
		_x params ["_mag", "_count"];
		_container addMagazineCargoGlobal [_mag, _count];
	} forEach +(_backpack param [2, []]);

	{
		_x params ["_item", "_count"];
		_container addItemCargoGlobal [_item, _count];
	} forEach +(_backpack param [3, []]);
};

private _headgear = _unit getVariable ["BDA_harness_headgear", ""];
if (_headgear isNotEqualTo "" && {headgear _unit isEqualTo ""}) then {
	_unit addHeadgear _headgear;
};

_unit setVariable ["BDA_harness_backpack", nil, true];
_unit setVariable ["BDA_harness_headgear", nil, true];

if (hasInterface && {_unit isEqualTo player}) then {
	[_unit] call BDA_fnc_harnessParachuteAddAction;
};
