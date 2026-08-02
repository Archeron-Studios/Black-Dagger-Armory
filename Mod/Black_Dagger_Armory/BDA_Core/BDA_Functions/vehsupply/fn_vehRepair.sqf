//
// Standalone repair action — finds nearest vehicle to the player.

private _veh = nearestObjects [player, ["Air", "Car", "Tank", "Plane", "Ship"], 50] select 0;
if (isNull _veh) exitWith {
	hint "No vehicle nearby.";
};

[
	"Repairing...",
	15,
	{ !isEngineOn (_this select 0) },
	{
		params ["_veh"];
		hint "Repairing complete";
		_veh setDamage 0;
	},
	{ hint "Repairing aborted." },
	[_veh]
] call CBA_fnc_progressBar;
