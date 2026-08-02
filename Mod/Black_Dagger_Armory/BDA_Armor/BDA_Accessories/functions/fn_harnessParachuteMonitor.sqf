/*
 * Author: Rib / BDA
 * Wait for landing, clean up chute, restore harness with stashed contents.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Parachute <OBJECT>
 * 2: Monitor id <NUMBER>
 */

params ["_unit", "_chute", "_monitorId"];

private _timeout = time + 300;

waitUntil {
	sleep 0.25;
	private _pos = getPosATL _unit;
	private _alt = _pos select 2;
	isNull _unit || {!alive _unit} || {
		_alt < 2 && {isTouchingGround _unit || surfaceIsWater _pos}
	} || {time >= _timeout}
};

if (_unit getVariable ["BDA_harness_monitorId", -1] != _monitorId) exitWith {};

if (isNull _unit || {!alive _unit}) exitWith {
	if (!isNull _chute) then {
		[_chute] remoteExecCall ["deleteVehicle", 2];
	};
	if (!isNull _unit) then {
		_unit setVariable ["BDA_harness_chuteActive", false, true];
	};
};

if (vehicle _unit isEqualTo _chute) then {
	moveOut _unit;
};

if (!isNull _chute) then {
	[_chute] remoteExecCall ["deleteVehicle", 2];
};

if (local _unit) then {
	[_unit] call BDA_fnc_harnessParachuteRestore;
} else {
	[_unit] remoteExecCall ["BDA_fnc_harnessParachuteRestore", _unit];
};

_unit setVariable ["BDA_harness_chuteActive", false, true];
