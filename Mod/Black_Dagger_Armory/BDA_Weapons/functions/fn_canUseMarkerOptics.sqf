/*
 * True when spotting cache should run — Smartfinder or vehicle crew.
 */

([] call BDA_fnc_isSmartfinder) || {
	private _veh = vehicle player;
	!( _veh isEqualTo player) && { player in crew _veh }
}
