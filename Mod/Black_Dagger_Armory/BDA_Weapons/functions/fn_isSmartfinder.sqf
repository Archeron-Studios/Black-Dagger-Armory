/*
 * True when the player is using the BDA Smartfinder.
 */

if (currentWeapon player isEqualTo "BDA_Smartfinder") exitWith { true };
if (binocular player isEqualTo "BDA_Smartfinder") exitWith { true };

if (
	"BDA_Smartfinder" in (weapons player)
	&& {vehicle player isEqualTo player}
	&& {cameraView isEqualTo "GUNNER"}
) exitWith { true };

false
