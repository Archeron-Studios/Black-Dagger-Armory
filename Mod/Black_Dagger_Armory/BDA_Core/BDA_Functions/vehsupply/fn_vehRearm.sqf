//
// Standalone rearm action — finds nearest vehicle to the player.

private _veh = nearestObjects [player, ["Air", "Car", "Tank", "Plane", "Ship"], 50] select 0;
if (isNull _veh) exitWith {
	hint "No vehicle nearby.";
};

[
	"Rearming...",
	15,
	{ !isEngineOn (_this select 0) },
	{
		params ["_veh"];
		hint "Rearming complete";
		_veh setVehicleAmmoDef 1;
		_veh setVehicleAmmo 1;
	},
	{ hint "Rearming aborted." },
	[_veh]
] call CBA_fnc_progressBar;
