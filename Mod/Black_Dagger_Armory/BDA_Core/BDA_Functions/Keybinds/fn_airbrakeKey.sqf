private _vehicle = vehicle player;
if (_vehicle isEqualTo player) exitWith {false};
if (player != driver _vehicle) exitWith {false};

private _modes = getArray (configOf _vehicle >> "BDA_ThrustModes");
if (_modes isEqualTo []) exitWith {false};

if (!alive _vehicle) exitWith {false};
if (speed _vehicle <= 60) exitWith {false};

_vehicle setVariable ["BDA_ThrustMode", 0, true];
_vehicle spawn BDA_fnc_FullAirbrakeEngage;
true
