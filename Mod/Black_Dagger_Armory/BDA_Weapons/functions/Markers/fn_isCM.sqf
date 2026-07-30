private _casMissionNames = ["Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Gamma","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Xray","Yankee","Zulu"];

private _seed = round(random 1e6);
private _var = "_USER_DEFINED_" + format ["%1", _seed];
private _cmSelect = selectRandom _casMissionNames;
private _wPos = call BDA_fnc_getMarkPosition;

setCurrentChannel 0;
private _channelSay = currentChannel;

private _markerText = format ["CM: %1", _cmSelect];
[_var, _wPos, _channelSay, player, "ColorRed", "BDA_Destroy_Marker", _markerText] call BDA_fnc_placeMarker;

private _gridPos = mapGridPosition _wPos;
systemChat format ["Marked CAS Mission %2 at %1", _gridPos, _cmSelect];
