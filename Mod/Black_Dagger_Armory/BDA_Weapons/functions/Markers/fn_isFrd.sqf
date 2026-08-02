private _seed = round(random 1e6);
private _var = "_USER_DEFINED_" + format ["%1", _seed];
private _wPos = call BDA_fnc_getMarkPosition;

setCurrentChannel 0;
private _channelSay = currentChannel;

[_var, _wPos, _channelSay, player, "ColorBlufor", "BDA_Flag_Marker", "Friendly Pos"] call BDA_fnc_placeMarker;

private _gridPos = mapGridPosition _wPos;
systemChat format ["Marked Friendly Pos at %1", _gridPos];
