lzNames = ["Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Gamma","Hotel","India","Juliet","Kilo","Lima","Mike","November","Oscar ","Papa","Quebec","Romeo","Sierra","Tango","Uniform","Victor","Xray","Yankee","Zulu"];

hint "placing marker";

_seed = round(random 1e6); 
_var = "_USER_DEFINED_" + format["%1",_seed];
_LZSelect = selectRandom lzNames;
_LZSelect2 = selectRandom lzNames;
_LZConc = format["%1-%2",_LZSelect,_LZSelect2];
_wPos = screenToWorld [0.5,0.5];
_gridRef = mapGridPosition _wPos;
_setSide = setCurrentChannel 0;
_channelSay = currentChannel;

_mrkStr = createMarker [_var, _wPos, _channelSay, player];
_mrkStr setMarkerColor "ColorBlufor";
_mrkStr setMarkerText format["LZ: %1",_LZConc];
_mrkStr setMarkerType "BDA_lz_Marker";
_gridPos = mapGridPosition getMarkerPos _mrkStr;
systemChat format["Marked LZ %2 at %1 in %3",_gridPos,_LZConc];