/*
 * Author: Rib / BDA
 * Script-based Pelican emergency eject (no ejection seat).
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 */

#define BDA_PELICAN_EJECT_BACK 20
#define BDA_PELICAN_EJECT_UP 20

params ["_vehicle", "_unit"];

if (isNull _vehicle || {isNull _unit}) exitWith {};
if !(_unit in crew _vehicle) exitWith {};

if (!isServer) exitWith {
	[_vehicle, _unit] remoteExecCall ["BDA_fnc_pelicanEmergencyEject", 2];
};

[_vehicle, _unit] spawn {
	params ["_vehicle", "_unit"];

	_unit setVariable ["BDA_pelican_ejectVehicle", _vehicle, true];
	_unit setVariable ["BDA_pelican_chuteDeployed", false, true];
	_unit setVariable ["BDA_pelican_ejectReady", false, true];
	_unit setVariable ["BDA_pelican_ejecting", true, true];

	private _basePosASL = [_vehicle, _unit] call BDA_fnc_pelicanEmergencyEjectPos;
	private _vehicleVel = velocity _vehicle;
	private _boost = _vehicle vectorModelToWorld [0, -BDA_PELICAN_EJECT_BACK, BDA_PELICAN_EJECT_UP];
	private _ejectPosASL = _basePosASL vectorAdd _boost;
	private _ejectVel = _vehicleVel vectorAdd _boost;

	[_unit, _vehicle, _ejectPosASL, _ejectVel] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectLaunch", _unit];

	private _timeout = time + 8;
	waitUntil {
		sleep 0.05;
		_unit getVariable ["BDA_pelican_ejectReady", false]
		|| {isNull _unit}
		|| {time >= _timeout}
	};

	if (isNull _unit) exitWith {};

	[_unit] call BDA_fnc_pelicanEmergencyEjectMonitor;
};
