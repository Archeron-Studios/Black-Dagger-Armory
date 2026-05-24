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
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
			"\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa", 
			"\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
			"\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
			"#(argb,8,8,3)color(0,0,0,0,co)",
			"#(argb,8,8,3)color(0,0,0,0,co)"
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

		class ACE_SelfActions: ACE_SelfActions {
			class vehCamo {
				displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Black {
					displayName = "Black";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Black', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Black_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Black_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Black_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Black_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Desert', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Desert_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Desert_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Desert_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Desert_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Dune {
					displayName = "Dune";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Dune', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Dune_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Dune_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Dune_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Dune_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Frost {
					displayName = "Frost";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Frost', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Frost_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Frost_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Frost_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Frost_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Jungle {
					displayName = "Jungle";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Jungle', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Jungle_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Jungle_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Jungle_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Jungle_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Marine {
					displayName = "Marine";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Marine', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Marine_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Marine_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Marine_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Marine_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Tundra {
					displayName = "Tundra";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Tundra', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Tundra_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Tundra_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Tundra_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Tundra_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Urban {
					displayName = "Urban";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Urban', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Urban_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Urban_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Urban_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Urban_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
				class Woodland {
					displayName = "Woodland";
					class Base {
						displayName = "Base";
						statement = "['BDA_Sparrowhawk_Woodland', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal01 {
						displayName = "Decal 01";
						statement = "['BDA_Sparrowhawk_Woodland_Decal01', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal02 {
						displayName = "Decal 02";
						statement = "['BDA_Sparrowhawk_Woodland_Decal02', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal03 {
						displayName = "Decal 03";
						statement = "['BDA_Sparrowhawk_Woodland_Decal03', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
					class Decal04 {
						displayName = "Decal 04";
						statement = "['BDA_Sparrowhawk_Woodland_Decal04', 'BDA_AV22_Sparrowhawk'] call BDA_fnc_chgTex";
					};
				};
			};
		};

        class textureSources {
            class BDA_Sparrowhawk_Black {
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
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Black_Decal01 {
                displayName = "Black (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Black_Decal02 {
                displayName = "Black (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Black_Decal03 {
                displayName = "Black (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Black_Decal04 {
                displayName = "Black (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Desert {
                displayName = "Desert";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Desert_Decal01 {
                displayName = "Desert (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Desert_Decal02 {
                displayName = "Desert (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Desert_Decal03 {
                displayName = "Desert (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Desert_Decal04 {
                displayName = "Desert (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\desert\BDA_sparrowhawk_des_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Dune {
                displayName = "Dune";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Dune_Decal01 {
                displayName = "Dune (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Dune_Decal02 {
                displayName = "Dune (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Dune_Decal03 {
                displayName = "Dune (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Dune_Decal04 {
                displayName = "Dune (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\dune\BDA_sparrowhawk_dun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Frost {
                displayName = "Frost";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Frost_Decal01 {
                displayName = "Frost (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Frost_Decal02 {
                displayName = "Frost (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Frost_Decal03 {
                displayName = "Frost (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Frost_Decal04 {
                displayName = "Frost (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\frost\BDA_sparrowhawk_frs_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Jungle {
                displayName = "Jungle";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Jungle_Decal01 {
                displayName = "Jungle (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Jungle_Decal02 {
                displayName = "Jungle (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Jungle_Decal03 {
                displayName = "Jungle (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Jungle_Decal04 {
                displayName = "Jungle (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\jungle\BDA_sparrowhawk_jng_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Marine {
                displayName = "Marine";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Marine_Decal01 {
                displayName = "Marine (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Marine_Decal02 {
                displayName = "Marine (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Marine_Decal03 {
                displayName = "Marine (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Marine_Decal04 {
                displayName = "Marine (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\marine\BDA_sparrowhawk_mar_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Tundra {
                displayName = "Tundra";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Tundra_Decal01 {
                displayName = "Tundra (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Tundra_Decal02 {
                displayName = "Tundra (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Tundra_Decal03 {
                displayName = "Tundra (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Tundra_Decal04 {
                displayName = "Tundra (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\tundra\BDA_sparrowhawk_tun_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Urban {
                displayName = "Urban";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Urban_Decal01 {
                displayName = "Urban (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Urban_Decal02 {
                displayName = "Urban (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Urban_Decal03 {
                displayName = "Urban (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Urban_Decal04 {
                displayName = "Urban (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\urban\BDA_sparrowhawk_urb_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Woodland {
                displayName = "Woodland";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Woodland_Decal01 {
                displayName = "Woodland (Decal 01)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_01_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Woodland_Decal02 {
                displayName = "Woodland (Decal 02)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Woodland_Decal03 {
                displayName = "Woodland (Decal 03)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_03_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
            class BDA_Sparrowhawk_Woodland_Decal04 {
                displayName = "Woodland (Decal 04)";
                author = "Rib";
                textures[] = {
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_1_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_2_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_3_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_4_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_5_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_fcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_splaser_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\woodland\BDA_sparrowhawk_wdl_cannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_hcannon_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\bda_sparrowhawk_lights_co.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\BDA_sparrowhawk_glass_CA.paa",
                    "\BDA_Vehicles\data\sparrowhawk\decals\decal_04_ca.paa",
                    "#(argb,8,8,3)color(0,0,0,0,co)"
                };
            };
        };
        textureList[] = {
            "BDA_Sparrowhawk_Black", 1,
            "BDA_Sparrowhawk_Black_Decal01", 0,
            "BDA_Sparrowhawk_Black_Decal02", 0,
            "BDA_Sparrowhawk_Black_Decal03", 0,
            "BDA_Sparrowhawk_Black_Decal04", 0,
            "BDA_Sparrowhawk_Desert", 1,
            "BDA_Sparrowhawk_Desert_Decal01", 0,
            "BDA_Sparrowhawk_Desert_Decal02", 0,
            "BDA_Sparrowhawk_Desert_Decal03", 0,
            "BDA_Sparrowhawk_Desert_Decal04", 0,
            "BDA_Sparrowhawk_Dune", 1,
            "BDA_Sparrowhawk_Dune_Decal01", 0,
            "BDA_Sparrowhawk_Dune_Decal02", 0,
            "BDA_Sparrowhawk_Dune_Decal03", 0,
            "BDA_Sparrowhawk_Dune_Decal04", 0,
            "BDA_Sparrowhawk_Frost", 1,
            "BDA_Sparrowhawk_Frost_Decal01", 0,
            "BDA_Sparrowhawk_Frost_Decal02", 0,
            "BDA_Sparrowhawk_Frost_Decal03", 0,
            "BDA_Sparrowhawk_Frost_Decal04", 0,
            "BDA_Sparrowhawk_Jungle", 1,
            "BDA_Sparrowhawk_Jungle_Decal01", 0,
            "BDA_Sparrowhawk_Jungle_Decal02", 0,
            "BDA_Sparrowhawk_Jungle_Decal03", 0,
            "BDA_Sparrowhawk_Jungle_Decal04", 0,
            "BDA_Sparrowhawk_Marine", 1,
            "BDA_Sparrowhawk_Marine_Decal01", 0,
            "BDA_Sparrowhawk_Marine_Decal02", 0,
            "BDA_Sparrowhawk_Marine_Decal03", 0,
            "BDA_Sparrowhawk_Marine_Decal04", 0,
            "BDA_Sparrowhawk_Tundra", 1,
            "BDA_Sparrowhawk_Tundra_Decal01", 0,
            "BDA_Sparrowhawk_Tundra_Decal02", 0,
            "BDA_Sparrowhawk_Tundra_Decal03", 0,
            "BDA_Sparrowhawk_Tundra_Decal04", 0,
            "BDA_Sparrowhawk_Urban", 1,
            "BDA_Sparrowhawk_Urban_Decal01", 0,
            "BDA_Sparrowhawk_Urban_Decal02", 0,
            "BDA_Sparrowhawk_Urban_Decal03", 0,
            "BDA_Sparrowhawk_Urban_Decal04", 0,
            "BDA_Sparrowhawk_Woodland", 1,
            "BDA_Sparrowhawk_Woodland_Decal01", 0,
            "BDA_Sparrowhawk_Woodland_Decal02", 0,
            "BDA_Sparrowhawk_Woodland_Decal03", 0,
            "BDA_Sparrowhawk_Woodland_Decal04", 0,
        };

    };
    

};

class cfgMods {
	author="Rib";
	timepacked="120028042026";
};
