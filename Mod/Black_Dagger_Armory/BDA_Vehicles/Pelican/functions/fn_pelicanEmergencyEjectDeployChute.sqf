/*
 * Author: Rib / BDA
 * Spawn a steerable parachute and move the pilot into it.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

if (!isServer) exitWith {
	[_unit] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectDeployChute", 2];
};

if (isNull _unit) exitWith {};
if (_unit getVariable ["BDA_pelican_chuteDeployed", false]) exitWith {};

_unit setVariable ["BDA_pelican_chuteDeployed", true, true];

private _vehicle = _unit getVariable ["BDA_pelican_ejectVehicle", objNull];
private _vel = velocity _unit;
private _posASL = getPosASL _unit;

private _chute = createVehicle ["Steerable_Parachute_F", ASLToAGL _posASL, [], 0, "FLY"];
_chute setPosASL _posASL;
_chute setVelocity _vel;

if (!isNull _vehicle) then {
	_chute disableCollisionWith _vehicle;
};

_unit setVariable ["BDA_pelican_ejectChute", _chute, true];
[_unit, _chute] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectEnterChute", _unit];
