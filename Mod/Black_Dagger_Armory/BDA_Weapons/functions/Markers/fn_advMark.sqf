/*
 * Threat intel marker — normalized type label on the resolved crosshair target.
 * Arguments: [threatType, target]
 */

params [
	["_threatType", "Unknown", [""]],
	["_target", objNull, [objNull]]
];

if (_threatType isEqualTo "") then { _threatType = "Unknown" };

if (isNull _target) then {
	_target = call BDA_fnc_getCachedSpottedTarget;
};

if (isNull _target) then {
	_target = call BDA_fnc_resolveSpottedTarget;
};

private _wPos = [_target] call BDA_fnc_getSpottedPosition;
private _seed = round(random 1e6);
private _var = "_USER_DEFINED_" + format ["%1", _seed];

setCurrentChannel 0;
private _channelSay = currentChannel;

private _label = _threatType;
private _mrkType = "BDA_inf_Marker";

switch (_threatType) do {
	case "Car": { _mrkType = "BDA_motor_Marker" };
	case "Truck": { _mrkType = "BDA_support_Marker" };
	case "APC": { _mrkType = "BDA_mech_Marker" };
	case "Tank": { _mrkType = "BDA_Armor_Marker" };
	case "Boat": { _mrkType = "BDA_Boat_Marker" };
	case "Helicopter": { _mrkType = "BDA_heli_Marker" };
	case "Jet": { _mrkType = "BDA_plane_Marker" };
	case "Squad": { _mrkType = "BDA_inf_Marker" };
	default { _mrkType = "BDA_inf_Marker" };
};

[_var, _wPos, _channelSay, player, "ColorOpfor", _mrkType, _label] call BDA_fnc_placeMarker;

private _gridPos = mapGridPosition _wPos;
systemChat format ["Marked %1 at %2", _label, _gridPos];
