/*
 * Author: Rib / BDA
 * Registers harness parachute scroll-wheel actions (manual deploy only).
 */

if (!isNil "BDA_harnessParachute_initialized") exitWith {};
BDA_harnessParachute_initialized = true;

if (isNil "CBA_fnc_addClassEventHandler") exitWith {
	diag_log "[BDA] CBA missing - harness parachute system not initialized";
};

["Air", "GetIn", { _this call BDA_fnc_harnessParachuteOnGetIn; }, true] call CBA_fnc_addClassEventHandler;

{
	[_x, "GetIn", { _this call BDA_fnc_harnessParachuteOnGetIn; }, true] call CBA_fnc_addClassEventHandler;
	[_x, "GetOut", { _this call BDA_fnc_harnessParachuteOnGetOut; }, true] call CBA_fnc_addClassEventHandler;
} forEach [
	"BDA_UNSC_D77_TC_Pelican",
	"BDA_UNSC_D77_TC_Pelican_Single"
];

["Air", "GetOut", { _this call BDA_fnc_harnessParachuteOnGetOut; }, true] call CBA_fnc_addClassEventHandler;

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
