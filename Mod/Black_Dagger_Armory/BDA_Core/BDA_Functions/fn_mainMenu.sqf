/*
	Black Dagger dropdown on the main-menu top bar.

	Called from RscDisplayMain onLoad with ["init", display]. The buttons are
	defined in BDA_Core\config.cpp (BDA_MenuGroup); this script positions them,
	fills in the server rows and animates the menu. Handlers look the function
	up in uiNamespace, because the main menu has no mission namespace functions.

	Edit a row to move a server:
		[id, region, button text, ip, port, password]
*/
disableSerialization;

params [
	["_mode", "", [""]],
	["_arg", nil]
];

private _servers = [
	["na_main", "na", "Main", "74.208.86.92", 2302, ""],
	["na_training", "na", "Training", "74.208.86.92", 2802, ""],
	["na_fun", "na", "Fun Ops", "74.208.86.92", 2502, ""],
	["eu_main", "eu", "Main", "37.27.224.51", 4302, ""],
	["eu_training", "eu", "Training", "37.27.224.51", 4312, ""]
];
private _fnc = uiNamespace getVariable "BDA_fnc_mainMenu";

switch (_mode) do {

	case "init": {
		private _display = _arg;
		if (isNull _display) exitWith {
			diag_log "[BDA] mainMenu: init had no display";
		};
		if !((_display getVariable ["BDA_menu", []]) isEqualTo []) exitWith {};

		private _title = _display displayCtrl 67100;
		if (isNull _title) exitWith {
			diag_log "[BDA] mainMenu: Black Dagger tab (idc 67100) not found";
		};

		// The dropdown is defined in BDA_Core\config.cpp (BDA_MenuGroup) so its link
		// buttons open their url. One clipping group holds the whole list, so growing
		// its height rolls the list down as one piece; each region's servers sit in a
		// nested group that rolls open the same way.
		private _group = _display displayCtrl 67090;
		if (isNull _group) exitWith {
			diag_log "[BDA] mainMenu: dropdown group (idc 67090) not found";
		};

		private _titlePos = ctrlPosition _title;
		private _width = _titlePos select 2;
		private _rowH = 1.5 * (pixelH * pixelGrid * 2);
		private _btnH = _rowH - pixelH;
		private _indent = 1 * (pixelW * pixelGrid * 2);

		_group ctrlSetPosition [_titlePos select 0, (_titlePos select 1) + (_titlePos select 3), _width, 0];
		_group ctrlCommit 0;
		_group ctrlShow false;

		private _na = _group controlsGroupCtrl 67101;
		_na ctrlAddEventHandler ["ButtonClick", {["region", "na"] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];

		private _eu = _group controlsGroupCtrl 67102;
		_eu ctrlAddEventHandler ["ButtonClick", {["region", "eu"] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];

		// Arma may not open ts3server:// links, so the address is copied as well.
		private _ts = _group controlsGroupCtrl 67103;
		_ts ctrlAddEventHandler ["ButtonClick", {copyToClipboard "main.blackdagger.org:9987"}];

		private _discord = _group controlsGroupCtrl 67104;
		private _website = _group controlsGroupCtrl 67105;

		// Each region group has four server slots; unused slots stay hidden.
		private _subs = [];
		{
			_x params ["_key", "_subIdc"];
			private _sub = _group controlsGroupCtrl _subIdc;
			_sub ctrlSetPosition [0, 0, _width, 0];
			_sub ctrlCommit 0;
			private _slot = 0;
			{
				_x params ["_id", "_region", "_label", "_ip", "_port"];
				if (_region isEqualTo _key && _slot < 4) then {
					private _btn = _sub controlsGroupCtrl (_subIdc + 1 + _slot);
					_btn ctrlSetText _label;
					_btn ctrlSetTooltip format ["%1:%2", _ip, _port];
					_btn ctrlSetPosition [_indent, pixelH + _slot * _rowH, _width - _indent, _btnH];
					_btn ctrlCommit 0;
					_btn setVariable ["BDA_server", _id];
					_btn ctrlAddEventHandler ["ButtonClick", {
						["connect", (_this select 0) getVariable ["BDA_server", ""]] call (uiNamespace getVariable "BDA_fnc_mainMenu");
					}];
					_slot = _slot + 1;
				};
			} forEach _servers;
			// Showing the parent group re-shows hidden children, so unused slots
			// are shrunk to nothing instead of hidden.
			for "_i" from _slot to 3 do {
				private _unused = _sub controlsGroupCtrl (_subIdc + 1 + _i);
				_unused ctrlSetPosition [0, 0, 0, 0];
				_unused ctrlCommit 0;
				_unused ctrlEnable false;
				_unused ctrlShow false;
			};
			_subs pushBack [_key, _sub, _slot * _rowH];
		} forEach [["na", 67110], ["eu", 67120]];

		_display setVariable ["BDA_menu", [_group, _na, _eu, _ts, _discord, _website, _subs]];
		_display setVariable ["BDA_region", ""];

		_title ctrlAddEventHandler ["MouseEnter", {["open", ctrlParent (_this select 0)] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];
		_title ctrlAddEventHandler ["SetFocus", {["open", ctrlParent (_this select 0)] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];
		_title ctrlAddEventHandler ["ButtonClick", {["open", ctrlParent (_this select 0)] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];

		{
			private _other = _display displayCtrl _x;
			if (!isNull _other) then {
				_other ctrlAddEventHandler ["MouseEnter", {["close", ctrlParent (_this select 0)] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];
			};
		} forEach [1011, 1012, 1013, 1014, 1015, 1111, 1112, 1113, 1114];

		private _mouseArea = _display displayCtrl 999;
		if (!isNull _mouseArea) then {
			_mouseArea ctrlAddEventHandler ["MouseButtonDown", {["close", ctrlParent (_this select 0)] call (uiNamespace getVariable "BDA_fnc_mainMenu")}];
		};

		diag_log "[BDA] mainMenu: ready";
	};

	case "open": {
		private _display = _arg;
		private _current = _display getVariable ["BDA_region", ""];
		if (_current isEqualTo "") then {
			_display setVariable ["BDA_region", "open"];
		};
		if (!isNil {uiNamespace getVariable "RscDisplayMain_script"}) then {
			[_display] call {
				with uiNamespace do {
					["menuClear", [_this select 0, 0], ""] call RscDisplayMain_script;
				};
			};
		};
		["layout", _display] call _fnc;
	};

	case "close": {
		private _display = _arg;
		_display setVariable ["BDA_region", ""];
		["layout", _display] call _fnc;
	};

	case "region": {
		private _display = findDisplay 0;
		private _current = _display getVariable ["BDA_region", ""];
		_display setVariable ["BDA_region", [_arg, "open"] select (_current isEqualTo _arg)];
		["layout", _display] call _fnc;
	};

	case "connect": {
		private _row = _servers select {(_x select 0) isEqualTo _arg};
		if (_row isEqualTo []) exitWith {
			diag_log format ["[BDA] mainMenu: unknown server %1", _arg];
		};
		(_row select 0) params ["", "", "_label", "_ip", "_port", "_pass"];
		diag_log format ["[BDA] mainMenu: connecting to %1:%2", _ip, _port];
		connectToServer [_ip, _port, _pass];
	};

	case "layout": {
		private _display = _arg;
		private _menu = _display getVariable ["BDA_menu", []];
		if (_menu isEqualTo []) exitWith {};
		_menu params ["_group", "_na", "_eu", "_ts", "_discord", "_website", "_subs"];

		private _region = _display getVariable ["BDA_region", ""];
		private _wasOpen = _display getVariable ["BDA_wasOpen", false];
		_display setVariable ["BDA_wasOpen", !(_region isEqualTo "")];

		// Dropping from the tab matches the vanilla menu speed; sub-lists are a bit quicker.
		private _time = [0.2, 0.15] select _wasOpen;

		private _groupPos = ctrlPosition _group;
		private _width = _groupPos select 2;
		private _rowH = 1.5 * (pixelH * pixelGrid * 2);
		private _btnH = _rowH - pixelH;

		if (_region isEqualTo "") exitWith {
			_groupPos set [3, 0];
			_group ctrlSetPosition _groupPos;
			_group ctrlCommit 0.2;
			[_display, _group] spawn {
				disableSerialization;
				params ["_display", "_group"];
				uiSleep 0.2;
				if ((_display getVariable ["BDA_region", ""]) isEqualTo "") then {
					_group ctrlShow false;
				};
			};
			{
				_x params ["", "_sub"];
				private _subPos = ctrlPosition _sub;
				_subPos set [3, 0];
				_sub ctrlSetPosition _subPos;
				_sub ctrlCommit 0.2;
			} forEach _subs;
		};

		// Rows snap into place on the first drop; only the outer group animates then.
		private _inner = [0, _time] select _wasOpen;
		private _y = 0;
		private _row = {
			params ["_ctrl"];
			_ctrl ctrlSetPosition [0, _y + pixelH, _width, _btnH];
			_ctrl ctrlCommit _inner;
			_y = _y + _rowH;
		};
		private _subList = {
			params ["_key"];
			{
				_x params ["_subKey", "_sub", "_fullH"];
				if (_subKey isEqualTo _key) then {
					private _h = [0, _fullH] select (_region isEqualTo _key);
					_sub ctrlSetPosition [0, _y, _width, _h];
					_sub ctrlCommit _inner;
					_y = _y + _h;
				};
			} forEach _subs;
		};

		[_na] call _row;
		["na"] call _subList;
		[_eu] call _row;
		["eu"] call _subList;
		[_ts] call _row;
		[_discord] call _row;
		[_website] call _row;

		_group ctrlShow true;
		_groupPos set [3, _y + pixelH];
		_group ctrlSetPosition _groupPos;
		_group ctrlCommit _time;
	};
};
