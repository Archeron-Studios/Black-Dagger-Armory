private _fireMissionNames = ["Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Gamma","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Xray","Yankee","Zulu"];

private _seed = round(random 1e6);
private _var = "_USER_DEFINED_" + format ["%1", _seed];
private _fmSelect = selectRandom _fireMissionNames;
private _wPos = call BDA_fnc_getMarkPosition;

setCurrentChannel 0;
private _channelSay = currentChannel;

private _markerText = format ["FM: %1", _fmSelect];
[_var, _wPos, _channelSay, player, "ColorRed", "BDA_ord_Marker", _markerText] call BDA_fnc_placeMarker;

private _gridPos = mapGridPosition _wPos;
systemChat format ["Marked Firemission %2 at %1", _gridPos, _fmSelect];
