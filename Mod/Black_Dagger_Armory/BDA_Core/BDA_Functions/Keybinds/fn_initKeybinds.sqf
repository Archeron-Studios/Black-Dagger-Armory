if (!hasInterface) exitWith {};
if (isNil "CBA_fnc_addKeybind") exitWith {
	diag_log "[BDA] CBA_fnc_addKeybind not found - thruster keybinds not registered";
};

[
	"Black Dagger",
	"BDA_ThrustUp",
	["Thrust Up", "Cycle thruster/afterburner speed up"],
	{call BDA_fnc_thrustUp},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

[
	"Black Dagger",
	"BDA_ThrustDown",
	["Thrust Down", "Cycle thruster/afterburner speed down"],
	{call BDA_fnc_thrustDown},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

[
	"Black Dagger",
	"BDA_ThrustOff",
	["Thrusters Off", "Disengage thrusters and afterburners"],
	{call BDA_fnc_thrustOff},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

[
	"Black Dagger",
	"BDA_Airbrakes",
	["Airbrakes", "Engage full airbrakes"],
	{call BDA_fnc_airbrakeKey},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

diag_log "[BDA] Thruster keybinds registered under Configure Addons -> Black Dagger";
