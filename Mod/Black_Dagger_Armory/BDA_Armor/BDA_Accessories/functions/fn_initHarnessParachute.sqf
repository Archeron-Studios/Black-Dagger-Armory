/*
 * Author: Rib / BDA
 * Registers harness parachute scroll-wheel actions (manual deploy only).
 */

if (!isNil "BDA_harnessParachute_initialized") exitWith {};
BDA_harnessParachute_initialized = true;

if (isNil "CBA_fnc_addClassEventHandler") exitWith {
	diag_log "[BDA] CBA missing - harness parachute system not initialized";
};

["Air", "GetIn", {
	params ["_unit", "_role", "_vehicle"];

	if !(_unit isKindOf "Man") exitWith {};
	if (!local _unit) exitWith {};
	if (backpack _unit isNotEqualTo "BDA_Naval_Pilot_Harness") exitWith {};

	[_vehicle, _unit] call BDA_fnc_harnessParachuteAddVehicleActions;
}, true] call CBA_fnc_addClassEventHandler;

["Air", "GetOut", {
	params ["_unit", "_role", "_vehicle"];

	if !(_unit isKindOf "Man") exitWith {};
	if (!local _unit) exitWith {};

	[_vehicle] call BDA_fnc_harnessParachuteRemoveVehicleActions;
}, true] call CBA_fnc_addClassEventHandler;

if (!hasInterface) exitWith {};

[] spawn {
	waitUntil {!isNull player};

	[player] call BDA_fnc_harnessParachuteAddAction;

	player addEventHandler ["Respawn", {
		params ["_unit"];
		[_unit] call BDA_fnc_harnessParachuteAddAction;
	}];
};

["loadout", {
	params ["_unit"];
	if (!local _unit) exitWith {};
	[_unit] call BDA_fnc_harnessParachuteAddAction;
}, true] call CBA_fnc_addPlayerEventHandler;
