private _vehicle = vehicle player;
if (_vehicle isEqualTo player) exitWith {false};
if (player != driver _vehicle) exitWith {false};

private _modes = getArray (configOf _vehicle >> "BDA_ThrustModes");
if (_modes isEqualTo []) exitWith {false};

if ((_vehicle getVariable ["BDA_ThrustMode", 0]) == 0
	&& {!(_vehicle getVariable ["OPTRE_Thruster_EngagedStatus", false])}
	&& {!(_vehicle getVariable ["OPTRE_Afterburners_EngagedStatus", false])}
) exitWith {false};

[_vehicle, 0, true] spawn BDA_fnc_setThrustMode;
true
