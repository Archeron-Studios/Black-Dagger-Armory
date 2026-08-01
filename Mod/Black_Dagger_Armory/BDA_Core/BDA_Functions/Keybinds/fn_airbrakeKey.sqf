private _vehicle = vehicle player;
if (_vehicle isEqualTo player) exitWith {false};
if (player != driver _vehicle) exitWith {false};

private _modes = getArray (configOf _vehicle >> "BDA_ThrustModes");
if (_modes isEqualTo []) exitWith {false};

if (!alive _vehicle) exitWith {false};
if (speed _vehicle <= 60) exitWith {false};

// Airbrake bypasses thrust cooldown — stop any active loop and engage immediately
[_vehicle] call BDA_fnc_stopThrustScript;
_vehicle setVariable ["BDA_ThrustChanging", true, false];
_vehicle setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_vehicle setVariable ["OPTRE_Afterburners_EngagedStatus", false, true];
_vehicle setVariable ["BDA_ThrustMode", 0, true];
[_vehicle, BDA_fnc_FullAirbrakeEngage] call BDA_fnc_spawnThrustScript;

[_vehicle] spawn {
	params ["_vehicle"];
	sleep 0.6;
	if (player == driver _vehicle) then {
		_vehicle setVariable ["BDA_ThrustChanging", false, false];
	};
};

true
