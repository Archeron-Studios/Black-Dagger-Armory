//
//		Name: BDA_fn_vehSupply.sqf
//		Author: Wallace & Rib
//		Description: Logistics pad actions — rearm, refuel, repair, cleanup, pylons.

if (isNil "_this" || {_this isEqualTo []}) exitWith {
	diag_log "[BDA] vehSupply requires a marker name as _this select 0.";
};

private _marker = _this select 0;
private _supplyPos = getMarkerPos _marker;

if (_supplyPos isEqualTo [0, 0, 0]) exitWith {
	diag_log format ["[BDA] vehSupply invalid marker position for %1", _marker];
};

this setVariable ["BDA_vehSupply_pos", _supplyPos, false];

this addAction ["Pylon Vehicle", {
	params ["_target"];
	private _pos = _target getVariable ["BDA_vehSupply_pos", getPosATL _target];
	private _veh = nearestObjects [_pos, ["Helicopter", "Plane", "Rotary"], 100] select 0;
	if (isNull _veh) exitWith { hint "No aircraft nearby." };
	[ace_player, _veh] call ace_pylons_fnc_showDialog;
}];

this addAction ["Cleanup Vehicles", {
	params ["_target"];
	private _pos = _target getVariable ["BDA_vehSupply_pos", getPosATL _target];
	private _near = nearestObjects [_pos, ["Air", "Car", "Tank", "Plane", "Ship"], 120];
	if (_near isEqualTo []) exitWith { systemChat "No vehicle nearby to remove." };
	deleteVehicle (_near select 0);
	systemChat "Removed closest vehicle.";
}];

this addAction ["Refuel Vehicle", {
	params ["_target"];
	private _pos = _target getVariable ["BDA_vehSupply_pos", getPosATL _target];
	private _veh = nearestObjects [_pos, ["Air", "Car", "Tank", "Plane", "Ship"], 50] select 0;
	if (isNull _veh) exitWith { hint "No vehicle nearby." };

	[
		"Refueling",
		5,
		{ !isEngineOn (_this select 0) },
		{
			params ["_veh"];
			hint "Refueling complete";
			_veh setFuel 1;
		},
		{ hint format ["%1 aborted.", _this select 1] },
		[_veh, "Refueling"]
	] call CBA_fnc_progressBar;
}];

this addAction ["Rearm Vehicles", {
	params ["_target"];
	private _pos = _target getVariable ["BDA_vehSupply_pos", getPosATL _target];
	private _veh = nearestObjects [_pos, ["Air", "Car", "Tank", "Plane", "Ship"], 50] select 0;
	if (isNull _veh) exitWith { hint "No vehicle nearby." };

	[
		"Rearming",
		5,
		{ !isEngineOn (_this select 0) },
		{
			params ["_veh"];
			hint "Rearming complete";
			_veh setVehicleAmmoDef 1;
			_veh setVehicleAmmo 1;
		},
		{ hint format ["%1 aborted.", _this select 1] },
		[_veh, "Rearming"]
	] call CBA_fnc_progressBar;
}];

this addAction ["Repair Vehicle", {
	params ["_target"];
	private _pos = _target getVariable ["BDA_vehSupply_pos", getPosATL _target];
	private _veh = nearestObjects [_pos, ["Air", "Car", "Tank", "Plane", "Ship"], 50] select 0;
	if (isNull _veh) exitWith { hint "No vehicle nearby." };

	[
		"Repairing",
		5,
		{ !isEngineOn (_this select 0) },
		{
			params ["_veh"];
			hint "Repairing complete";
			_veh setDamage 0;
		},
		{ hint format ["%1 aborted.", _this select 1] },
		[_veh, "Repairing"]
	] call CBA_fnc_progressBar;
}];
