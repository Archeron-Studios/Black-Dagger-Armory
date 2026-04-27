class CfgPatches {
    class BDA_Props 
    {
        name="Project Archeron - Props";
		author="Project Archeron Team";
		requiredVersion=0.1;
		requiredAddons[]={
            "BDA_Core",
            "B_BDCUNSC",
            "CBA_Main",
            "Extended_Eventhandlers",
            "A3_Supplies_F_Heli",
            "OPTRE_Misc_Crates",
            "ace_interaction",
            "OPTRE_Weapons",
            "OPTRE_Weapons_MG",
            "OPTRE_Weapons_Pistol",
            "OPTRE_Weapons_Turrets",
            "OPTRE_FC_Weapons",
            "TCF_WEAPONRY",
            "OPTRE_Modules"
        };
		units[]={
            "BDA_Ammo_SupplyPod",
            "BDA_Medical_SupplyPod",
            "BDA_Ammo_Pioneer_SupplyPod",
            "BDA_Rearm",
            "BDA_Repair",
            "BDA_Refuel",
            "PA_Can_B",
            "BDA_Spawn_Console_air",
            "BDA_Spawn_Console_ground"
        };
		weapons[]={};
    };
};

class CfgVehicles {
    class Thing;
    class OPTRE_Ammo_SupplyPod_Empty;
    class OPTRE_Ammo_SupplyPod_Medical;
    class B_Slingload_01_Ammo_F;
    class B_Slingload_01_Fuel_F;
    class B_Slingload_01_Repair_F;
    class OPTRE_RS_ConsoleCorvette_SysGreen;

    class PA_Can_B: Thing {
        displayName = "Can [Bepis]";
        scope = 2;
        model = "BDA_Ext\BDA_Props\can1.p3d";
        faction = "B_BDCUNSC";
        editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Props";
        armor = 20;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionstextures[] = {"BDA_Ext\BDA_Props\data\can_co.paa"};
        class DestructionEffects {};
    };

