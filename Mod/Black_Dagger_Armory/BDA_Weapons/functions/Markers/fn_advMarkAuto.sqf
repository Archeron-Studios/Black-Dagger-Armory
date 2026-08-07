/*
 * One-click threat intel marker — Smartfinder or vehicle crew optics.
 */

if !([] call BDA_fnc_canUseMarkerOptics) exitWith {
	systemChat "Use the BDA Smartfinder or vehicle optics to auto-mark spotted threats.";
};

private _target = call BDA_fnc_getCachedSpottedTarget;

if (isNull _target) then {
	_target = call BDA_fnc_resolveSpottedTarget;
};

if (isNull _target) exitWith {
	hint "No target spotted — aim at a threat and try again.";
};

private _threatType = [_target] call BDA_fnc_classifySpottedTarget;

if (_threatType isEqualTo "") then {
	_threatType = "Unknown";
};

[_threatType, _target] call BDA_fnc_advMark;
