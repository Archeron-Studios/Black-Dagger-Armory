//
//		Name: BDA_fn_medicCheck.sqf
//		Author: Wallace
//		Description: Trait check and assignment for medic / engineer roles.
//		Adds ACE Interaction Menu actions and scroll-wheel fallback.
//
//		Object init (either form works):
//			call BDA_fnc_medicCheck
//			[this] call BDA_fnc_medicCheck

private _object = objNull;

if (!isNil "_this") then {
	if (_this isEqualType objNull) then {
		_object = _this;
	} else {
		if (_this isEqualType [] && {count _this > 0} && {(_this select 0) isEqualType objNull}) then {
			_object = _this select 0;
		};
	};
};

// Same init-field pattern as vehSupply / openLoadouts
if (isNull _object && {!isNil "this"} && {this isEqualType objNull}) then {
	_object = this;
};

if (isNull _object) exitWith {
	diag_log "[BDA] medicCheck requires an object. Use in object init: call BDA_fnc_medicCheck   or   [this] call BDA_fnc_medicCheck";
};

// Dedicated / headless: push to clients (JIP-safe)
if (!hasInterface) exitWith {
	[_object] remoteExecCall ["BDA_fnc_medicCheck", 0, _object];
};

if (_object getVariable ["BDA_medicCheck_added", false]) exitWith {};
_object setVariable ["BDA_medicCheck_added", true];

diag_log format ["[BDA] medicCheck actions added to %1 (%2)", _object, typeOf _object];

private _fnc_report = {
	private _med = player getVariable ["ace_medical_medicClass", 0];
	private _eng = player getVariable ["ace_isEngineer", 0];
	private _eod = player getVariable ["ACE_isEOD", false];

	if (_eng isEqualTo true) then { _eng = 1 };
	if (_eod isEqualTo 1) then { _eod = true };
	if !(_med in [0, 1, 2]) then { _med = 0 };
	if !(_eng in [0, 1, 2]) then { _eng = 0 };

	private _medName = ["None", "Medic", "Doctor"] select _med;
	private _engName = ["None", "Engineer", "Adv. Engineer"] select _eng;
	private _eodLevel = if (_eod) then { "1 (EOD)" } else { "0 (None)" };

	hint parseText format [
		"<t size='1.5' underline='true' font='PuristaBold' color='#ededed'>Trait Report</t><br/><br/><t size='1' font='PuristaMedium'>Medic Lvl: %1 (%2)<br/><br/>Engineer Lvl: %3 (%4)<br/><br/>EOD Lvl: %5",
		_med,
		_medName,
		_eng,
		_engName,
		_eodLevel
	];
};

private _condHasDoctor = {
	params ["", "_player"];
	(_player getVariable ["ace_medical_medicClass", 0]) isEqualTo 2
};
private _condNoDoctor = {
	params ["", "_player"];
	!((_player getVariable ["ace_medical_medicClass", 0]) isEqualTo 2)
};
private _condHasEngineer = {
	params ["", "_player"];
	(_player getVariable ["ace_isEngineer", 0]) isEqualTo 2
};
private _condNoEngineer = {
	params ["", "_player"];
	!((_player getVariable ["ace_isEngineer", 0]) isEqualTo 2)
};

// Scroll-wheel condition strings (evaluated each frame while near)
private _swNoDoctor = "!((player getVariable ['ace_medical_medicClass', 0]) isEqualTo 2)";
private _swHasDoctor = "(player getVariable ['ace_medical_medicClass', 0]) isEqualTo 2";
private _swNoEngineer = "!((player getVariable ['ace_isEngineer', 0]) isEqualTo 2)";
private _swHasEngineer = "(player getVariable ['ace_isEngineer', 0]) isEqualTo 2";

// Scroll-wheel
_object addAction [
	"<t color='#ededed'>Check Trait Permissions</t>",
	_fnc_report,
	nil,
	1.6,
	false,
	true,
	"",
	"true",
	8
];

_object addAction [
	"<t color='#7CFC00'><img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca'/> Become a Doctor</t>",
	{
		player setUnitTrait ["Medic", true];
		player setVariable ["ace_medical_medicClass", 2, true];
		["You have now been assigned a Doctor!", "success", 2] call BDA_fnc_notify;
	},
	nil,
	1.5,
	false,
	true,
	"",
	_swNoDoctor,
	8
];

