disableSerialization;

private ["_control","_arrayPosition","_podClassname"];

_control = (_this select 0) select 0;
_arrayPosition = _this select 1;
_spelican = Splits_PelicanLoadSupplyPods_Menu_PelicanObject;

_podArray = (_spelican getVariable ["Splits_Pelican_AttachedToVehiclesEffect",[]]); // array of vehicles attached to pelican.
_podClassname = if (count _podArray >= _arrayPosition + 1) then {(typeOf (_podArray select _arrayPosition))} else {""};

{
	_i = _control lbAdd (getText (configfile >> "CfgVehicles" >> "Module_OPTRE_PelicanSupplyDrop" >> "Arguments" >> "box1" >> "values" >> _x >> "name"));
	_control lbSetData [_i, (getText (configfile >> "CfgVehicles" >> "Module_OPTRE_PelicanSupplyDrop" >> "Arguments" >> "box2" >> "values" >> _x >> "value"))];
	if (_podClassname == (getText (configfile >> "CfgVehicles" >> "Module_OPTRE_PelicanSupplyDrop" >> "Arguments" >> "box2" >> "values" >> _x >> "value"))) then {_control lbSetCurSel _i;};
} forEach ((configfile >> "CfgVehicles" >> "Module_OPTRE_PelicanSupplyDrop" >> "Arguments" >> "box1" >> "values") call BIS_fnc_getCfgSubClasses);

if ( (isNil "_podClassname") OR (_podClassname == "none") OR (_podClassname == "") ) then {
	_control lbSetCurSel 0;
	((findDisplay 10293) displayCtrl (_arrayPosition + 1)) ctrlSetTextColor [0,0,0,0.9];
} else {
	((findDisplay 10293) displayCtrl (_arrayPosition + 1)) ctrlSetTextColor [1,1,1,1];
};
