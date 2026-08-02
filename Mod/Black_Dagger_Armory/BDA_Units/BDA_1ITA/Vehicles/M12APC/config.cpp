class cfgPatches {
     class BDA_1ITA_M12APC {
        requiredAddons[]={
            "OPTRE_Vehicles",
			"BDA_1ITA"
        };
        requiredVersion=0.1;
        units[]={
			"BDA_1ITA_M12_APC",
            "BDA_1ITA_M813_TT",
            "BDA_1ITA_M12_LRV",
			"BDA_1ITA_M12A1_LRV"
        };
        weapons[]={};
    };
};

class CfgVehicles {
    class landVehicle;
    class Car: LandVehicle {
        class NewTurret;
    };
    class Car_F: Car {
        class AnimationSources {
			class HitLFWheel;
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class Gatling;
			class Gatling_flash;
		};
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
			};
		};
		class HitPoints {
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
		class EventHandlers;
    };

    class OPTRE_M12_Base; //ref
    class OPTRE_M12_FAV_APC;
    class OPTRE_M813_TT;
    class OPTRE_M12_LRV;
    class OPTRE_M12A1_LRV;

    class BDA_1ITA_M12_APC: OPTRE_M12_FAV_APC { //APC Hog
        author = "Rib";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12 APC Warthog";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Vehicle";
		side = 0;
        crew = "O_1ITA_CombatCrewman";
        typicalCargo[] = {
			"O_1ITA_Rifleman"
		};
        hiddenSelectionsTextures[] = {
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\transp_lopo_night_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_Hog_APC.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_decals_ca.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa"
		};
    };

    class BDA_1ITA_M813_TT: OPTRE_M813_TT { //TT Hog
        author = "Rib";
        scope = 2;
        scopeCurator = 2;
        displayName = "M813 Troop Transport Warthog";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Vehicle";
		side = 0;
        crew = "O_1ITA_CombatCrewman";
        typicalCargo[] = {
			"O_1ITA_Rifleman"
		};
        hiddenSelectionsTextures[] = {
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\transp_lopo_night_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_decals_ca.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa"
		};
    };

    class BDA_1ITA_M12_LRV: OPTRE_M12_LRV { //MG Hog
        author = "Rib";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12 LRV (MG) Warthog";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Vehicle";
		side = 0;
        crew = "O_1ITA_CombatCrewman";
        typicalCargo[] = {
			"O_1ITA_Rifleman"
		};
        hiddenSelectionsTextures[] = {
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_extupper_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_turret_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_decals_ca.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
    };

    class BDA_1ITA_M12A1_LRV: OPTRE_M12A1_LRV { //AT Hog
        author = "Rib";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12A1 LRV (AT) Warthog";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Vehicle";
		side = 0;
        crew = "O_1ITA_CombatCrewman";
        typicalCargo[] = {
			"O_1ITA_Rifleman"
		};
        hiddenSelectionsTextures[] = {
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_extupper_co.paa",
            "\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_turret_co.paa",
            "\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_decals_ca.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\M12APC\Data\ITA_M12_interior_co.paa",
            "\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
            "\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
            "\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
        };
    };

};
