/*
 * Author: Rib / BDA
 * Returns true when the unit is in harness freefall and can manually open the chute.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Boolean <BOOL>
 */

params ["_unit"];

private _hasHarness = backpack _unit isEqualTo "BDA_Naval_Pilot_Harness";
private _hasStash = (_unit getVariable ["BDA_harness_backpack", []]) isNotEqualTo [];

if (!_hasHarness && !_hasStash) exitWith {false};
if (_unit getVariable ["BDA_harness_chuteActive", false]) exitWith {false};
if !(vehicle _unit isKindOf "Man") exitWith {false};
if (((getPosATL _unit) select 2) <= 12) exitWith {false};
if (((velocity _unit) select 2) >= 1) exitWith {false};

true
