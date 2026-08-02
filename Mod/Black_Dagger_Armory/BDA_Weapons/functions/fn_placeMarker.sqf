/*
 * Creates a synced map marker on the global channel.
 * Optional: color, type, and text are applied on the server in MP.
 */

params [
	["_name", "", [""]],
	["_pos", [], [[]]],
	["_channel", 0, [0]],
	["_creator", objNull, [objNull]],
	["_color", "", [""]],
	["_type", "", [""]],
	["_text", "", [""]]
];

if (_name isEqualTo "") exitWith { "" };
if (!(_pos isEqualType []) || {count _pos < 2}) exitWith {
	diag_log format ["[BDA] placeMarker invalid position: %1", _pos];
	""
};

if (isNull _creator) then { _creator = player };

if (!isServer) exitWith {
	[_name, _pos, _channel, _creator, _color, _type, _text] remoteExecCall ["BDA_fnc_placeMarker", 2];
	_name
};

private _prevChannel = currentChannel;
setCurrentChannel 0;
_channel = currentChannel;

if (markerShape _name != "") then {
	deleteMarker _name;
};

createMarker [_name, _pos, _channel, _creator];

if (_color != "") then { _name setMarkerColor _color };
if (_type != "") then { _name setMarkerType _type };
if (_text != "") then { _name setMarkerText _text };

setCurrentChannel _prevChannel;
_name
