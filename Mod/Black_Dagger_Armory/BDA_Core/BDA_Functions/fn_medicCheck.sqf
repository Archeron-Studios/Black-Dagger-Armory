//
//		Name: BDA_fn_medicCheck.sqf
//		Author: Wallace 
//		Description: Relatively simple system to check, add and remove ace doctor from yourself
//		
//		[]call BDA_fnc_medicCheck

this addAction ["----------Checks----------", ""];
this addAction ["Check Trait Permissions", "call BDA_checkPermissions"];
//this addAction ["Check Doctor Status", "call BDA_CheckMedStats"];
//this addAction ["Check Engineer Status", "call BDA_CheckEngStats"];
this addAction ["----------Perms----------", ""];
this addAction ["<img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca'/> Become a Doctor", "call BDA_GiveDoctor"];
this addAction ["Become a Engineer", "call BDA_GiveEngineer"];
this addAction ["<t color='#de1f1f'>[Debug]</t> Remove Doctor",  "call BDA_RemoveDoctor"];
this addAction ["<t color='#de1f1f'>[Debug]</t> Remove Engineer",  "call BDA_RemoveEngineer"];


// Mostly Using the default arma medic as a debug option and decent fucking variable (thanks ace yer shite)
BDA_checkPermissions = {
		//Checking all variables for given level
		_med = player getVariable "ace_medical_medicclass";
		_medLevel = "None";
		_eng = player getVariable "ace_engineer_engineerclass";
		_engLevel = "None";
		_eod = player getVariable "ace_isEOD";
		_eodLevel = "None";

		//Red - #ff0000
		//Green - #1aff00
		//white - #ededed

		switch (_med) do 
		{
			default {hint "None"};
			case 0: {_medLevel = "None"};
			case 1: {_medLevel = "Medic"};
			case 2: {_medLevel = "Doctor"};
		};
		switch (_eng) do 
		{
			default {hint "None"};
			case 0: {_engLevel = "None"};
			case 1: {_engLevel = "Engineer"};
			case 2: {_engLevel = "Adv. Engineer"};
		};
		if (_eod isEqualTo true) then {_eodLevel = "EOD"};
		
		statMsg = parseText format ["<t size='1.5' t underline='true' font='PuristaBold' t color='#ededed'>Trait Report</t><br/><br/><t size='1' font='PuristaMedium'>Medic Lvl: %1<br/><br/>Engineer Lvl: %2<br/><br/>EOD Lvl: %3", _medLevel,_engLevel,_eodLevel];
		hint statMsg;
};

BDA_CheckMedStats = {
	_getAMed = player getUnitTrait "Medic";
	//systemChat str _getAMed;
	if (_getAMed isEqualTo false) then 
	{
		["You are not a Doctor", "amber", 3] call BDA_fnc_notify;
	} else {
		["You are a Doctor", "success", 3] call BDA_fnc_notify;
	};
	
};

BDA_CheckEngStats = {
	_getAEng = player getUnitTrait "explosiveSpecialist";
	//systemChat str _getAMed;
	if (_getAEng isEqualTo false) then 
	{
		["You are not a Engineer", "amber", 3] call BDA_fnc_notify;
	} else {
		["You are a Engineer", "success", 3] call BDA_fnc_notify;
	};
	
};

BDA_GiveDoctor = {
	player setUnitTrait ["Medic",true];
	player setVariable ["ace_medical_medicclass", 2, true];
	["You have now been assigned a Doctor!", "success", 2] call BDA_fnc_notify;
};

BDA_RemoveDoctor = {
	player setUnitTrait ["Medic",false];
	player setVariable ["ace_medical_medicclass", 0, true];
	["You are no longer a Doctor", "error", 2] call BDA_fnc_notify;
};

BDA_GiveEngineer = {
	player setUnitTrait ["explosiveSpecialist",true]; 
	player setVariable ["ace_isEngineer", 2, true];
	player setVariable ["ace_isEOD", true];
	player setVariable ["ace_engineer_engineerclass", 2, true];
	["You have now been assigned a Engineer!", "success", 2] call BDA_fnc_notify;
};

BDA_RemoveEngineer = {
	player setUnitTrait ["explosiveSpecialist",false]; 
	player setVariable ["ace_isEngineer", 0, true];
	player setVariable ["ace_isEOD", false];
	player setVariable ["ace_engineer_engineerclass", 0, true];
	["You are no longer a Engineer!", "error", 2] call BDA_fnc_notify;
};
//