/*
File : fn_advMark.sqf
Author: Wallace
Sub Author: Rib
Description: This script creates a marking system from ace actions on a drone OR gunseat so that marking can be easily done.
*/

WAL_seed = round(random 1e6); 
WAL_var = "_USER_DEFINED_" + format["%1",WAL_seed];
WAL_wPos = screenToWorld [0.5,0.5];
WAL_gridRef = mapGridPosition WAL_wPos;
WAL_setSide = setCurrentChannel 0;
WAL_channelSay = currentChannel;

WAL_Cat = _this select 0;
WAL_Type = _this select 1;

switch (WAL_Cat) do {
	case "Armour": 
	{ 
		_mrkStr = createMarker [WAL_var, WAL_wPos, WAL_channelSay, player];
		_mrkStr setMarkerColor "ColorOpfor";
		_mrkStr setMarkerType "BDA_Armor_Marker";
		_gridPos = mapGridPosition getMarkerPos _mrkStr;
		switch (WAL_Type) do {
			case "Tank": 
			{
				_mrkStr setMarkerText "Tank";
			};
			case "APC": 
			{
				_mrkStr setMarkerText "APC";
			};
			default { };
		};
	};
	case "Aircraft": 
	{ 
		_mrkStr = createMarker [WAL_var, WAL_wPos, WAL_channelSay, player];
		_mrkStr setMarkerColor "ColorOpfor";
		_mrkStr setMarkerType "BDA_plane_Marker";
		_gridPos = mapGridPosition getMarkerPos _mrkStr;
		switch (WAL_Type) do {
			case "Vult": 
			{
				_mrkStr setMarkerText "Jet";
			};
			case "HMP": 
			{
				_mrkStr setMarkerText "Gunship";
			};
			default { };
		};
	};
	case "Artillery": 
	{ 
		_mrkStr = createMarker [WAL_var, WAL_wPos, WAL_channelSay, player];
		_mrkStr setMarkerColor "ColorOpfor";
		_mrkStr setMarkerType "BDA_Artillery_Marker";
		_gridPos = mapGridPosition getMarkerPos _mrkStr;
		switch (WAL_Type) do {
			case "Arti": 
			{
				_mrkStr setMarkerText "Artillery";
			};
			default { };
		};
	};
	case "Emplace": 
	{ 
		_mrkStr = createMarker [WAL_var, WAL_wPos, WAL_channelSay, player];
		_mrkStr setMarkerColor "ColorOpfor";
		_mrkStr setMarkerType "BDA_Artillery_Marker";
		_gridPos = mapGridPosition getMarkerPos _mrkStr;
		switch (WAL_Type) do {
			case "prot": 
			{
				_mrkStr setMarkerText "Field Gun";
				_mrkStr setMarkerType "BDA_AntiTank_Marker";
			};
			case "flak": 
			{
				_mrkStr setMarkerText "AAA";
				_mrkStr setMarkerType "BDA_AA_Marker";
			};
			case "Mort": 
			{
				_mrkStr setMarkerText "Mortar";
			};
			case "Tower":
			{
				_mrkStr setMarkerText "Tower";
				_mrkStr setMarkerType "BDA_inf_Marker";
			};
			default { };
		};
	};
	case "Inf": 
	{ 
		_mrkStr = createMarker [WAL_var, WAL_wPos, WAL_channelSay, player];
		_mrkStr setMarkerColor "ColorOpfor";
		_mrkStr setMarkerType "BDA_inf_Marker";
		_gridPos = mapGridPosition getMarkerPos _mrkStr;
		switch (WAL_Type) do {
			case "Squad": 
			{
				_mrkStr setMarkerText "Squad"; 
			};
			case "Truck": 
			{
				_mrkStr setMarkerText "Truck";
				_mrkStr setMarkerType "BDA_mech_Marker";
			};
			case "Base": 
			{
				_mrkStr setMarkerText "Base";
				_mrkStr setMarkerType "BDA_hq_Marker";
			};
			default { };
		};
	};
	default { };
};