    class BDA_Ammo_SupplyPod: OPTRE_Ammo_SupplyPod_Empty {
        dlc = "BDA";
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Props";
        displayName = "[BDA] Supply Pod (Ammo)";
        transportMaxWeapons = 100;
		transportMaxMagazines = 1000;
		maximumLoad = 20000;
		supplyRadius = 2.000000;
		armor = 15000;
        class TransportMagazines {};
        class TransportWeapons {};
		class TransportItems {
            class xx_ACE_M26_Clacker {
                name = "ACE_M26_Clacker";
                count = 3;
            };
            class xx_OPTRE_M7 {
                name = "OPTRE_M7";
                count = 2;
            };
            class xx_DMNS_M96_LAW {
                name = "DMNS_M96_LAW";
                count = 5;
            };
            class xx_BDA_RifleBaseAR {
                name = "BDA_RifleBaseAR";
                count = 4;
            };
            class xx_1Rnd_HE_Grenade_shell {
                name = "1Rnd_HE_Grenade_shell";
                count = 100;
            };
            class xx_OPTRE_12Rnd_8Gauge_Slugs {
                name = "OPTRE_12Rnd_8Gauge_Slugs";
                count = 30;
            };
            class xx_OPTRE_4Rnd_145x114_APFSDS_Mag {
                name = "OPTRE_4Rnd_145x114_APFSDS_Mag";
                count = 60;
            };
            class xx_OPTRE_4Rnd_145x114_APFSDS_Mag_D {
                name = "OPTRE_4Rnd_145x114_APFSDS_Mag_D";
                count = 60;
            };
            class xx_OPTRE_M41_Twin_HEAT_G {
                name = "OPTRE_M41_Twin_HEAT_G";
                count = 20;
            };
            class xx_OPTRE_M9_Frag {
                name = "OPTRE_M9_Frag";
                count = 20;
            };
            class xx_C12_Remote_Mag {
                name = "C12_Remote_Mag";
                count = 8;
            };
            class xx_C7_Remote_Mag {
                name = "C7_Remote_Mag";
                count = 16;
            };
            class xx_OPTRE_M41_Twin_HEAT_SACLOS {
                name = "OPTRE_M41_Twin_HEAT_SACLOS";
                count = 20;
            };
            class xx_OPTRE_1Rnd_Smoke_Grenade_shell {
                name = "OPTRE_1Rnd_Smoke_Grenade_shell";
                count = 20;
            };
            class xx_OPTRE_1Rnd_SmokeRed_Grenade_shell {
                name = "OPTRE_1Rnd_SmokeRed_Grenade_shell";
                count = 10;
            };
            class xx_OPTRE_1Rnd_SmokeBlue_Grenade_shell {
                name = "OPTRE_1Rnd_SmokeBlue_Grenade_shell";
                count = 15;
            };
            class xx_OPTRE_M2_Smoke_Blue {
                name = "OPTRE_M2_Smoke_Blue";
                count = 15;
            };
            class xx_OPTRE_M2_Smoke_Red {
                name = "OPTRE_M2_Smoke_Red";
                count = 10;
            };
            class xx_OPTRE_SpLaser_Battery_Launcher {
                name = "OPTRE_SpLaser_Battery_Launcher";
                count = 6;
            };
            class xx_ACE_HuntIR_M203 {
                name = "ACE_HuntIR_M203";
                count = 20;
            };
            class xx_ACE_40mm_Flare_white {
                name = "ACE_40mm_Flare_white";
                count = 20;
            };
            class xx_3Rnd_HE_Grenade_shell {
                name = "3Rnd_HE_Grenade_shell";
                count = 60;
            };
            class xx_TCF_36Rnd_95x40_Mag_JHPT {
                name = "TCF_36Rnd_95x40_Mag_JHPT";
                count = 60;
            };
            class xx_TCF_15Rnd_762x51_Mag_JHPT {
                name = "TCF_15Rnd_762x51_Mag_JHPT";
                count = 60;
            };
            class xx_OPTRE_M2_Smoke {
                name = "OPTRE_M2_Smoke";
                count = 25;
            };
            class xx_TCF_400Rnd_762x51_Box_APT {
                name = "TCF_400Rnd_762x51_Box_APT";
                count = 10;
            };
            class xx_OPTRE_60Rnd_762x51_Mag_Tracer {
                name = "OPTRE_60Rnd_762x51_Mag_Tracer";
                count = 60;
            };
            class xx_OPTRE_15Rnd_762x51_Mag_Tracer {
                name = "OPTRE_15Rnd_762x51_Mag_Tracer";
                count = 60;
            };
            class xx_SmokeShellGreen {
                name = "SmokeShellGreen";
                count = 10;
            };
            class xx_SmokeShellPurple {
                name = "SmokeShellPurple";
                count = 10;
            };
            class xx_UGL_FlareGreen_F {
                name = "UGL_FlareGreen_F";
                count = 5;
            };
            class xx_UGL_FlareRed_F {
                name = "UGL_FlareRed_F";
                count = 5;
            };
            class xx_UGL_FlareYellow_F {
                name = "UGL_FlareYellow_F";
                count = 5;
            };
            class xx_3Rnd_Smoke_Grenade_shell {
                name = "3Rnd_Smoke_Grenade_shell";
                count = 10;
            };
            class xx_3Rnd_SmokeRed_Grenade_shell {
                name = "3Rnd_SmokeRed_Grenade_shell";
                count = 5;
            };
            class xx_3Rnd_SmokeBlue_Grenade_shell {
                name = "3Rnd_SmokeBlue_Grenade_shell";
                count = 10;
            };
            class xx_ACE_40mm_Flare_red {
                name = "ACE_40mm_Flare_red";
                count = 10;
            };
            class xx_ACE_40mm_Flare_green {
                name = "ACE_40mm_Flare_green";
                count = 10;
            };
            class xx_OPTRE_3Rnd_Smoke_Grenade_shell {
                name = "OPTRE_3Rnd_Smoke_Grenade_shell";
                count = 10;
            };
            class xx_OPTRE_3Rnd_SmokeRed_Grenade_shell {
                name = "OPTRE_3Rnd_SmokeRed_Grenade_shell";
                count = 5;
            };
            class xx_OPTRE_3Rnd_SmokeBlue_Grenade_shell {
                name = "OPTRE_3Rnd_SmokeBlue_Grenade_shell";
                count = 10;
            };
            class xx_ATMine_Range_Mag {
                name = "ATMine_Range_Mag";
                count = 12;
            };
            class xx_1Rnd_Smoke_Grenade_shell {
                name = "1Rnd_Smoke_Grenade_shell";
                count = 20;
            };
            class xx_1Rnd_SmokeRed_Grenade_shell {
                name = "1Rnd_SmokeRed_Grenade_shell";
                count = 5;
            };
            class xx_1Rnd_SmokeBlue_Grenade_shell {
                name = "1Rnd_SmokeBlue_Grenade_shell";
                count = 10;
            };
            class xx_OPTRE_12Rnd_8Gauge_Pellets {
                name = "OPTRE_12Rnd_8Gauge_Pellets";
                count = 30;
            };
            class xx_TCF_60Rnd_762x51_Mag_JHPT {
                name = "TCF_60Rnd_762x51_Mag_JHPT";
                count = 60;
            };
            class xx_OPTRE_200Rnd_95x40_Box_Tracer_Yellow {
                name = "OPTRE_200Rnd_95x40_Box_Tracer_Yellow";
                count = 25;
            };
            class xx_TCF_200Rnd_95x40_Box_JHPT {
                name = "TCF_200Rnd_95x40_Box_JHPT";
                count = 25;
            };
            class xx_TCF_60Rnd_5x23mm_Mag_HVT {
                name = "TCF_60Rnd_5x23mm_Mag_HVT";
                count = 20;
            };
            class xx_TCF_60Rnd_5x23mm_Mag_JHPT {
                name = "TCF_60Rnd_5x23mm_Mag_JHPT";
                count = 20;
            };
            class xx_OPTRE_36Rnd_95x40_Mag_Tracer {
                name = "OPTRE_36Rnd_95x40_Mag_Tracer";
                count = 60;
            };
            class xx_APERSMineDispenser_Mag {
                name = "APERSMineDispenser_Mag";
                count = 18;
            };
            class xx_TCF_6Rnd_8Gauge_Beanbag {
                name = "TCF_6Rnd_8Gauge_Beanbag";
                count = 5;
            };
            class xx_OPTRE_12Rnd_127x40_Mag_Tracer {
                name = "OPTRE_12Rnd_127x40_Mag_Tracer";
                count = 20;
            };
            class xx_Pike_MiniMissileUGL {
                name = "Pike_MiniMissileUGL";
                count = 20;
            };
            class xx_Pike_MiniMissileATUGL {
                name = "Pike_MiniMissileATUGL";
                count = 20;
            };
		};
    };

