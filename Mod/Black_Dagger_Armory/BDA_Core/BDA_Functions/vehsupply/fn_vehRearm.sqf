//
//		Name: BDA_fn_vehSupply.sqf
//		Author: Wallace & Rib
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//                                                                                                                                                                                          
//      Example: [variable] call BDA_fnc_Rearm/Refuel/Repair;
//      Example2: this addAction ["Rearm Vehicle", call BDA_fnc_VehRearm];

BDA_VehRearm = {
    _veh = nearestObjects [player, ["Air","Car","Tank","Plane","Ship"], 50] select 0; ["Rearming...", 15, {!isEngineOn veh;}, {hint "Rearming Complete";veh setVehicleAmmodef 1;veh setVehicleAmmo 1;}, {hint "Rearming Aborted";}] call CBA_fnc_progressBar;
};