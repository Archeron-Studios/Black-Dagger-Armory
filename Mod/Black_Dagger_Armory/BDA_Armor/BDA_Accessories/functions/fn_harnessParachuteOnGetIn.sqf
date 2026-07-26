/*
 * Author: Rib / BDA
 * Normalizes CBA GetIn params (Air category vs vehicle class use different argument order).
 *
 * Arguments:
 * 0: Unit or vehicle <OBJECT>
 * 1: Role <STRING>
 * 2: Vehicle or unit <OBJECT>
 */

params ["_arg0", "_role", "_arg2"];

private _unit = if (_arg0 isKindOf "Man") then {_arg0} else {_arg2};
private _vehicle = if (_arg0 isKindOf "Man") then {_arg2} else {_arg0};

if (isNull _unit || {isNull _vehicle}) exitWith {};
if !(_unit isKindOf "Man") exitWith {};
if (!local _unit) exitWith {};
if (backpack _unit isNotEqualTo "BDA_Naval_Pilot_Harness") exitWith {};

[_vehicle, _unit] call BDA_fnc_harnessParachuteAddVehicleActions;
