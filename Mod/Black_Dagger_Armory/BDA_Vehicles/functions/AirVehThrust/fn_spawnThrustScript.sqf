/*
 * Stops any running thrust loop, then spawns a new one and tracks the handle.
 */

params ["_vehicle", "_script"];

[_vehicle] call BDA_fnc_stopThrustScript;

private _handle = _vehicle spawn _script;
_vehicle setVariable ["BDA_ThrustScript", _handle, false];

_handle
