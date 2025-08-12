//
//		Name: BDA_fn_vehSupply.sqf
//		Author: Wallace & Rib
//		Description: does logistics for pilots without the necessity for vehicles (ammo, fuel, repairs etc).
//      Example3: [variable] call BDA_fnc_Rearm/Refuel/Repair;
//      Example2: this addAction ["Repair Vehicle", call BDA_fnc_VehRepair];

BDA_VehRepair = {
    _veh = nearestObjects [player, ["Air","Car","Tank","Plane","Ship"], 50] select 0; ["Repairing...", 15, {!isEngineOn veh;}, {hint "Repairing Complete";veh setDamage 0;}, {hint "Repairing Aborted";}] call CBA_fnc_progressBar;
};