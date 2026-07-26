/*
 * Author: Rib / BDA
 * Watch freefall and trigger scripted parachute deployment.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

if (!isServer) exitWith {
	[_unit] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectMonitor", 2];
};

if (isNull _unit) exitWith {};

[_unit] spawn {
	params ["_unit"];

	private _launchTime = time;
	private _minFlightTime = _launchTime + 1.25;
	private _timeout = time + 120;

	waitUntil {
		sleep 0.1;

		if (_unit getVariable ["BDA_pelican_chuteDeployed", false]) exitWith {true};
		if (time >= _timeout) exitWith {true};

		private _altASL = (getPosASL _unit) select 2;
		private _falling = (velocity _unit) select 2 < -2;
		private _safetyDeploy = (time - _launchTime) > 2;

		(time >= _minFlightTime) && {_safetyDeploy || _falling || {_altASL < 350}}
	};

	if (_unit getVariable ["BDA_pelican_chuteDeployed", false]) exitWith {};

	[_unit] call BDA_fnc_pelicanEmergencyEjectDeployChute;
};
