//
//		Name: BDA_fn_vehSupply.sqf
//		Author: Wallace & Rib
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//                                                                                                                                                                                          
//      Example3: call BDA_fnc_Rearm/Refuel/Repair;

BDA_VehRefuel = {
    _veh = nearestObjects [player, ["Air","Car","Tank","Plane"], 50] select 0; ["Refueling...", 5, {!isEngineOn veh;}, {hint "Refueling Complete";veh setFuel 1;}, {hint "Refueling Aborted";}] call CBA_fnc_progressBar;
};