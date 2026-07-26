/*
 * Author: Rib / BDA
 * Wait for the pilot to land, then remove the parachute.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Parachute <OBJECT>
 */

params ["_unit", "_chute"];

if (!isServer) exitWith {
	[_unit, _chute] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectLandCleanup", 2];
};

[_unit, _chute] spawn {
	params ["_unit", "_chute"];

	private _timeout = time + 300;

	waitUntil {
		sleep 0.25;

		if (isNull _unit || {!alive _unit}) exitWith {true};

		private _pos = getPosATL _unit;
		private _alt = _pos select 2;
		_alt < 2 && {isTouchingGround _unit || surfaceIsWater _pos} || {time >= _timeout}
	};

	if (!isNull _unit && {!isNull _chute} && {vehicle _unit == _chute}) then {
		[_unit] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectMoveOut", _unit];
		sleep 0.5;
	};

	if (!isNull _chute) then {
		deleteVehicle _chute;
	};

	if (!isNull _unit) then {
		_unit setVariable ["BDA_pelican_ejecting", false, true];
		_unit setVariable ["BDA_pelican_ejectVehicle", nil, true];
		_unit setVariable ["BDA_pelican_ejectChute", nil, true];
		_unit setVariable ["BDA_pelican_chuteDeployed", false, true];
		_unit setVariable ["BDA_pelican_chuteEnterRetries", nil, true];
		_unit setVariable ["BDA_pelican_ejectReady", false, true];
	};
};