_object addAction [
	"<t color='#FF6666'><img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca'/> Remove Doctor Permissions</t>",
	{
		player setUnitTrait ["Medic", false];
		player setVariable ["ace_medical_medicClass", 0, true];
		["Doctor permissions removed.", "warning", 2] call BDA_fnc_notify;
	},
	nil,
	1.5,
	false,
	true,
	"",
	_swHasDoctor,
	8
];

_object addAction [
	"<t color='#F0C040'>Become an Advanced Engineer</t>",
	{
		player setUnitTrait ["Engineer", true];
		player setUnitTrait ["explosiveSpecialist", true];
		player setVariable ["ace_isEngineer", 2, true];
		player setVariable ["ACE_isEOD", true, true];
		["You have now been assigned an Advanced Engineer!", "success", 2] call BDA_fnc_notify;
	},
	nil,
	1.4,
	false,
	true,
	"",
	_swNoEngineer,
	8
];

_object addAction [
	"<t color='#FF6666'>Remove Advanced Engineer Permissions</t>",
	{
		player setUnitTrait ["Engineer", false];
		player setUnitTrait ["explosiveSpecialist", false];
		player setVariable ["ace_isEngineer", 0, true];
		player setVariable ["ACE_isEOD", false, true];
		["Advanced Engineer permissions removed.", "warning", 2] call BDA_fnc_notify;
	},
	nil,
	1.4,
	false,
	true,
	"",
	_swHasEngineer,
	8
];

// ACE Interaction Menu
if (!isNil "ace_interact_menu_fnc_createAction") then {
	private _root = [
		"BDA_TraitStation",
		"Trait Station",
		"\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa",
		{},
		{true},
		{},
		[],
		{[0, 0, 0]},
		8
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, ["ACE_MainActions"], _root] call ace_interact_menu_fnc_addActionToObject;

	private _check = [
		"BDA_CheckTraits",
		"Check Trait Permissions",
		"",
		_fnc_report,
		{true},
		{},
		[],
		{[0, 0, 0]},
		8
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, ["ACE_MainActions", "BDA_TraitStation"], _check] call ace_interact_menu_fnc_addActionToObject;

	private _doctor = [
		"BDA_BecomeDoctor",
		"Become a Doctor",
		"\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa",
		{
			player setUnitTrait ["Medic", true];
			player setVariable ["ace_medical_medicClass", 2, true];
			["You have now been assigned a Doctor!", "success", 2] call BDA_fnc_notify;
		},
		_condNoDoctor,
		{},
		[],
		{[0, 0, 0]},
		8
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, ["ACE_MainActions", "BDA_TraitStation"], _doctor] call ace_interact_menu_fnc_addActionToObject;

	private _removeDoctor = [
		"BDA_RemoveDoctor",
		"Remove Doctor Permissions",
		"\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa",
		{
			player setUnitTrait ["Medic", false];
			player setVariable ["ace_medical_medicClass", 0, true];
			["Doctor permissions removed.", "warning", 2] call BDA_fnc_notify;
		},
		_condHasDoctor,
		{},
		[],
		{[0, 0, 0]},
		8
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, ["ACE_MainActions", "BDA_TraitStation"], _removeDoctor] call ace_interact_menu_fnc_addActionToObject;

	private _engineer = [
		"BDA_BecomeEngineer",
		"Become an Advanced Engineer",
		"",
		{
			player setUnitTrait ["Engineer", true];
			player setUnitTrait ["explosiveSpecialist", true];
			player setVariable ["ace_isEngineer", 2, true];
			player setVariable ["ACE_isEOD", true, true];
			["You have now been assigned an Advanced Engineer!", "success", 2] call BDA_fnc_notify;
		},
		_condNoEngineer,
		{},
		[],
		{[0, 0, 0]},
		8
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, ["ACE_MainActions", "BDA_TraitStation"], _engineer] call ace_interact_menu_fnc_addActionToObject;

	private _removeEngineer = [
		"BDA_RemoveEngineer",
		"Remove Advanced Engineer Permissions",
		"",
		{
			player setUnitTrait ["Engineer", false];
			player setUnitTrait ["explosiveSpecialist", false];
			player setVariable ["ace_isEngineer", 0, true];
			player setVariable ["ACE_isEOD", false, true];
			["Advanced Engineer permissions removed.", "warning", 2] call BDA_fnc_notify;
		},
		_condHasEngineer,
		{},
		[],
		{[0, 0, 0]},
		8
	] call ace_interact_menu_fnc_createAction;
	[_object, 0, ["ACE_MainActions", "BDA_TraitStation"], _removeEngineer] call ace_interact_menu_fnc_addActionToObject;
};
