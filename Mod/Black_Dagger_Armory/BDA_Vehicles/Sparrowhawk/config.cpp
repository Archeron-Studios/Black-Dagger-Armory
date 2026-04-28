class CfgPatches {
	class BDA_Vehicles {
		author = "Black Dagger Development Crew";
		units[]= {
			"BDA_AV22_Sparrowhawk_B"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"A3_Drones_F",
			"OPTRE_Core",
			"BDA_Core",
			"B_BDCUNSC",
			"Splits_Functions",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Sparrowhawk",
			"ace_interaction",
			"BDA_Weapons"
		};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponCloudsMGun;

class CfgVehicles {
	class Helicopter {
		class ACE_Actions;
		class ACE_SelfActions;
	};
	class Helicopter_Base_F: Helicopter {
		class Turrets;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Reflectors {
			class Right;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F {
		class Turrets: Turrets {
			class CopilotTurret;
		};
		class HitPoints: HitPoints {
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class CargoTurret;
		class Components;
		class Reflectors {
			class Right;
		};
	};
	class OPTRE_AV22_Sparrowhawk_Base: Helicopter_Base_H {
        class AnimationSources: AnimationSources {};
        class Components: Components {};
        class Hitpoints: Hitpoints {};
        class Reflectors: Reflectors {};
        class ViewPilot: ViewPilot {};
        class Viewoptics: Viewoptics {};
        class Turrets: Turrets {};
        class Damage;
        class Exhausts;
        class MFD;
        class pilotCamera;
        class Sounds;
    };
    class OPTRE_AV22_Sparrowhawk: OPTRE_AV22_Sparrowhawk_Base {
        class Turrets: Turrets {};
    };
    class OPTRE_AV22C_Sparrowhawk: OPTRE_AV22_Sparrowhawk {
        class Turrets: Turrets {};
    };

    class BDA_AV22_Sparrowhawk: OPTRE_AV22C_Sparrowhawk { 
        dlc = "BDA";
        author = "Rib";
		faction = "B_BDCUNSC";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
        displayName = "AV-22C Sparrowhawk";
        crew = "B_BDA_Pilot";

        //TFAR Config
		tf_range = 50000;
		tf_isolatedAmount = 0.45;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_hasRadio = 1;
		enableRadio = 1;

        hiddenSelections[] = {
            "camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"camo11",
			"camo12",
			"camo13",
			"attach_noseLaser",
			"attach_CannonHeavy",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
        };
        hiddenSelectionsTextures[] = {
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa",
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_SPLASER_CO.paa",
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_CANNON_CO.paa",
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_HCANNON_CO.paa",
			"\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
			"\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa"
		};
		weapons[] = {
			"OPTRE_MISRIAH_Cannon",
			"CMFlareLauncher"
		};
		magazines[] = {
			"OPTRE_2500Rnd_50mm_HE2",
			"OPTRE_2500Rnd_50mm_APFSDS",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine"
		};

        class Turrets: Turrets {
			class CopilotTurret: CopilotTurret {
				weapons[] = {
					"OPTRE_M230",
					"Laserdesignator_mounted"
				};
				magazines[] = {
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
                    "OPTRE_100Rnd_50mm_APFSDS",
					"Laserbatteries"
				};
			};
		};

        class UserActions {
            class FullAirbrakeEngage {
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 60)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn BDA_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=90;
			};
			class HalfAirbrakeEngage {
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 380)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn BDA_fnc_HalfAirbrakeEngage";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=91;
			};
			class Thruster400Engage {
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn BDA_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=92;
			};
			class Thruster400Disengage {
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn BDA_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=93;
			};
			class Afterburnerss600Engage {
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn BDA_fnc_Afterburners600Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=94;
			};
			class Afterburners600Disengage {
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn BDA_fnc_Afterburners600Disengage";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=95;
			};
        };

        class textureSources {
            class black {
                displayName = "Black";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_SPLASER_CO.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_CANNON_CO.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_HCANNON_CO.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa", 
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa"
                };
            };

        };

        
    };
    

};

class cfgMods {
	author="Rib";
	timepacked="120028042026";
};

/*
figure out how the decals and interiors work (light panels)
*/