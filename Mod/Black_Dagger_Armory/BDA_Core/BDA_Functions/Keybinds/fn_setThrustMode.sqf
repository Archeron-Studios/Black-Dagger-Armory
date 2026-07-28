params ["_vehicle", "_targetMode"];

if (!alive _vehicle) exitWith {};
if (player != driver _vehicle) exitWith {};
if (_vehicle getVariable ["BDA_ThrustChanging", false]) exitWith {};

private _modes = getArray (configOf _vehicle >> "BDA_ThrustModes");
if (_modes isEqualTo []) exitWith {};

private _current = _vehicle getVariable ["BDA_ThrustMode", 0];
if (_targetMode == _current) exitWith {};
if (_targetMode != 0 && !(_targetMode in _modes)) exitWith {};
if (_targetMode != 0 && {!isEngineOn _vehicle}) exitWith {};
if (_targetMode != 0 && {_current == 0} && {((getPosATL _vehicle) select 2) <= 1}) exitWith {};

_vehicle setVariable ["BDA_ThrustChanging", true, false];

_vehicle setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_vehicle setVariable ["OPTRE_Afterburners_EngagedStatus", false, true];
sleep 0.6;

if (!alive _vehicle || {player != driver _vehicle}) exitWith {
	_vehicle setVariable ["BDA_ThrustChanging", false, false];
};

switch (_targetMode) do {
	case 0: {
		_vehicle setVariable ["BDA_ThrustMode", 0, true];
		hint "THRUSTERS OFF";
	};
	case 400: {
		_vehicle setVariable ["BDA_ThrustMode", 400, true];
		_vehicle spawn BDA_fnc_Thruster400Engage;
	};
	case 600: {
		_vehicle setVariable ["BDA_ThrustMode", 600, true];
		_vehicle spawn BDA_fnc_Boosters600Engage;
	};
	case 800: {
		_vehicle setVariable ["BDA_ThrustMode", 800, true];
		_vehicle spawn BDA_fnc_Afterburners800Engage;
	};
};

_vehicle setVariable ["BDA_ThrustChanging", false, false];
