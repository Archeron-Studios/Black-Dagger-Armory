class cfgPatches {
    requiredAddons[]={
        "OPTRE_Vehicles"
        "O_1ITA"
    };
    requiredVersion=0.1;
    units[]={
        "BDA_1ITA_M412_IFV",
        "BDA_1ITA_M413_MGS"
    };
    weapons[]={};
};

class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles {
    class Car;
	class Car_F: Car {
		class NewTurret;
		class Sounds;
		class HitPoints {
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F {};
    class APC_Wheeled_01_base_F: Wheeled_APC_F {
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
				class ViewGunner;
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CargoTurret;
	};
    class OPTRE_M413_base;
    class OPTRE_M412_IFV_UNSC;
    class OPTRE_M413_MGS_UNSC;

    class BDA_1ITA_M412_IFV: OPTRE_M412_IFV_UNSC {
        scope = 2;
        scopeAuthor = 2;
        author = "Rib";
        displayName = "M412 Bison IFV";
        hiddenSelectionsTextures[]= {
			"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
    };

    class BDA_1ITA_M413_MGS: OPTRE_M413_MGS_UNSC {
        scope = 2;
        scopeAuthor = 2;
        author = "Rib";
        displayName = "M413 Bison MGS";
        hiddenSelectionsTextures[]= {
			"OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
			"OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
		};
    };

};