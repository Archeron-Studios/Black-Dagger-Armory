/*
 * Author: Rib / BDA
 * Spawn steerable chute on server, hand off to unit owner for entry.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

if (!isServer) exitWith {
	_this remoteExecCall ["BDA_fnc_harnessParachuteDeploy", 2];
};

params ["_unit"];

[_unit] spawn {
	params ["_unit"];

	if (_unit getVariable ["BDA_harness_chuteActive", false]) exitWith {};

	// Wait for client stash to replicate on dedicated servers
	private _timeout = time + 2;
	waitUntil {
		sleep 0.05;
		(_unit getVariable ["BDA_harness_backpack", []]) isNotEqualTo [] || {time >= _timeout}
	};

	if ((_unit getVariable ["BDA_harness_backpack", []]) isEqualTo []) exitWith {};

	private _hasHarness = backpack _unit isEqualTo "BDA_Naval_Pilot_Harness";
	if (!_hasHarness && {(_unit getVariable ["BDA_harness_backpack", []]) isEqualTo []}) exitWith {};

	_unit setVariable ["BDA_harness_chuteActive", true, true];

	private _pos = ASLToAGL (getPosASL _unit);
	private _chute = createVehicle ["Steerable_Parachute_F", _pos, [], 0, "FLY"];
	_chute setPosATL _pos;

	sleep 0.15;

	if (isNull _unit || {isNull _chute}) exitWith {
		if (!isNull _unit) then {
			_unit setVariable ["BDA_harness_chuteActive", false, true];
		};
		if (!isNull _chute) then {
			deleteVehicle _chute;
		};
	};

	[_unit, _chute] remoteExecCall ["BDA_fnc_harnessParachuteEnterChute", _unit];
};
