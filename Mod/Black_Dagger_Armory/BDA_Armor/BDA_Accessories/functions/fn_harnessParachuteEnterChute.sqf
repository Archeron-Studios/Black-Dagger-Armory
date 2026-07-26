/*
 * Author: Rib / BDA
 * Client-local: remove harness and enter the server-spawned parachute.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Parachute <OBJECT>
 */

params ["_unit", "_chute"];

if (!local _unit) exitWith {
	[_unit, _chute] remoteExecCall ["BDA_fnc_harnessParachuteEnterChute", _unit];
};

[_unit, _chute] spawn {
	params ["_unit", "_chute"];

	if (isNull _unit || {isNull _chute}) exitWith {
		if (!isNull _unit) then {
			_unit setVariable ["BDA_harness_chuteActive", false, true];
		};
	};

	if (!isNull backpackContainer _unit) then {
		removeBackpack _unit;
	};

	private _attempts = 0;

	while {vehicle _unit != _chute && {_attempts < 30}} do {
		_unit moveInDriver _chute;
		sleep 0.1;
		_attempts = _attempts + 1;
	};

	if (vehicle _unit != _chute) exitWith {
		[_chute] remoteExecCall ["deleteVehicle", 2];
		_unit setVariable ["BDA_harness_chuteActive", false, true];
	};

	_unit setVariable ["BDA_harness_monitorId", (_unit getVariable ["BDA_harness_monitorId", 0]) + 1, false];
	private _monitorId = _unit getVariable "BDA_harness_monitorId";

	if !(_unit getVariable ["BDA_harness_chuteActive", false]) then {
		_unit setVariable ["BDA_harness_chuteActive", true, true];
	};

	[_unit, _chute, _monitorId] spawn BDA_fnc_harnessParachuteMonitor;
};
