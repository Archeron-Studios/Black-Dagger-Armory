private _vehicle = vehicle player;
if (_vehicle isEqualTo player) exitWith {false};
if (player != driver _vehicle) exitWith {false};

private _modes = getArray (configOf _vehicle >> "BDA_ThrustModes");
if (_modes isEqualTo []) exitWith {false};

private _current = _vehicle getVariable ["BDA_ThrustMode", 0];
private _idx = if (_current == 0) then {-1} else {_modes find _current};

if (_idx >= (count _modes) - 1 && {_current != 0}) exitWith {false};

private _next = if (_idx < 0) then {
	_modes select 0
} else {
	_modes select (_idx + 1)
};

[_vehicle, _next] spawn BDA_fnc_setThrustMode;
true
