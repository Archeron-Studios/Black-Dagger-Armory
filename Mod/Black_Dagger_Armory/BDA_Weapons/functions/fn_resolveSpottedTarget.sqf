/*
 * Resolves the unit/vehicle under the crosshair via camera ray (not nearest cursorTarget).
 */

private _fnc_isValid = {
	params ["_obj"];

	if (isNull _obj) exitWith { false };

	private _ownVeh = vehicle player;

	_obj != player
	&& {_obj != _ownVeh}
	&& {player distance _obj < 2500}
};

private _fnc_normalize = {
	params ["_obj"];

	if (_obj isKindOf "Man") exitWith { _obj };

	vehicle _obj
};

private _fnc_rayHits = {
	private _veh = vehicle player;
	private _ignore = if (_veh isEqualTo player) then { objNull } else { _veh };
	private _startASL = AGLToASL (positionCameraToWorld [0, 0, 0]);
	private _endASL = AGLToASL (positionCameraToWorld [0, 0, 5000]);
	private _dir = vectorNormalized (_endASL vectorDiff _startASL);

	lineIntersectsSurfaces [
		_startASL,
		_startASL vectorAdd (_dir vectorMultiply 5000),
		_ignore,
		objNull,
		true,
		-1,
		"VIEW",
		"FIRE"
	]
};

private _resolved = objNull;

{
	private _obj = _x select 2;
	private _parent = _x select 3;

	if (!isNull _parent) then { _obj = _parent };

	if ([_obj] call _fnc_isValid) exitWith {
		_resolved = [_obj] call _fnc_normalize;
	};
} forEach (call _fnc_rayHits);

if (!isNull _resolved) exitWith {
	[_resolved] call BDA_fnc_setSpottedTargetCache;
	_resolved
};

private _obj = laserTarget player;
if ([_obj] call _fnc_isValid) exitWith {
	private _normalized = [_obj] call _fnc_normalize;
	[_normalized] call BDA_fnc_setSpottedTargetCache;
	_normalized
};

// Last resort — only if cursorTarget aligns with the camera (not nearest-in-cone)
_obj = cursorTarget;
if ([_obj] call _fnc_isValid) then {
	private _camFrom = AGLToASL (positionCameraToWorld [0, 0, 0]);
	private _camTo = AGLToASL (positionCameraToWorld [0, 0, 1]);
	private _camDir = vectorNormalized (_camTo vectorDiff _camFrom);
	private _targetASL = AGLToASL (getPosATL _obj);
	private _toTarget = vectorNormalized (_targetASL vectorDiff _camFrom);

	if ((_camDir vectorDotProduct _toTarget) > 0.96) exitWith {
		private _normalized = [_obj] call _fnc_normalize;
		[_normalized] call BDA_fnc_setSpottedTargetCache;
		_normalized
	};
};

[objNull] call BDA_fnc_setSpottedTargetCache;
objNull
