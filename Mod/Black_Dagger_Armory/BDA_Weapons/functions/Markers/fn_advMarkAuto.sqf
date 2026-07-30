/*
 * One-click threat intel marker. BDA Smartfinder only.
 */

if !([] call BDA_fnc_isSmartfinder) exitWith {
	systemChat "Equip the BDA Smartfinder to auto-mark spotted threats.";
};

private _target = call BDA_fnc_getCachedSpottedTarget;

if (isNull _target) then {
	_target = call BDA_fnc_resolveSpottedTarget;
};

private _threatType = [_target] call BDA_fnc_classifySpottedTarget;

if (_threatType isEqualTo "") then {
	_threatType = "Unknown";
};

[_threatType, _target] call BDA_fnc_advMark;
