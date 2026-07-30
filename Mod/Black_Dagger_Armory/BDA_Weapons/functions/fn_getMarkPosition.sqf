/*
 * World position for ground markers (LZ, FM, etc.) — first camera ray hit.
 */

if (cameraView in ["GUNNER", "GROUP"] || {!(vehicle player isEqualTo player)}) then {
	private _veh = vehicle player;
	private _ignore = if (_veh isEqualTo player) then { objNull } else { _veh };
	private _startASL = AGLToASL (positionCameraToWorld [0, 0, 0]);
	private _endASL = AGLToASL (positionCameraToWorld [0, 0, 5000]);
	private _dir = vectorNormalized (_endASL vectorDiff _startASL);

	private _hits = lineIntersectsSurfaces [
		_startASL,
		_startASL vectorAdd (_dir vectorMultiply 5000),
		_ignore,
		objNull,
		true,
		-1,
		"VIEW",
		"FIRE"
	];

	if !(_hits isEqualTo []) exitWith {
		ASLtoAGL ((_hits select 0) select 0)
	};
};

screenToWorld [0.5, 0.5]
