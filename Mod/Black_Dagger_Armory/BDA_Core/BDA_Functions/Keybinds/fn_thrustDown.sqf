private _vehicle = vehicle player;
if (_vehicle isEqualTo player) exitWith {false};
if (player != driver _vehicle) exitWith {false};

private _modes = getArray (configOf _vehicle >> "BDA_ThrustModes");
if (_modes isEqualTo []) exitWith {false};

private _current = _vehicle getVariable ["BDA_ThrustMode", 0];
if (_current == 0) exitWith {false};

private _idx = _modes find _current;
if (_idx <= 0) exitWith {false};

private _prev = _modes select (_idx - 1);
[_vehicle, _prev] spawn BDA_fnc_setThrustMode;
true
