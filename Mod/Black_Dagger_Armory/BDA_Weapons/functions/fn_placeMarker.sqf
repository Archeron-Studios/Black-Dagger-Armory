/*
 * Creates a synced map marker on the global channel.
 * Clients remote to the server so createMarker runs with authority in MP.
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

// Dedicated servers have no chat UI — do not call setCurrentChannel here.
if (_channel < 0) then { _channel = 0 };

if (markerShape _name != "") then {
	deleteMarker _name;
};

createMarker [_name, _pos, _channel, _creator];

if (_color != "") then { _name setMarkerColor _color };
if (_type != "") then { _name setMarkerType _type };
if (_text != "") then { _name setMarkerText _text };

_name
