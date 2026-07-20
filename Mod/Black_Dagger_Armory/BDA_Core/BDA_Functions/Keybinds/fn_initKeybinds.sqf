#include "\a3\ui_f\hpp\defineDIKCodes.inc"

if (!hasInterface) exitWith {};

[
	"BDA",
	"BDA_ThrustUp",
	["Thrust Up", "Cycle thruster/afterburner speed up"],
	{call BDA_fnc_thrustUp},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

[
	"BDA",
	"BDA_ThrustDown",
	["Thrust Down", "Cycle thruster/afterburner speed down"],
	{call BDA_fnc_thrustDown},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

[
	"BDA",
	"BDA_ThrustOff",
	["Thrusters Off", "Disengage thrusters and afterburners"],
	{call BDA_fnc_thrustOff},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;

[
	"BDA",
	"BDA_Airbrakes",
	["Airbrakes", "Engage full airbrakes"],
	{call BDA_fnc_airbrakeKey},
	"",
	[-1, [false, false, false]]
] call CBA_fnc_addKeybind;
