/*
 * Author: Rib / BDA
 * Client-local: move unit out of their current vehicle (e.g. parachute at landing).
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

if (isNull _unit) exitWith {};

if (!local _unit) exitWith {
	[_unit] remoteExecCall ["BDA_fnc_pelicanEmergencyEjectMoveOut", _unit];
};

if (!isNull objectParent _unit) then {
	moveOut _unit;
};
