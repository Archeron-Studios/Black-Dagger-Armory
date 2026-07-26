/*
 * Author: Rib / BDA
 * Adds scroll-wheel action to open the harness parachute during freefall.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

if (!local _unit) exitWith {};

private _actionId = _unit getVariable ["BDA_harness_parachute_actionId", -1];
if (_actionId >= 0) then {
	_unit removeAction _actionId;
};

private _id = _unit addAction [
	"<t color='#7EC8E3'>Open Parachute</t>",
	{
		params ["_target", "_caller"];
		[_caller] call BDA_fnc_harnessParachuteOpenFromAction;
	},
	nil,
	1.5,
	false,
	true,
	"",
	"[_this] call BDA_fnc_harnessParachuteCanOpen",
	5
];

_unit setVariable ["BDA_harness_parachute_actionId", _id];
