//
// Standalone cleanup — deletes the single closest vehicle to the pad marker.

params [["_marker", "", [""]]];

if (_marker isEqualTo "") exitWith {
	diag_log "[BDA] vehCleanup requires a marker name.";
};

private _pos = getMarkerPos _marker;
private _near = nearestObjects [_pos, ["Air", "Car", "Tank", "Plane", "Ship"], 150];

if (_near isEqualTo []) exitWith {
	systemChat "No vehicle nearby to remove.";
};

deleteVehicle (_near select 0);
systemChat "Removed closest vehicle.";
