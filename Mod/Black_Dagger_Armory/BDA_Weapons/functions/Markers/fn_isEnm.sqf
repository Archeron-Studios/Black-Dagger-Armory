_seed = round(random 1e6); 
_var = "_USER_DEFINED_" + format["%1",_seed];
_wPos = screenToWorld [0.5,0.5];
_gridRef = mapGridPosition _wPos;
_setSide = setCurrentChannel 0;
_channelSay = currentChannel;

_mrkStr = createMarker [_var, _wPos, _channelSay, player];
_mrkStr setMarkerColor "ColorOpfor";
_mrkStr setMarkerText "Enemy Pos";
_mrkStr setMarkerType "BDA_inf_Marker";
_gridPos = mapGridPosition getMarkerPos _mrkStr;
systemChat format["Marked Enemy Pos marker at %1", _gridPos];