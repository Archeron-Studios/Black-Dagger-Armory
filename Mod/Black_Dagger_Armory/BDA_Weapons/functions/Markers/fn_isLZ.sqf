private _lzNames = ["Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Gamma","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Xray","Yankee","Zulu"];

hint "placing marker";

private _seed = round(random 1e6);
private _var = "_USER_DEFINED_" + format ["%1", _seed];
private _lzSelect = selectRandom _lzNames;
private _lzSelect2 = selectRandom _lzNames;
private _lzConc = format ["%1-%2", _lzSelect, _lzSelect2];
private _wPos = call BDA_fnc_getMarkPosition;

setCurrentChannel 0;
private _channelSay = currentChannel;

private _markerText = format ["LZ: %1", _lzConc];
[_var, _wPos, _channelSay, player, "ColorBlufor", "BDA_lz_Marker", _markerText] call BDA_fnc_placeMarker;

private _gridPos = mapGridPosition _wPos;
systemChat format ["Marked LZ %2 at %1", _gridPos, _lzConc];
