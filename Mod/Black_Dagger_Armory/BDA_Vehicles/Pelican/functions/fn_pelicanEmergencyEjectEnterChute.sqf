/*
 * Author: Rib / BDA
 * Client-local: enter spawned steerable parachute.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Parachute <OBJECT>
 */

params ["_unit", ["_chute", objNull, [objNull]]];

if (isNull _unit) exitWith {};

if (isNull _chute) then {
	_chute = _unit getVariable ["BDA_pelican_ejectChute", objNull];
};

if (isNull _chute) exitWith {};

if (!local _unit) exitWith {
	[_unit, _chute] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectEnterChute", _unit];
};

[_unit, _chute] spawn {
	params ["_unit", "_chute"];

	_unit allowDamage false;

	private _attempts = 0;
	while {vehicle _unit != _chute && {_attempts < 40}} do {
		_unit moveInDriver _chute;

		if (vehicle _unit != _chute) then {
			_unit action ["GetInDriver", _chute];
		};

		sleep 0.1;
		_attempts = _attempts + 1;
	};

	if (vehicle _unit != _chute) exitWith {
		private _retries = _unit getVariable ["BDA_pelican_chuteEnterRetries", 0];

		if (!isNull _chute) then {
			[_chute] remoteExecCall ["deleteVehicle", 2];
		};

		_unit setVariable ["BDA_pelican_ejectChute", nil, true];

		if (_retries < 2) then {
			_unit setVariable ["BDA_pelican_chuteEnterRetries", _retries + 1, true];
			_unit setVariable ["BDA_pelican_chuteDeployed", false, true];
			[_unit] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectDeployChute", 2];
			diag_log format ["[BDA] Pelican eject - chute entry failed, retry %1/2", _retries + 1];
		} else {
			_unit allowDamage true;
			_unit setVariable ["BDA_pelican_ejecting", false, true];
			_unit setVariable ["BDA_pelican_chuteEnterRetries", nil, true];
			diag_log "[BDA] Pelican eject failed - could not move pilot into parachute";
		};
	};

	_unit setVariable ["BDA_pelican_chuteEnterRetries", nil, true];

	private _timeout = time + 8;
	waitUntil {
		sleep 0.1;
		private _speed = vectorMagnitude velocity _chute;
		_speed < 12 || {time >= _timeout}
	};

	sleep 1;
	_unit allowDamage true;

	[_unit, _chute] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectLandCleanup", 2];
};
