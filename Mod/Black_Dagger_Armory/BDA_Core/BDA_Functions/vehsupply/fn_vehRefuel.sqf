//
// Standalone refuel action — finds nearest vehicle to the player.

private _veh = nearestObjects [player, ["Air", "Car", "Tank", "Plane", "Ship"], 50] select 0;
if (isNull _veh) exitWith {
	hint "No vehicle nearby.";
};

[
	"Refueling...",
	15,
	{ !isEngineOn (_this select 0) },
	{
		params ["_veh"];
		hint "Refueling complete";
		_veh setFuel 1;
	},
	{ hint "Refueling aborted." },
	[_veh]
] call CBA_fnc_progressBar;
