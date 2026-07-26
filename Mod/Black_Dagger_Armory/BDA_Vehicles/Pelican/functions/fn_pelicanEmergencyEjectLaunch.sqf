/*
 * Author: Rib / BDA
 * Client-local: move pilot out of the Pelican and apply eject impulse.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Vehicle <OBJECT>
 * 2: Eject position ASL <ARRAY>
 * 3: Eject velocity <ARRAY>
 */

params ["_unit", "_vehicle", "_ejectPosASL", "_ejectVel"];

if (isNull _unit) exitWith {};

if (!local _unit) exitWith {
	[_unit, _vehicle, _ejectPosASL, _ejectVel] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectLaunch", _unit];
};

[_unit, _vehicle, _ejectPosASL, _ejectVel] spawn {
	params ["_unit", "_vehicle", "_ejectPosASL", "_ejectVel"];

	_unit setVariable ["BDA_pelican_ejecting", true, true];
	_unit allowDamage false;

	if (!isNull _vehicle && {vehicle _unit == _vehicle}) then {
		_unit disableCollisionWith _vehicle;
		moveOut _unit;
	};

	private _timeout = time + 3;
	waitUntil {
		sleep 0.05;
		vehicle _unit == _unit || {time >= _timeout}
	};

	_unit setPosASL _ejectPosASL;
	_unit setVelocity _ejectVel;

	if (!isNull _vehicle) then {
		_unit disableCollisionWith _vehicle;
	};

	_unit setVariable ["BDA_pelican_ejectReady", true, true];
};
