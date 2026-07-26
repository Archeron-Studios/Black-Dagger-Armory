casMissionNames = ["Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Gamma","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar ","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Xray","Yankee","Zulu"];

_seed = round(random 1e6); 
_var = "_USER_DEFINED_" + format["%1",_seed];
_CMSelect = selectRandom casMissionNames;
_wPos = screenToWorld [0.5,0.5];
_gridRef = mapGridPosition _wPos;
_setSide = setCurrentChannel 0;
_channelSay = currentChannel;

_mrkStr = createMarker [_var, _wPos, _channelSay, player];
_mrkStr setMarkerColor "ColorRed";
_mrkStr setMarkerText format["CM: %1", _CMSelect];
_mrkStr setMarkerType "BDA_Destroy_Marker";
_gridPos = mapGridPosition getMarkerPos _mrkStr;
systemChat format["Marked CAS Mission %2 at %1", _gridPos, _CMSelect];