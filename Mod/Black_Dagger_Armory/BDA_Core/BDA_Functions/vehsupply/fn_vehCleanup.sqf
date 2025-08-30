//
//		Name: BDA_fn_vehCleanup.sqf
//		Author: Wallace & Rib
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//                                                                                                                                                                                          
//      Exmaple1: this addAction ["Cleanup Vehicles", call BDA_fnc_vehCleanup];    

_marker = _this select 0;
_markerLoc = getPosATL marker;

BDA_Cleanup = {
    _veh = { deleteVehicle _x; } forEach nearestObjects [_marker, ["Air","Car","Tank","Plane","Ship"],150] select 0;
    systemChat format ["Removed Closest Vehicle..."];
};