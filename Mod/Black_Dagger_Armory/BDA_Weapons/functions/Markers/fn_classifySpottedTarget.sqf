/*
 * Returns a normalized threat label: Car, Truck, APC, Tank, Boat, Helicopter, Jet, Squad, or "".
 */

params [["_obj", objNull, [objNull]]];

if (isNull _obj) then {
	_obj = call BDA_fnc_getCachedSpottedTarget;
};

if (isNull _obj) then {
	_obj = call BDA_fnc_resolveSpottedTarget;
};

if (isNull _obj) exitWith { "" };

if (_obj isKindOf "Man") exitWith { "Squad" };

if (_obj isKindOf "Ship" || {_obj isKindOf "Ship_F"}) exitWith { "Boat" };

if (
	_obj isKindOf "APC"
	|| {_obj isKindOf "Wheeled_APC_F"}
	|| {_obj isKindOf "APC_Tracked_01_base_F"}
	|| {_obj isKindOf "APC_Tracked_02_base_F"}
	|| {_obj isKindOf "AFV_Wheeled_01_base_F"}
	|| {_obj isKindOf "LT_01_base_F"}
) exitWith { "APC" };

if (_obj isKindOf "Tank") exitWith { "Tank" };
if (_obj isKindOf "Plane") exitWith { "Jet" };
if (_obj isKindOf "Helicopter") exitWith { "Helicopter" };
if (_obj isKindOf "Truck_F") exitWith { "Truck" };

if (
	_obj isKindOf "Car"
	|| {_obj isKindOf "Motorcycle"}
	|| {_obj isKindOf "Quadbike_01_base_F"}
) exitWith { "Car" };

""
