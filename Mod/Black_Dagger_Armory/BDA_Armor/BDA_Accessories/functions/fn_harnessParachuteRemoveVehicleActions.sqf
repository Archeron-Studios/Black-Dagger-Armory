/*
 * Author: Rib / BDA
 * Removes backup vehicle Get Out / Eject actions.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 */

params ["_vehicle"];

private _getOutId = _vehicle getVariable ["BDA_harness_getout_actionId", -1];
private _ejectId = _vehicle getVariable ["BDA_harness_eject_actionId", -1];

if (_getOutId >= 0) then {
	_vehicle removeAction _getOutId;
};

if (_ejectId >= 0) then {
	_vehicle removeAction _ejectId;
};

_vehicle setVariable ["BDA_harness_getout_actionId", nil];
_vehicle setVariable ["BDA_harness_eject_actionId", nil];
