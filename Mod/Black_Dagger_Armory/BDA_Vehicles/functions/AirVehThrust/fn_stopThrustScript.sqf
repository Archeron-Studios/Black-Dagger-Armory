/*
 * Terminates the active thrust velocity loop on a vehicle.
 */

params ["_vehicle"];

private _handle = _vehicle getVariable ["BDA_ThrustScript", scriptNull];
if (!scriptDone _handle) then {
	terminate _handle;
};

_vehicle setVariable ["BDA_ThrustScript", scriptNull, false];
