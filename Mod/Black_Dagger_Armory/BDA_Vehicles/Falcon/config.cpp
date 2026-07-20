class CfgPatches {
	class BDA_Vehicles_Falcon {
		author = "Black Dagger Development Crew";
		units[] = {
			"BDA_UNSC_UH145A_Falcon2",
			"BDA_UNSC_MH145_Falcon",
			"BDA_UNSC_UH145S_Falcon"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"A3_Drones_F",
			"OPTRE_Core",
			"OPTRE_Vehicles_Air",
			"BDA_Core",
			"BDA_Weapons",
			"B_BDCUNSC",
			"ace_interaction",
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
			class MainTurret;
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
	class Heli_Light_01_Base_F: Helicopter_Base_H {};
	class OPTRE_Falcon_Base: Heli_Light_01_Base_F {};
    class OPTRE_Falcon_base_unarmed: OPTRE_Falcon_Base {};
    class OPTRE_falcon_base_medical: OPTRE_Falcon_base_unarmed {};
    class OPTRE_UNSC_falcon_medical: OPTRE_falcon_base_medical {};
	class OPTRE_UNSC_falcon: OPTRE_Falcon_base_unarmed {};
    class OPTRE_UNSC_falcon_S: OPTRE_Falcon_base {};
	class OPTRE_UNSC_UH_144_Falcon_DAP: OPTRE_UNSC_Falcon {};

    class BDA_UNSC_UH145A_Falcon2: OPTRE_UNSC_falcon_S {
		dlc = "BDA";
		author = "Rib";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_UH145A_Falcon2.jpg";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "B_BDCUNSC";
		displayName = "UH-145A Falcon";
		crew = "B_BDA_Pilot";
		armor = 350;
		cost = 500;
		maximumLoad = 1000;
		OPTRE_canThrust = 1;
		BDA_ThrustModes[] = {400};
		ace_cargo_space = 12;
		magazines[]= {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};

		hiddenSelectionsTextures[]= {
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa", 
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
			"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa" //replace
		};

		class textureSources {
			class BDA_Falcon_Classic {
				displayName = "Classic";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Marine {
				displayName = "Marine";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Jungle {
				displayName = "Jungle";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_BJ7 {
				displayName = "BJ7";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Woodland {
				displayName = "Woodland";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Black {
				displayName = "Black";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Urban {
				displayName = "Urban";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Arab {
				displayName = "Arabian";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Desert {
				displayName = "Desert";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Dune {
				displayName = "Dune";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Frost {
				displayName = "Frost";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Tundra {
				displayName = "Tundra";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Romeo610 {
				displayName = "Romeo610";
				author = "Griffin";
				textures[] = {
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_test_m_co.paa",
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_test_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
					"\BDA_Vehicles\data\falcon\customs\falcon_610_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]={
			"BDA_Falcon_Classic",
			1,
			"BDA_Falcon_Marine",
			1,
			"BDA_Falcon_Jungle",
			1,
			"BDA_Falcon_BJ7",
			1,
			"BDA_Falcon_Woodland",
			1,
			"BDA_Falcon_Black",
			1,
			"BDA_Falcon_Urban",
			1,
			"BDA_Falcon_Arab",
			1,
			"BDA_Falcon_Desert",
			1,
			"BDA_Falcon_Dune",
			1,
			"BDA_Falcon_Frost",
			1,
			"BDA_Falcon_Tundra",
			1,
			"BDA_Romeo610",
			1,
		};

		class UserActions {
			class polarize {
				userActionID=50;
				displayName="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2' /> Polarize";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=1;
				condition="((this getVariable['OPTRE_Glass_Polarized',0]) == 0) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement="[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class depolo: polarize {
				userActionID=51;
				displayName="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2' /> Depolarize";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2.5' />";
				condition="((this getVariable['OPTRE_Glass_Polarized',0]) == 1) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement="[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class CabinOpen {
				userActionID=52;
				displayName="Open Cabin";
				displayNameDefault="Open Cabin";
				textToolTip="Open Cabin";
				position="cargo_door_handle";
				showWindow=0;
				radius=150;
				priority=4;
				onlyForPlayer=0;
				condition="((this animationPhase ""cockpit_door"" < 0.5) AND (this animationPhase ""cockpit_slide"" < 0.5) AND (alive this) AND (player in [driver this]))";
				statement="this animate [""cockpit_door"",1]; this animate [""cockpit_slide"",1];";
				animPeriod=5;
			};
			class CabinClose: CabinOpen {
				userActionID=53;
				displayName="Close Cabin";
				displayNameDefault="Close Cabin";
				textToolTip="Close Cabin";
				condition="((this animationPhase ""cockpit_door"" > 0.5) AND (this animationPhase ""cockpit_slide"" > 0.5) AND (alive this) AND (player in [driver this]))";
				statement="this animate [""cockpit_door"",0]; this animate [""cockpit_slide"",0];";
			};
			class cyclePIP {
				userActionID=54;
				displayName="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2'/> <t color='#61a2c9' >Cycle Camera</t>";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=1;
				condition="((alive this) AND (player in [driver this]))";
				statement="[this] call OPTRE_fnc_falcon_pip_change_next;";
			};
			class togglePip: cyclePIP {
				userActionID=55;
				displayName="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2'/> <t color='#ddd400' >Toggle  Camera</t>";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2.5' />";
				statement="[this] call OPTRE_fnc_falcon_pip_toggle;";
			};
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
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Temperate {
					displayName = "Temperate Ops";
					class OliveCamo {
						displayName = "Olive";
						statement = "['BDA_Falcon_Classic', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_Falcon_Jungle', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class MarineCamo {
						displayName = "Marine";
						statement = "['BDA_Falcon_Marine', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_Falcon_Woodland', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class BJ7Camo {
						displayName = "BJ7";
						statement = "['BDA_Falcon_BJ7', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class FrostCamo {
						displayName = "Frost";
						statement = "['BDA_Falcon_Frost', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class TundraCamo {
						displayName = "Tundra";
						statement = "['BDA_Falcon_Tundra', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_Falcon_Black', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class UrbanCamo {
						displayName = "Urban";
						statement = "['BDA_Falcon_Urban', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_Falcon_Desert', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class ArabianCamo {
						displayName = "Arabian";
						statement = "['BDA_Falcon_Arab', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class DuneCamo {
						displayName = "Dune Tan";
						statement = "['BDA_Falcon_Dune', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Customs {
					displayName = "Customs";
					class Romeo610 {
						displayName = "Romeo-610";
						statement = "['BDA_Falcon_Romeo610', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};	
				};
            };
        };

		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=10;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=20;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=1;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=5;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=6;};
			class _xx_ACE_tourniquet {name = "ACE_tourniquet"; count = 8;};
			class _xx_ACE_morphine {name = "ACE_morphine"; count = 10;};
		};

		class Ace_Cargo {
			class xx_BDA_Ammo_SupplyPod {
				type = "BDA_Ammo_SupplyPod";
				amount = 1;
			};
			class xx_BDA_Medical_SupplyPod {
				type = "BDA_Medical_SupplyPod";
				amount = 1;
			};
		};

		class Components: Components {
            class TransportPylonsComponent {
                UIPicture="\optre_vehicles_air\falcon\FalconPylonPic.paa";
				class pylons {
					class WingPylonRight {
						hardpoints[]={
							"OPAEX_Hardpoint_NonOffensive_UH144_Lower",
							"OPAEX_Hardpoint_NonOffensive_UH144_Upper"
						};
						attachment="OPTRE_AN_ALE_407_198Rnd_Chaff_Pylon";
						bay=-1;
						priority=4;
						UIposition[]={0.1,0.2};
						turret[]={-1};
					};
					class BellyPylonRight: WingPylonRight {
						attachment="OPTRE_AN_ALE_407_198Rnd_Flare_Pylon";
						priority=3;
						UIposition[]={0.2,0.40000001};
					};
					class WingPylonLeft: WingPylonRight {
						mirroredMissilePos=1;
						UIposition[]={
							"0.1+0.45",
							0.2
						};
					};
					class BellyPylonLeft: BellyPylonRight {
						mirroredMissilePos=2;
						UIposition[]={
							"0.2+0.25",
							0.40000001
						};
					};
					class Nose {
						hardpoints[]={
							"OPAEX_Hardpoint_UH144_Nose_Searchlight"
						};
						attachment="OPTRE_SearchLight_Pylon";
						bay=-1;
						priority=4;
						UIposition[]={
							"0.2+0.125",
							0.44999999
						};
						turret[]={-1};
					};
				};
				class Presets {
					class Default {
						displayName = "Empty";
						attachment[] = {
							"OPTRE_AN_ALE_407_198Rnd_Chaff_Pylon",
							"OPTRE_AN_ALE_407_198Rnd_Flare_Pylon",
							"OPTRE_AN_ALE_407_198Rnd_Flare_Pylon",
							"OPTRE_AN_ALE_407_198Rnd_Chaff_Pylon",
							"OPTRE_SearchLight_Pylon"
						};
					}
				};
            };
		};
	};

	class BDA_UNSC_MH145_Falcon: OPTRE_UNSC_Falcon_Medical {
		dlc = "BDA";
		scope = 2;
		scopeCurator = 2;
		author = "Rib";
		displayName = "MH-145 Falcon";
		side = 1;
		faction = "B_BDCUNSC";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_UH145A_Falcon2.jpg";
		crew = "B_BDA_Pilot";
		armor = 450;
		cost = 200;
		maximumLoad = 1000;
		OPTRE_canThrust = 1;
		BDA_ThrustModes[] = {400};
		ace_cargo_space = 14;
        magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries" 
		};

		class textureSources {
			class BDA_FalconM_Classic {
				displayName = "Classic";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Marine {
				displayName = "Marine";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Jungle {
				displayName = "Jungle";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_BJ7 {
				displayName = "BJ7";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Woodland {
				displayName = "Woodland";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Black {
				displayName = "Black";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Urban {
				displayName = "Urban";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Arab {
				displayName = "Arabian";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Desert {
				displayName = "Desert";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Dune {
				displayName = "Dune";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Frost {
				displayName = "Frost";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Tundra {
				displayName = "Tundra";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_FalconM_Romeo610 {
				displayName = "Romeo610";
				author = "Griffin";
				textures[] = {
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_610_m_co.paa",
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_610_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]={
			"BDA_FalconM_Classic",
			1,
			"BDA_FalconM_Marine",
			1,
			"BDA_FalconM_Jungle",
			1,
			"BDA_FalconM_BJ7",
			1,
			"BDA_FalconM_Woodland",
			1,
			"BDA_FalconM_Black",
			1,
			"BDA_FalconM_Urban",
			1,
			"BDA_FalconM_Arab",
			1,
			"BDA_FalconM_Desert",
			1,
			"BDA_FalconM_Dune",
			1,
			"BDA_FalconM_Frost",
			1,
			"BDA_FalconM_Tundra",
			1,
			"BDA_FalconM_Romeo610",
			1,
		};

		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3",
			"camoGlass",
			"camoGlassPilot",
			"camomedical",
			"camoDecal"
		};
		hiddenSelectionsTextures[]= {
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\medical\camomedical_co.paa",
			"\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa" //replace
		};
		
		class UserActions {
			class polarize {
				userActionID=50;
				displayName="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2' /> Polarize";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=1;
				condition="((this getVariable['OPTRE_Glass_Polarized',0]) == 0) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement="[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class depolo: polarize {
				userActionID=51;
				displayName="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2' /> Depolarize";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2.5' />";
				condition="((this getVariable['OPTRE_Glass_Polarized',0]) == 1) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement="[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class CabinOpen {
				userActionID=52;
				displayName="Open Cabin";
				displayNameDefault="Open Cabin";
				textToolTip="Open Cabin";
				position="cargo_door_handle";
				showWindow=0;
				radius=150;
				priority=4;
				onlyForPlayer=0;
				condition="((this animationPhase ""cockpit_door"" < 0.5) AND (this animationPhase ""cockpit_slide"" < 0.5) AND (alive this) AND (player in [driver this]))";
				statement="this animate [""cockpit_door"",1]; this animate [""cockpit_slide"",1];";
				animPeriod=5;
			};
			class CabinClose: CabinOpen {
				userActionID=53;
				displayName="Close Cabin";
				displayNameDefault="Close Cabin";
				textToolTip="Close Cabin";
				condition="((this animationPhase ""cockpit_door"" > 0.5) AND (this animationPhase ""cockpit_slide"" > 0.5) AND (alive this) AND (player in [driver this]))";
				statement="this animate [""cockpit_door"",0]; this animate [""cockpit_slide"",0];";
			};
			class cyclePIP {
				userActionID=54;
				displayName="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2'/> <t color='#61a2c9' >Cycle Camera</t>";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=1;
				condition="((alive this) AND (player in [driver this]))";
				statement="[this] call OPTRE_fnc_falcon_pip_change_next;";
			};
			class togglePip: cyclePIP {
				userActionID=55;
				displayName="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2'/> <t color='#ddd400' >Toggle  Camera</t>";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2.5' />";
				statement="[this] call OPTRE_fnc_falcon_pip_toggle;";
			};
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
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Temperate {
					displayName = "Temperate Ops";
					class OliveCamo {
						displayName = "Olive";
						statement = "['BDA_FalconM_Classic', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_FalconM_Jungle', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class MarineCamo {
						displayName = "Marine";
						statement = "['BDA_FalconM_Marine', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_FalconM_Woodland', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class BJ7Camo {
						displayName = "BJ7";
						statement = "['BDA_FalconM_BJ7', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class FrostCamo {
						displayName = "Frost";
						statement = "['BDA_FalconM_Frost', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class TundraCamo {
						displayName = "Tundra";
						statement = "['BDA_FalconM_Tundra', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_FalconM_Black', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class UrbanCamo {
						displayName = "Urban";
						statement = "['BDA_FalconM_Urban', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_FalconM_Desert', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class ArabianCamo {
						displayName = "Arabian";
						statement = "['BDA_FalconM_Arab', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
					class DuneCamo {
						displayName = "Dune Tan";
						statement = "['BDA_FalconM_Dune', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Customs {
					displayName = "Customs";
					class Romeo610 {
						displayName = "Romeo-610";
						statement = "['BDA_FalconM_Romeo610', 'BDA_UNSC_MH145_Falcon'] call BDA_fnc_chgTex";
					};	
				};
            };
        };

		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=10;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=20;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=1;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=5;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=6;};
			class _xx_ACE_tourniquet {name = "ACE_tourniquet"; count = 8;};
			class _xx_ACE_morphine {name = "ACE_morphine"; count = 10;};
		};

		class Ace_Cargo {
			class xx_BDA_Ammo_SupplyPod {
				type = "BDA_Ammo_SupplyPod";
				amount = 1;
			};
			class xx_BDA_Medical_SupplyPod {
				type = "BDA_Medical_SupplyPod";
				amount = 1;
			};
		};

        class Components: Components {
            class TransportPylonsComponent {
                UIPicture="\optre_vehicles_air\falcon\FalconPylonPic.paa";
				class pylons {
					class WingPylonRight {
						hardpoints[]={
							"OPAEX_Hardpoint_NonOffensive_UH144_Lower",
							"OPAEX_Hardpoint_NonOffensive_UH144_Upper"
						};
						attachment="OPTRE_AN_ALE_407_198Rnd_Chaff_Pylon";
						bay=-1;
						priority=4;
						UIposition[]={0.1,0.2};
						turret[]={-1};
					};
					class BellyPylonRight: WingPylonRight {
						attachment="OPTRE_AN_ALE_407_198Rnd_Flare_Pylon";
						priority=3;
						UIposition[]={0.2,0.40000001};
					};
					class WingPylonLeft: WingPylonRight {
						mirroredMissilePos=1;
						UIposition[]={
							"0.1+0.45",
							0.2
						};
					};
					class BellyPylonLeft: BellyPylonRight {
						mirroredMissilePos=2;
						UIposition[]={
							"0.2+0.25",
							0.40000001
						};
					};
					class Nose {
						hardpoints[]={
							"OPAEX_Hardpoint_UH144_Nose_Searchlight"
						};
						attachment="OPTRE_SearchLight_Pylon";
						bay=-1;
						priority=4;
						UIposition[]={
							"0.2+0.125",
							0.44999999
						};
						turret[]={-1};
					};
				};
				class Presets {
					class Default {
						displayName = "Empty";
						attachment[] = {
							"OPTRE_AN_ALE_407_198Rnd_Chaff_Pylon",
							"OPTRE_AN_ALE_407_198Rnd_Flare_Pylon",
							"OPTRE_AN_ALE_407_198Rnd_Flare_Pylon",
							"OPTRE_AN_ALE_407_198Rnd_Chaff_Pylon",
							"OPTRE_SearchLight_Pylon"
						};
					}
				};
            };
		};
	};

    class BDA_UNSC_UH145S_Falcon: OPTRE_UNSC_UH_144_Falcon_DAP {
		dlc = "BDA";
		scope = 2;
		scopeCurator = 2;
		author = "Rib";
		displayName = "UH-145S Falcon";
		side = 1;
		faction = "B_BDCUNSC";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_UH145A_Falcon2.jpg";
		crew = "B_BDA_Pilot";
		armor = 250;
		cost = 1000;
		maximumLoad = 1000;
		OPTRE_canThrust = 1;
		BDA_ThrustModes[] = {400};
		ace_cargo_space = 14;
        magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries" 
		};

		hiddenSelectionsTextures[]= {
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa", 
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
			"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa" //replace
		};

		class textureSources {
			class BDA_Falcon_Classic {
				displayName = "Classic";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Marine {
				displayName = "Marine";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Jungle {
				displayName = "Jungle";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_BJ7 {
				displayName = "BJ7";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Woodland {
				displayName = "Woodland";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Black {
				displayName = "Black";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Urban {
				displayName = "Urban";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Arab {
				displayName = "Arabian";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Desert {
				displayName = "Desert";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Dune {
				displayName = "Dune";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Frost {
				displayName = "Frost";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Falcon_Tundra {
				displayName = "Tundra";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
					"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Romeo610 {
				displayName = "Romeo610";
				author = "Griffin";
				textures[] = {
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_test_m_co.paa",
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_test_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
					"\BDA_Vehicles\data\falcon\customs\falcon_610_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]={
			"BDA_Falcon_Classic",
			1,
			"BDA_Falcon_Marine",
			1,
			"BDA_Falcon_Jungle",
			1,
			"BDA_Falcon_BJ7",
			1,
			"BDA_Falcon_Woodland",
			1,
			"BDA_Falcon_Black",
			1,
			"BDA_Falcon_Urban",
			1,
			"BDA_Falcon_Arab",
			1,
			"BDA_Falcon_Desert",
			1,
			"BDA_Falcon_Dune",
			1,
			"BDA_Falcon_Frost",
			1,
			"BDA_Falcon_Tundra",
			1,
			"BDA_Romeo610",
			1,
		};

		class UserActions {
			class polarize {
				userActionID=50;
				displayName="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2' /> Polarize";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=1;
				condition="((this getVariable['OPTRE_Glass_Polarized',0]) == 0) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement="[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class depolo: polarize {
				userActionID=51;
				displayName="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2' /> Depolarize";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2.5' />";
				condition="((this getVariable['OPTRE_Glass_Polarized',0]) == 1) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement="[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class CabinOpen {
				userActionID=52;
				displayName="Open Cabin";
				displayNameDefault="Open Cabin";
				textToolTip="Open Cabin";
				position="cargo_door_handle";
				showWindow=0;
				radius=150;
				priority=4;
				onlyForPlayer=0;
				condition="((this animationPhase ""cockpit_door"" < 0.5) AND (this animationPhase ""cockpit_slide"" < 0.5) AND (alive this) AND (player in [driver this]))";
				statement="this animate [""cockpit_door"",1]; this animate [""cockpit_slide"",1];";
				animPeriod=5;
			};
			class CabinClose: CabinOpen {
				userActionID=53;
				displayName="Close Cabin";
				displayNameDefault="Close Cabin";
				textToolTip="Close Cabin";
				condition="((this animationPhase ""cockpit_door"" > 0.5) AND (this animationPhase ""cockpit_slide"" > 0.5) AND (alive this) AND (player in [driver this]))";
				statement="this animate [""cockpit_door"",0]; this animate [""cockpit_slide"",0];";
			};
			class cyclePIP {
				userActionID=54;
				displayName="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2'/> <t color='#61a2c9' >Cycle Camera</t>";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2.5' />";
				position="";
				priority=1.5;
				radius=1.8;
				animPeriod=2;
				onlyForplayer=0;
				showWindow=1;
				condition="((alive this) AND (player in [driver this]))";
				statement="[this] call OPTRE_fnc_falcon_pip_change_next;";
			};
			class togglePip: cyclePIP {
				userActionID=55;
				displayName="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2'/> <t color='#ddd400' >Toggle  Camera</t>";
				displayNameDefault="<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2.5' />";
				statement="[this] call OPTRE_fnc_falcon_pip_toggle;";
			};
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
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Temperate {
					displayName = "Temperate Ops";
					class OliveCamo {
						displayName = "Olive";
						statement = "['BDA_Falcon_Classic', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_Falcon_Jungle', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class MarineCamo {
						displayName = "Marine";
						statement = "['BDA_Falcon_Marine', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_Falcon_Woodland', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class BJ7Camo {
						displayName = "BJ7";
						statement = "['BDA_Falcon_BJ7', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class FrostCamo {
						displayName = "Frost";
						statement = "['BDA_Falcon_Frost', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class TundraCamo {
						displayName = "Tundra";
						statement = "['BDA_Falcon_Tundra', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_Falcon_Black', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class UrbanCamo {
						displayName = "Urban";
						statement = "['BDA_Falcon_Urban', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_Falcon_Desert', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class ArabianCamo {
						displayName = "Arabian";
						statement = "['BDA_Falcon_Arab', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
					class DuneCamo {
						displayName = "Dune Tan";
						statement = "['BDA_Falcon_Dune', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};
				};
				class Customs {
					displayName = "Customs";
					class Romeo610 {
						displayName = "Romeo-610";
						statement = "['BDA_Falcon_Romeo610', 'BDA_UNSC_UH145S_Falcon'] call BDA_fnc_chgTex";
					};	
				};
            };
        };

		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=10;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=20;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=1;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=5;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=6;};
			class _xx_ACE_tourniquet {name = "ACE_tourniquet"; count = 8;};
			class _xx_ACE_morphine {name = "ACE_morphine"; count = 10;};
		};

		class Ace_Cargo {
			class xx_BDA_Ammo_SupplyPod {
				type = "BDA_Ammo_SupplyPod";
				amount = 1;
			};
			class xx_BDA_Medical_SupplyPod {
				type = "BDA_Medical_SupplyPod";
				amount = 1;
			};
		};
	};
};


class cfgMods {
	author="Rib";
	timepacked="110028042026";
};