/*
 * Author: Rib / BDA
 * Manual parachute open from scroll-wheel addAction (freefall only).
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

if !([_unit] call BDA_fnc_harnessParachuteCanOpen) exitWith {};

if (backpack _unit isEqualTo "BDA_Naval_Pilot_Harness") then {
	[_unit] call BDA_fnc_harnessParachuteStash;
};

if (isMultiplayer && {!isServer}) then {
	[_unit] remoteExecCall ["BDA_fnc_harnessParachuteDeploy", 2];
} else {
	[_unit] call BDA_fnc_harnessParachuteDeploy;
};