    class BDA_Medical_SupplyPod: OPTRE_Ammo_SupplyPod_Medical {
        dlc = "BDA";
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Props";
        displayName = "[BDA] Supply Pod (Medical)";
		maximumLoad = 10000;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			class xx_ACE_fieldDressing {
                name = "ACE_fieldDressing";
                count = 50;
            };
            class xx_ACE_ElasticBandage {
                name = "ACE_elasticBandage";
                count = 200;
            };
            class xx_ACE_packingBandage {
                name = "ACE_packingBandage";
                count = 200;
            };
            class xx_ACE_quikclot {
                name = "ACE_Quikclot";
                count = 50;
            };
            class xx_ACE_Epinephrine {
                name = "ACE_Epinephrine";
                count = 12;
            };
            class xx_ACE_Morphine {
                name = "ACE_Morphine";
                count = 12;
            };
            class xx_ACE_Painkillers {
                name = "ACE_Painkiller";
                count = 6;
            };
            class xx_ACE_SalineIV {
                name = "ACE_SalineIV";
                count = 20;
            };
            class xx_ACE_SalineIV_500 {
                name = "ACE_SalineIV_500";
                count = 25;
            };
            class xx_ACE_SalineIV_250 {
                name = "ACE_SalineIV_250";
                count = 25;
            };
            class xx_ACE_Splint {
                name = "ACE_Splint";
                count = 20;
            };
            class xx_ACE_Tourniquet {
                name = "ACE_tourniquet";
                count = 20;
            };
            class xx_ACE_SurgicalKit {
                name = "ACE_surgicalKit";
                count = 1;
            };
            class xx_OPTRE_Bubble_Shield {
                name = "OPTRE_FC_BubbleShield";
                count = 1;
            };
		};
    };

    class BDA_Ammo_Pioneer_SupplyPod: OPTRE_Ammo_SupplyPod_Empty {
        dlc = "BDA";
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_Props";
        displayName = "[BDA] Supply Pod (Pioneer)";
        transportMaxWeapons = 100;
		transportMaxMagazines = 1000;
        transportMaxBackpacks = 10;
		maximumLoad = 20000;
		supplyRadius = 2.000000;
		armor = 15000;
        class TransportBackpacks {};
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
           class _xx_ACE_Fortify {
                name = "ACE_Fortify";
                count = 2;
            };
            class _xx_TCF_2Rnd_50x137_PEN {
                name = "TCF_2Rnd_50x137_PEN";
                count = 8;
            };
            class _xx_TCF_2Rnd_50x137_THERMO {
                name = "TCF_2Rnd_50x137_THERMO";
                count = 8;
            };
            class _xx_TCF_2Rnd_50x137_HEAT {
                name = "TCF_2Rnd_50x137_HEAT";
                count = 8;
            };
            class _xx_OPTRE_36Rnd_95x40_Mag {
                name = "OPTRE_36Rnd_95x40_Mag";
                count = 40;
            };
            class _xx_OPTRE_60Rnd_762x51_Mag {
                name = "OPTRE_60Rnd_762x51_Mag";
                count = 40;
            };
            class _xx_PHEN_HALO_Flamethrower_Mag_300Rnd_M7057 {
                name = "PHEN_HALO_Flamethrower_Mag_300Rnd_M7057";
                count = 8;
            };
            class _xx_ACE_M84 {
                name = "ACE_M84";
                count = 20;
            };
            class _xx_OPTRE_c7_remote_throwable_sticky_mag {
                name = "OPTRE_c7_remote_throwable_sticky_mag";
                count = 20;
            };
            class _xx_OPTRE_M37_HMG_Bag_Weapon_Single {
                name = "OPTRE_M37_HMG_Bag_Weapon_Single";
                count = 3;
            };
            class _xx_TCF_M57_Pilum_B {
                name = "TCF_M57_Pilum_B";
                count = 1;
            };
        };
    };
    
    class BDA_Rearm: B_Slingload_01_Ammo_F {
        scope = 2;
        scopeCurator = 2;
        editorCategory = "BDA_EC_BlackDagger";
        editorSubcategory = "BDA_ESC_Props";
        author = "Rib/Apollo";
        destrType = "DestructNo";
        displayName = "[BDA] Vehicle Rearm";
        ace_rearm_defaultSupply = 500000;
        maximumLoad = 9999999;
        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;
        /*class EventHandlers {
            init = "this addaction['Rearm Vehicle', {veh = nearestObjects [player, ['Air','Car','Tank','Plane'], 50] select 0; ['Rearming...', 5, {!isEngineOn veh; !(isNull objectParent player);}, {hint 'Rearming Complete';veh setVehicleAmmodef 1;veh setVehicleAmmo 1;}, {hint 'Rearming Aborted';}] call CBA_fnc_progressBar;}];";
        };*/
        class UserActions {
            class A3_BD_Rearm {
                displayName = "Rearm Vehicle";
                radius = 40;
                condition = "!(isNull objectParent player)";
                statement = "call BDA_fnc_VehRearm";
                onlyforplayer = 0;
                priority = -900;
                position = "Camera";
            };
        };
    };
    
    class BDA_Refuel: B_Slingload_01_Fuel_F {
        scope = 2;
        scopeCurator = 2;
        editorCategory = "BDA_EC_BlackDagger";
        editorSubcategory = "BDA_ESC_Props";
        author = "Rib/Apollo";
        destrType = "DestructNo";
        displayName = "[BDA] Vehicle Refuel";
        maximumLoad = 9999999;
        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;
        ace_refuel_fuelCargo = 500000;
        ace_refuel_hooks[] = {{0.3,-1,-0.6},{0.7,-1,-0.6}};
        ace_refuel_flowRate = 2;
        ace_refuel_canReceive = 1;
        /*class EventHandlers {
            init = "this addaction['Refuel Vehicle', {veh = nearestObjects [player, ['Air','Car','Tank','Plane'], 50] select 0; ['Refueling...', 5, {!isEngineOn veh; !(isNull objectParent player);}, {hint 'Refueling Complete';veh setFuel 1;}, {hint 'Refueling Aborted';}] call CBA_fnc_progressBar;}];";
        };*/
        class UserActions {
            class A3_BD_Refuel {
                displayName = "Refuel Vehicle";
                radius = 40;
                condition = "!(isNull objectParent player)";
                statement = "call BDA_fnc_VehRefuel";
                onlyforplayer = 0;
                priority = -900;
                position = "Camera";
            };
        };
    };

    class BDA_Repair: B_Slingload_01_Repair_F {
        scope = 2;
        scopeCurator = 2;
        editorCategory = "BDA_EC_BlackDagger";
        editorSubcategory = "BDA_ESC_Props";
        author = "Rib/Apollo";
        destrType = "DestructNo";
        displayName = "[BDA] Vehicle Repair";
        maximumLoad = 9999999;
        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;
        ace_repair_canRepair = 1;
        ace_repair_spareWheels = 16;
        ace_repair_spareTracks = 8;
        /*class EventHandlers {
            init = "this addaction['Repair Vehicle', {veh = nearestObjects [player, ['Air','Car','Tank','Plane'], 50] select 0; ['Repairing...', 5, {!isEngineOn veh; !(isNull objectParent player);}, {hint 'Repairing Complete';veh setDamage 0;}, {hint 'Repairing Aborted';}] call CBA_fnc_progressBar;}];";
        };*/
        class UserActions {
            class A3_BD_Repair {
                displayName = "Repair Vehicles";
                radius = 40;
                condition = "!(isNull objectParent player)";
                statement = "call BDA_fnc_VehRepair";
                onlyforplayer = 0;
                priority = -900;
                position = "Camera";
            };
        };
    };

    class BDA_Spawn_Console_air: OPTRE_RS_ConsoleCorvette_SysGreen {
        scope = 1;
        scopeCurator = 1;
        editorCategory = "BDA_EC_BlackDagger";
        editorSubcategory = "BDA_ESC_Props";
        author = "Rib";
        displayName = "Air Spawn Console";
    };
    
    class BDA_Spawn_Console_ground: BDA_Spawn_Console_air {
        displayName = "Ground Spawn Console";
    };
    
    /*OPTRE Pelican Supply Drop Module PATCH*/
    class Module_F;
    class Module_OPTRE_PelicanSupplyDrop: Module_F {
        class Arguments {
            class box1 {
                class values {
                    class bda_pod_ammo {
                        name = "[BDA] Supply Pod (Ammo)";
                        value = "BDA_Ammo_SupplyPod";
                    };

                    class bda_pod_medical {
                        name = "[BDA] Supply Pod (Medical)";
                        value = "BDA_Medical_SupplyPod";
                    };

                    class bda_pod_pioneer {
                        name = "[BDA] Supply Pod (Pioneer)";
                        value = "BDA_Ammo_Pioneer_SupplyPod";
                    };
                };
            };
        };
    };
};

class cfgMods {
	author="Rib";
	timepacked="210027042026";
};