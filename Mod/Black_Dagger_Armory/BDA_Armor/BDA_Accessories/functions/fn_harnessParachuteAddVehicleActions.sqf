/*
 * Author: Rib / BDA
 * Backup Get Out / Eject actions that call vanilla engine actions.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 */

params ["_vehicle", "_unit"];

if (!local _unit) exitWith {};

[_vehicle] call BDA_fnc_harnessParachuteRemoveVehicleActions;

private _getOutId = _vehicle addAction [
	"<t color='#E8E8E8'>Get Out</t>",
	{
		params ["_target", "_caller"];
		_caller action ["GetOut", _target];
	},
	nil,
	0,
	false,
	true,
	"",
	"_caller in crew _target && {(!([_target] call BDA_fnc_harnessParachuteIsPelican)) || {((getPosATL _target) select 2) < 3 || {isTouchingGround _target} || {vectorMagnitude velocity _target < 8}}}",
	5
];

private _isPelican = [_vehicle] call BDA_fnc_harnessParachuteIsPelican;

private _ejectId = _vehicle addAction [
	if (_isPelican) then {"<t color='#FE9A2E'>Emergency Eject</t>"} else {"<t color='#E8E8E8'>Eject</t>"},
	{
		params ["_target", "_caller"];

		if ([_target] call BDA_fnc_harnessParachuteIsPelican) then {
			if (!isNil "BDA_fnc_pelicanEmergencyEject") then {
				[_target, _caller] call BDA_fnc_pelicanEmergencyEject;
			};
		} else {
			_caller action ["Eject", _target];
		};
	},
	nil,
	0,
	false,
	true,
	"",
	"_caller in crew _target",
	5
];

_vehicle setVariable ["BDA_harness_getout_actionId", _getOutId];
_vehicle setVariable ["BDA_harness_eject_actionId", _ejectId];
