/*
 * Marker position for spotted threats — snaps to resolved target, else crosshair ground.
 */

params [["_obj", objNull, [objNull]]];

if (isNull _obj) then {
	_obj = call BDA_fnc_resolveSpottedTarget;
};

if (isNull _obj) exitWith {
	call BDA_fnc_getMarkPosition
};

if (_obj isKindOf "Air") then {
	getPos _obj
} else {
	getPosATL _obj
};
