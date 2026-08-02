/*
 * Author: Rib / BDA
 * Returns true for BDA Pelican variants that use emergency ejection.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * Boolean <BOOL>
 */

params ["_vehicle"];

if (isNull _vehicle) exitWith {false};

private _type = typeOf _vehicle;

_type in [
	"BDA_UNSC_D77_TC_Pelican",
	"BDA_UNSC_D77_TC_Pelican_Single"
]
