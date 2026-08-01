/*
 * True when spotting cache should run — Smartfinder or pilot/gunner/copilot seats.
 */

if ([] call BDA_fnc_isSmartfinder) exitWith { true };

private _veh = vehicle player;
if (_veh isEqualTo player) exitWith { false };

private _role = assignedVehicleRole player;
(_role select 0) in ["Driver", "Turret", "Commander"]
