//
//		Name: BDA_fn_medicCheck.sqf
//		Author: Wallace
//		Description: Trait check and assignment for medic / engineer roles.
//
//		[this] call BDA_fnc_medicCheck

if (isNull _this) exitWith {
	diag_log "[BDA] medicCheck requires an object as _this.";
};

private _object = _this;

_object addAction ["----------Checks----------", {}];
_object addAction ["Check Trait Permissions", {
	private _med = player getVariable ["ace_medical_medicclass", 0];
	private _eng = player getVariable ["ace_engineer_engineerclass", 0];
	private _eod = player getVariable ["ace_isEOD", false];

	private _medLevel = switch (_med) do {
		case 1: { "Medic" };
		case 2: { "Doctor" };
		default { "None" };
	};

	private _engLevel = switch (_eng) do {
		case 1: { "Engineer" };
		case 2: { "Adv. Engineer" };
		default { "None" };
	};

	private _eodLevel = if (_eod) then { "EOD" } else { "None" };

	hint parseText format [
		"<t size='1.5' underline='true' font='PuristaBold' color='#ededed'>Trait Report</t><br/><br/><t size='1' font='PuristaMedium'>Medic Lvl: %1<br/><br/>Engineer Lvl: %2<br/><br/>EOD Lvl: %3",
		_medLevel,
		_engLevel,
		_eodLevel
	];
}];

_object addAction ["----------Perms----------", {}];
_object addAction [
	"<img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca'/> Become a Doctor",
	{
		player setUnitTrait ["Medic", true];
		player setVariable ["ace_medical_medicclass", 2, true];
		["You have now been assigned a Doctor!", "success", 2] call BDA_fnc_notify;
	}
];
_object addAction [
	"Become an Engineer",
	{
		player setUnitTrait ["explosiveSpecialist", true];
		player setVariable ["ace_isEngineer", 2, true];
		player setVariable ["ace_isEOD", true, true];
		player setVariable ["ace_engineer_engineerclass", 2, true];
		["You have now been assigned an Engineer!", "success", 2] call BDA_fnc_notify;
	}
];
