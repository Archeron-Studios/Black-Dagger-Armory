params ["_vehicle", "_targetMode", ["_forceOff", false]];

private _thrustCooldown = 0.6;

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

private _downgrade = !_forceOff && {_targetMode < _current || {_targetMode == 0 && _current > 0}};

_vehicle setVariable ["BDA_ThrustChanging", true, false];

_vehicle setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_vehicle setVariable ["OPTRE_Afterburners_EngagedStatus", false, true];
sleep 0.4;

if (!alive _vehicle || {player != driver _vehicle}) exitWith {
	_vehicle setVariable ["BDA_ThrustChanging", false, false];
};

if (_forceOff && _targetMode == 0) then {
	if (_current > 0
		|| {_vehicle getVariable ["OPTRE_Thruster_EngagedStatus", false]}
		|| {_vehicle getVariable ["OPTRE_Afterburners_EngagedStatus", false]}
	) then {
		_vehicle spawn BDA_fnc_Thruster400Disengage;
	} else {
		_vehicle setVariable ["BDA_ThrustMode", 0, true];
		hint "THRUSTERS OFF";
	};
} else {
	if (_downgrade) then {
		switch (_current) do {
			case 800: { _vehicle spawn BDA_fnc_Afterburners800Disengage; };
			case 600: { _vehicle spawn BDA_fnc_Boosters600Disengage; };
			case 400: { _vehicle spawn BDA_fnc_Thruster400Disengage; };
			default {
				_vehicle setVariable ["BDA_ThrustMode", 0, true];
				hint "THRUSTERS OFF";
			};
		};
	} else {
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
	};
};

sleep _thrustCooldown;
_vehicle setVariable ["BDA_ThrustChanging", false, false];
