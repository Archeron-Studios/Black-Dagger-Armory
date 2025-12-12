class CfgPatches {
	class BDA_Vehicles {
		author = "Black Dagger Development Crew";
		units[]= {
			"BDA_UNSC_D77_TC_Pelican",
			"BDA_UNSC_D77_TC_Pelican_Single",
			"BDA_UNSC_Hornet",
			"BDA_UNSC_Hornet_Lite",
			"BDA_UNSC_Hornet_VTOL",
			"BDA_UNSC_UH145A_Falcon2",
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
			"Splits_Vehicles_Air_Pelican",
			"OPTRE_Vehicles_Pelican",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Hornet",
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
	class Air;
	class Plane: Air {
		/*extern*/ class HitPoints;
		/*extern*/ class ACE_Actions;
		/*extern*/ class ACE_SelfActions;
	};
	class Plane_Base_F: Plane {
		/*extern*/ class MarkerLights;
		/*extern*/ class Turrets;
		/*extern*/ class AnimationSources;
		class HitPoints: HitPoints {
			/*extern*/ class HitHull;
		};
		/*extern*/ class Components;
		/*extern*/ class ViewPilot;
	};
	class VTOL_Base_F: Plane_Base_F {
		class AnimationSources: AnimationSources {};
		class HitPoints: HitPoints {};
		class MarkerLights: MarkerLights {
			class PositionWhite;
		};
		class NewTurret;
		class Turrets: Turrets {
			class CopilotTurret;
		};
		class CargoTurret;
		class ViewPilot: ViewPilot {};
		class Components: Components {};
	};
	/*extern*/ class Ejection_Seat_Base_F;
	/*extern*/ class Plane_Canopy_Base_F;
	/*extern*/ class PlaneWreck;
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
	class B_Heli_Transport_01_F: Helicopter_Base_H {};
	class Splits_Pelican_base: B_Heli_Transport_01_F {
		class Turrets {
			class MainTurret;
			class RearDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class CargoTurret_06;
			class CargoTurret_07;
			class CargoTurret_08;
			class CargoTurret_09;
			class CargoTurret_10;
			class CargoTurret_11;
			class CargoTurret_12;
			class CargoTurret_13;
			class CargoTurret_14;
			class CargoTurret_15;
		};
		class Components;
	};
	class Heli_Light_01_Base_F: Helicopter_Base_H {};
	class OPTRE_Falcon_Base: Heli_Light_01_Base_F {};
	class OPTRE_Hornet_Base: Helicopter_Base_H {
		class Components;
	};
	class OPTRE_UNSC_falcon_S: OPTRE_Falcon_Base {};
	class OPTRE_AV22_Sparrowhawk_Base: Helicopter_Base_H {};
	class OPTRE_AV22_Sparrowhawk: OPTRE_AV22_Sparrowhawk_Base {};
	class OPTRE_UNSC_falcon_medical;

	class BDA_UNSC_D77_TC_Pelican: Splits_Pelican_base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 15000;
		side = 1;
		vehicleClass = "Air";
		dlc="BDA";
		author = "Splitjaw & Rib";
		faction = "B_BDCUNSC";
		displayName = "D77-TC Pelican";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_D77_TC_Pelican.jpg";
		crew = "B_BDA_Pilot";
		//textures
		hiddenSelectionsTextures[] = {
			"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
			"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
			"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
		};

		class textureSources {
			class UNSC_BDA_Green {
				displayName="UNSC Green";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class UNSC_BDA_Black {
				displayName="UNSC Black";
				author="Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_B_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class UNSC_BDA_W610 {
				displayName="UNSC Whiskey 610";
				author="Splitjaw/Grif/Rib";
				textures[]={
					"\BDA_Vehicles\data\customs\Pelican\BDA_610_body_co.paa",
					"\BDA_Vehicles\data\customs\Pelican\BDA_wings_and_gear_W_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class UNSC_BDA_Winter {
				displayName="UNSC Winter";
				author="SplitJaw/Rib";
				textures[]= {
					"\BDA_Vehicles\data\pelican\BDA_Wi_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_Wi_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_Wi_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]={
			"UNSC_BDA_Green", 1,
			"UNSC_BDA_Black", 1,
			"UNSC_BDA_W610", 1,
			"UNSC_BDA_Winter", 1
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class GreenCamo {
					displayName = "Green";
					statement = "['UNSC_BDA_Green', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
				class WinterCamo {
					displayName = "Winter";
					statement = "['UNSC_BDA_Winter', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
				class BlackCamo {
					displayName = "Black";
					statement = "['UNSC_BDA_Black', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
				class W610Camo {
					displayName = "W610";
					statement = "['UNSC_BDA_W610', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
            };
        };

		class UserActions {
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn BDA_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement = "Splits_pelicanloadSupplyPods_Menu_PelicanObject = this; createDialog ""Splits_pelicanloadSupplyPods_Menu""; Splits_pelicanloadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL Splits_pelicanloadSupplyPods_Menu_PelicanObject;  Splits_pelicanloadSupplyPods_Menu_cam CamSetTarget Splits_pelicanloadSupplyPods_Menu_PelicanObject; Splits_pelicanloadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; Splits_pelicanloadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; Splits_pelicanloadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn Splits_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn Splits_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]";
				animPeriod = 5;
			};
			class RampClose : RampOpen
			{
				userActionID = 51;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]";
				animPeriod = 5;
			};
			class ThrusterEngage
			{
				userActionID = 122;
				displayName = "ENGAGE FORWARD THRUSTERS";
				displayNameDefault = "ENGAGE FORWARD THRUSTERS";
				textToolTip = "ENGAGE FORWARD THRUSTERS";
				position = "cargo_door_handle";
				priority = 10;
				radius = 3;
				onlyForPlayer = 0;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
				animPeriod = 4;
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 123;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage: ThrusterEngage
			{
				userActionID = 124;
				displayName = "ENGAGE AIRBRAKES";
				displayNameDefault = "ENGAGE AIRBRAKES";
				textToolTip = "ENGAGE AIRBRAKES";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};

		//Structural
		armor = 340;
		maxSpeed = 900;
		fuelConsumptionRate = 0.3;

		//Weapons
		magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"BDA_missiles_LGIR_Anvil3_x60",
			"BDA_missiles_LGIR_Anvil3_x60"
		};
		weapons[] = {
			"CMFlareLauncher",
			"BDA_missiles_Guided_Anvil3"
		};
		
		//TFAR Config
		tf_range = 50000;
		tf_isolatedAmount = 0.45;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_hasRadio = 1;
		enableRadio = 1;

		//Radar & Sensors
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";

		//hud colour change
		class MFD {
			class MFD_Pilot_1
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={0};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0.25,1,0.25};
					condition="on";
					class ReticleGroup
					{
						color[]={1,1,1};
						class Reticle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.50142902,0.49276599},
									1
								},
								
								{
									{0.505,0.49276599},
									1
								},
								
								{
									{0.505,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49276599},
									1
								},
								{},
								
								{
									{0.50928599,0.49578801},
									1
								},
								
								{
									{0.587143,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.50283903},
									1
								},
								
								{
									{0.50285703,0.59752798},
									1
								},
								{},
								
								{
									{0.49857101,0.49578801},
									1
								},
								
								{
									{0.41999999,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.39404801},
									1
								},
								
								{
									{0.50285703,0.48672199},
									1
								},
								{},
								
								{
									{0.62,0.339652},
									1
								},
								
								{
									{0.65285701,0.339652},
									1
								},
								
								{
									{0.65285701,0.382967},
									1
								},
								{},
								
								{
									{0.65285701,0.615659},
									1
								},
								
								{
									{0.65285701,0.65998203},
									1
								},
								
								{
									{0.62071401,0.65998203},
									1
								},
								{},
								
								{
									{0.38428599,0.65998203},
									1
								},
								
								{
									{0.35142899,0.65998203},
									1
								},
								
								{
									{0.35142899,0.615659},
									1
								},
								{},
								
								{
									{0.38428599,0.339652},
									1
								},
								
								{
									{0.35142899,0.339652},
									1
								},
								
								{
									{0.35142899,0.382967},
									1
								}
							};
						};
						class ModeText
						{
							type="text";
							source="static";
							text="Mode: TI WHOT";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.31999999},
								1
							};
							right[]=
							{
								{0.07,0.31999999},
								1
							};
							down[]=
							{
								{0.039999999,0.345},
								1
							};
						};
						class RangeText
						{
							type="text";
							source="static";
							text="Range:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.33000001,0.81},
								1
							};
							right[]=
							{
								{0.37,0.81},
								1
							};
							down[]=
							{
								{0.33000001,0.84500003},
								1
							};
						};
						class Fuel
						{
							type="text";
							source="laserDist";
							sourceScale=1;
							sourceLength=4;
							align="right";
							scale=1;
							pos[]=
							{
								{0.47999999,0.81},
								1
							};
							right[]=
							{
								{0.51999998,0.81},
								1
							};
							down[]=
							{
								{0.47999999,0.84500003},
								1
							};
						};
					};
				};
			};
			class MFD_Pilot_2
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class Time
					{
						type="text";
						source="time";
						text="%X";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.11},
							1
						};
						right[]=
						{
							{0.13,0.11},
							1
						};
						down[]=
						{
							{0.029999999,0.2},
							1
						};
					};
					class Fuel
					{
						type="text";
						source="fuel";
						text="%X";
						sourceScale=2517;
						sourceLength=4;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.31},
							1
						};
						right[]=
						{
							{0.13,0.31},
							1
						};
						down[]=
						{
							{0.029999999,0.40000001},
							1
						};
					};
					class LBSText
					{
						type="text";
						source="static";
						text="LBS";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.30000001,0.31},
							1
						};
						right[]=
						{
							{0.40000001,0.31},
							1
						};
						down[]=
						{
							{0.30000001,0.40000001},
							1
						};
					};
					class GridX
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceOffset=-0.5;
						sourceLength=3;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.61000001},
							1
						};
						right[]=
						{
							{0.13,0.61000001},
							1
						};
						down[]=
						{
							{0.029999999,0.69999999},
							1
						};
					};
					class GridY: GridX
					{
						source="coordinateY";
						pos[]=
						{
							{0.23999999,0.61000001},
							1
						};
						right[]=
						{
							{0.34,0.61000001},
							1
						};
						down[]=
						{
							{0.23999999,0.69999999},
							1
						};
					};
					class GridText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.029999999,0.50999999},
							1
						};
						right[]=
						{
							{0.13,0.50999999},
							1
						};
						down[]=
						{
							{0.029999999,0.60000002},
							1
						};
					};
				};
			};
			class MFD_Pilot_3
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class CollectiveGroup
					{
						condition="simulRTD";
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
						class CollectiveNumber
						{
							type="text";
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="left";
						scale=1;
						pos[]=
						{
							{0.28,0.45199999},
							1
						};
						right[]=
						{
							{0.31999999,0.45199999},
							1
						};
						down[]=
						{
							{0.28,0.49200001},
							1
						};
					};
					class AltNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							{0.75,0.45199999},
							1
						};
						right[]=
						{
							{0.79000002,0.45199999},
							1
						};
						down[]=
						{
							{0.75,0.49200001},
							1
						};
					};
					class CruiseMode
					{
						condition="1+((altitudeASL-27) min 1) - autohover";
						class AltNumberASL
						{
							type="text";
							source="altitudeASL";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.81,0.16},
								1
							};
							right[]=
							{
								{0.85000002,0.16},
								1
							};
							down[]=
							{
								{0.81,0.2},
								1
							};
						};
					};
				};
			};
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.00,1.00,0.2,1.0}; //original RGBA=0.169,0.85100001,0.83899999
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				enableParallax=1;
				font="LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]={0,-0.0024999999};
						pos10[]={0.0099999998,0.0024999999};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.15,1.0,0.2,1.0}; //original 0.15000001,0.15000001,1,1 RGBA
					condition="on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.40000001,0.86000001},
								1
							},
							
							{
								{0.40000001,0.94},
								1
							},
							
							{
								{0.60000002,0.94},
								1
							},
							
							{
								{0.60000002,0.86000001},
								1
							},
							
							{
								{0.40000001,0.86000001},
								1
							},
							{},
							
							{
								{0.40000001,0.88499999},
								1
							},
							
							{
								{0.40799999,0.88499999},
								1
							},
							{},
							
							{
								{0.60000002,0.88499999},
								1
							},
							
							{
								{0.59200001,0.88499999},
								1
							},
							{},
							
							{
								{0.5,0.86000001},
								1
							},
							
							{
								{0.5,0.86799997},
								1
							},
							{},
							
							{
								{0.5,0.94},
								1
							},
							
							{
								{0.5,0.93199998},
								1
							},
							{},
							
							{
								{0.51999998,0.079999998},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								{0.47999999,0.079999998},
								1
							},
							
							{
								{0.51999998,0.079999998},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089802},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							{}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.29578;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.82564098},
								1
							};
							right[]=
							{
								{0.54000002,0.82564098},
								1
							};
							down[]=
							{
								{0.5,0.85512799},
								1
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class MGun
					{
						condition="mgun+rocket";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
		};
		class Components: Components {
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=45;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=50;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=300;
						angleRangeHorizontal=150;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent {
				uiPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class Pylons {
					class PylonRight1
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=5;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=4;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority=3;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="BDA_PylonMissile_AA_Pelican_x4";
						priority=2;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.2};
					};
					class PylonsLeft1: PylonRight1
					{
						UIposition[]={0.25,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft2: PylonRight2
					{
						UIposition[]={0.25,0.40000001};
						mirroredMissilePos=1;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class Presets {
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",

							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class OPTRE_Default
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_2Rnd_Jackknife_missile",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AA
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",

							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AT
					{
						displayName="OPTRE AT";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
				};
			};
		};

		//Cargo
		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=15;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=30;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=2;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=10;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=2;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=20;};
			//class _xx_ACE_
		};

		ace_cargo_space = 48;
		class Ace_Cargo {
			class Cargo {
				class xx_SpareWheel {
					type="ACE_Wheel";
					amount=12;
				};
				class xx_SpareTrack {
					type="ACE_Track";
					amount=4;
				};
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

		//turrets
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				#define StabilizedInAxesBoth 3
				isCopilot=1;
				CanEject=0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev=-75; //-51
				maxElev=10; //9
				initElev=6;
				minTurn=-140; //-120
				maxTurn=140; //120
				initTurn=0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Splits_Gunner_Pelican";
				gunnerInAction = "Splits_Gunner_Pelican";
				gunnerGetInAction = "pilot_Heli_Light_02_Enter";
				gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
				precisegetinout=1;
				gunnerName = "Co-Pilot Gunner";
				proxyindex = 1;
				gunnerCompartments="Compartment2";
				hideWeaponsGunner = 1;
				soundServo[] = { "",0.01,1 };
				stabilizedInAxes = 3;
				commanding = -2;
				primaryGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				showAllTargets=4;
				playerPosition=3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "lever_pilot";
				gunnerRightHandAnimName = "stick_copilot";
				memoryPointGun = "machinegun";
				weapons[] = { "Splits_M370_70mm_autocannon", "Laserdesignator_mounted"  };
				magazines[] =
				{
					"Splits_1200Rnd_Cannon_70mm_M370_MP",
					"Splits_1200Rnd_Cannon_70mm_M370_HE",
					"Laserbatteries"
				};
				memoryPointGunnerOptics = "PIP2_pos";
				memoryPointGunnerOutOptics= "gunnerview";
				castGunnerShadow = 1;
				startEngine = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="WFOV";
						directionStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						initAngleX=0;
						initAngleY=0;
						minAngleX=-65;
						maxAngleX=85;
						minAngleY=-150;
						maxAngleY=150;
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class RearDoorGun: RearDoorGun {
				gunnerType = "B_BDA_Crewman";
				gunnerName = "Door Gunner";
				weapons[] = {
					"BDA_M247T_Coax"
				};
				magazines[] = {
					"BDA_1200rnd_762x51_Box_Tracer"
				}; 
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerName="Standing Seat 1";
				crew="B_BDA_SquadLead";
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerName="Standing Seat 2";
				crew="B_BDA_Breacher";
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerName="Standing Seat 3";
				crew="B_BDA_Rocket";
			};
			class CargoTurret_04: CargoTurret_04
			{
				gunnerName="Standing Seat 4";
				crew="B_BDA_Rifleman";
			};
			class CargoTurret_05: CargoTurret_05
			{
				gunnerName="Standing Seat 5";
				crew="B_BDA_Autorifleman";
			};
			class CargoTurret_06: CargoTurret_06
			{
				gunnerName="Standing Seat 6";
			};
			class CargoTurret_07: CargoTurret_07
			{
				gunnerName="Standing Seat 7";
			};
			class CargoTurret_08: CargoTurret_08
			{
				gunnerName="Standing Seat 8";
			};
			class CargoTurret_09: CargoTurret_09
			{
				gunnerName="Standing Seat 9";
				crew="B_BDA_Sniper";
			};
			class CargoTurret_10: CargoTurret_10
			{
				gunnerName="Standing Seat 10";
			};
			class CargoTurret_11: CargoTurret_11
			{
				gunnerName="Standing Seat 11";
				crew="B_BDA_Teamleader";
			};
			class CargoTurret_12: CargoTurret_12
			{
				gunnerName="Standing Seat 12";
			};
			class CargoTurret_13: CargoTurret_13
			{
				gunnerName="Standing Seat 13";
				crew="B_BDA_Crewman";
			};
			class CargoTurret_14: CargoTurret_14
			{
				gunnerName="Standing Seat 14";
			};
			class CargoTurret_15: CargoTurret_15
			{
				gunnerName="Standing Seat 15";
				crew="B_BDA_Rifleman";
			};
		};
		
		//misc
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damage_hide",
					0
				},
				
				{
					"glass_1",
					0
				},
				
				{
					"glass_2",
					0
				},
				
				{
					"glass_3",
					0
				},
				
				{
					"glass_4",
					0
				},
				
				{
					"glass_5",
					0
				},
				
				{
					"glass_6",
					0
				},
				
				{
					"glass_7",
					0
				},
				
				{
					"glass_8",
					0
				},
				
				{
					"glass_9",
					0
				},
				
				{
					"glass_10",
					0
				},
				
				{
					"glass_11",
					0
				},
				
				{
					"glass_12",
					0
				},
				
				{
					"glass_13",
					0
				},
				
				{
					"glass_14",
					0
				},
				
				{
					"glass_15",
					0
				},
				
				{
					"glass_16",
					0
				},
				
				{
					"glass_17",
					0
				},
				
				{
					"glass_18",
					0
				},
				
				{
					"glass_19",
					0
				},
				
				{
					"glass_20",
					0
				},
				
				{
					"cannon_barrel_hide",
					0
				},
				
				{
					"rotor_1_blur_hide",
					0
				},
				
				{
					"rotor_1_static_hide",
					0
				},
				
				{
					"rotor_2_blur_hide",
					0
				},
				
				{
					"rotor_2_static_hide",
					0
				},
				
				{
					"engine_1_1_rot",
					1
				},
				
				{
					"engine_1_2_rot",
					1
				},
				
				{
					"engine_2_1_rot",
					1
				},
				
				{
					"engine_2_2_rot",
					1
				},
				
				{
					"stator_1_rudder_rot",
					0
				},
				
				{
					"stator_1_elevator_rot",
					0
				},
				
				{
					"rotor_1_rot",
					0
				},
				
				{
					"stator_2_rudder_rot",
					0
				},
				
				{
					"stator_2_elevator_rot",
					0
				},
				
				{
					"rotor_2_rot",
					0
				},
				
				{
					"gear_1_move",
					0
				},
				
				{
					"gear_2_rot",
					0
				},
				
				{
					"gear_2_a_rot",
					0
				},
				
				{
					"gear_2_b_rot",
					0
				},
				
				{
					"gear_3_rot",
					0
				},
				
				{
					"gear_3_a_rot",
					0
				},
				
				{
					"gear_3_b_rot",
					0
				},
				
				{
					"gear_1_hatch_1_rot",
					0
				},
				
				{
					"gear_1_hatch_2_rot",
					0
				},
				
				{
					"wheel_1_rot",
					0
				},
				
				{
					"wheel_2_rot",
					0
				},
				
				{
					"wheel_3_rot",
					0
				},
				
				{
					"gear_1_damper_move",
					0
				},
				
				{
					"gear_1_damper_rotate",
					0
				},
				
				{
					"gear_1_link_1_rotate",
					0
				},
				
				{
					"gear_1_link_2_rotate",
					0
				},
				
				{
					"gear_2_damper_move",
					0
				},
				
				{
					"gear_3_damper_move",
					0
				},
				
				{
					"door_1_rot",
					0
				},
				
				{
					"cargoseats_hide",
					1
				},
				
				{
					"display_off_hide",
					0
				},
				
				{
					"positionlights_hide",
					0
				},
				
				{
					"cannon_turret_rot",
					0
				},
				
				{
					"cannon_rot",
					0.090000004
				},
				
				{
					"cannon_muzzleflash_hide",
					0
				},
				
				{
					"cannon_barrel_move",
					1
				},
				
				{
					"rotor_1_hide",
					0
				},
				
				{
					"rotor_1_unhide",
					0
				},
				
				{
					"rotor_2_hide",
					0
				},
				
				{
					"rotor_2_unhide",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"stick_control_1_pitch_rot",
					0
				},
				
				{
					"Throttle",
					0
				},
				
				{
					"stick_control_2_pitch_rot",
					0
				},
				
				{
					"stick_control_1_roll_rot",
					0
				},
				
				{
					"stick_control_2_roll_rot",
					0
				},
				
				{
					"pedals_1_left_1_move",
					0
				},
				
				{
					"pedals_1_right_1_move",
					0
				},
				
				{
					"pedals_1_left_2_rot",
					0
				},
				
				{
					"pedals_1_right_2_rot",
					0
				},
				
				{
					"pedals_2_left_1_move",
					0
				},
				
				{
					"pedals_2_right_1_move",
					0
				},
				
				{
					"pedals_2_left_2_rot",
					0
				},
				
				{
					"pedals_2_right_2_rot",
					0
				},
				
				{
					"display_1_alt_ladder_rot",
					8.1599998
				},
				
				{
					"display_1_alt_1_rot",
					8.1599998
				},
				
				{
					"display_1_alt_10_rot",
					8.1599998
				},
				
				{
					"display_1_alt_100_rot",
					8.1599998
				},
				
				{
					"display_1_alt_1000_rot",
					8.1599998
				},
				
				{
					"display_1_compass_rot",
					0
				},
				
				{
					"display_1_fuel_move",
					1
				},
				
				{
					"display_1_gear_down_move",
					0
				},
				
				{
					"display_1_gear_up_move",
					0
				},
				
				{
					"display_1_horizon_bank_rot",
					0
				},
				
				{
					"display_1_horizon_move",
					0
				},
				
				{
					"display_1_hydraulics_1_rot",
					0
				},
				
				{
					"display_1_hydraulics_2_rot",
					0
				},
				
				{
					"display_1_oil_1_rot",
					1
				},
				
				{
					"display_1_oil_2_rot",
					1
				},
				
				{
					"display_1_oil_3_rot",
					1
				},
				
				{
					"display_1_oil_4_rot",
					1
				},
				
				{
					"display_1_oil_5_rot",
					1
				},
				
				{
					"display_1_oil_6_rot",
					1
				},
				
				{
					"display_1_pitch_rot",
					0
				},
				
				{
					"display_1_roll_rot",
					0
				},
				
				{
					"display_1_yaw_rot",
					0
				},
				
				{
					"display_1_rpm_1_rot",
					0
				},
				
				{
					"display_1_rpm_2_rot",
					0
				},
				
				{
					"display_1_speed_ladder_rot",
					0
				},
				
				{
					"display_1_speed_1_rot",
					0
				},
				
				{
					"display_1_speed_10_rot",
					0
				},
				
				{
					"display_1_speed_100_rot",
					0
				},
				
				{
					"display_1_vert_speed_rot",
					0
				},
				
				{
					"display_1_voltage_1_rot",
					0
				},
				
				{
					"display_1_voltage_2_rot",
					0
				},
				
				{
					"display_1_vtol_1_rot",
					1
				},
				
				{
					"display_1_vtol_2_rot",
					1
				},
				
				{
					"display_2_alt_ladder_rot",
					8.1599998
				},
				
				{
					"display_2_alt_1_rot",
					8.1599998
				},
				
				{
					"display_2_alt_10_rot",
					8.1599998
				},
				
				{
					"display_2_alt_100_rot",
					8.1599998
				},
				
				{
					"display_2_alt_1000_rot",
					8.1599998
				},
				
				{
					"display_2_compass_rot",
					0
				},
				
				{
					"display_2_fuel_move",
					1
				},
				
				{
					"display_2_horizon_bank_rot",
					0
				},
				
				{
					"display_2_horizon_move",
					0
				},
				
				{
					"display_2_oil_1_rot",
					1
				},
				
				{
					"display_2_oil_2_rot",
					1
				},
				
				{
					"display_2_speed_ladder_rot",
					0
				},
				
				{
					"display_2_speed_1_rot",
					0
				},
				
				{
					"display_2_speed_10_rot",
					0
				},
				
				{
					"display_2_speed_100_rot",
					0
				},
				
				{
					"display_2_vert_speed_rot",
					0
				},
				
				{
					"display_2_vtol_1_rot",
					1
				},
				
				{
					"display_2_vtol_2_rot",
					1
				},
				
				{
					"display_at_1_hide",
					1
				},
				
				{
					"display_at_2_hide",
					1
				},
				
				{
					"display_at_3_hide",
					1
				},
				
				{
					"display_at_4_hide",
					1
				},
				
				{
					"display_at_5_hide",
					1
				},
				
				{
					"display_at_6_hide",
					1
				},
				
				{
					"display_at_7_hide",
					1
				},
				
				{
					"display_at_8_hide",
					1
				},
				
				{
					"display_mg_ammo_1_hide",
					1
				},
				
				{
					"display_mg_ammo_2_hide",
					1
				},
				
				{
					"display_mg_ammo_3_hide",
					1
				},
				
				{
					"display_mg_ammo_4_hide",
					1
				},
				
				{
					"display_mg_ammo_5_hide",
					1
				},
				
				{
					"display_mg_ammo_6_hide",
					1
				},
				
				{
					"display_mg_ammo_7_hide",
					1
				},
				
				{
					"display_mg_ammo_8_hide",
					1
				},
				
				{
					"display_mg_ammo_9_hide",
					1
				},
				
				{
					"display_mg_ammo_10_hide",
					1
				},
				
				{
					"display_rocketspod_1_empty_hide",
					1
				},
				
				{
					"display_rocketspod_2_empty_hide",
					1
				},
				
				{
					"rocketb30_hide",
					1
				},
				
				{
					"rocketa30_hide",
					1
				},
				
				{
					"rocketb29_hide",
					1
				},
				
				{
					"rocketa29_hide",
					1
				},
				
				{
					"rocketb28_hide",
					1
				},
				
				{
					"rocketa28_hide",
					1
				},
				
				{
					"rocketb27_hide",
					1
				},
				
				{
					"rocketa27_hide",
					1
				},
				
				{
					"rocketb26_hide",
					1
				},
				
				{
					"rocketa26_hide",
					1
				},
				
				{
					"rocketb25_hide",
					1
				},
				
				{
					"rocketa25_hide",
					1
				},
				
				{
					"rocketb24_hide",
					1
				},
				
				{
					"rocketa24_hide",
					1
				},
				
				{
					"rocketb23_hide",
					1
				},
				
				{
					"rocketa23_hide",
					1
				},
				
				{
					"rocketb22_hide",
					1
				},
				
				{
					"rocketa22_hide",
					1
				},
				
				{
					"rocketb21_hide",
					1
				},
				
				{
					"rocketa21_hide",
					1
				},
				
				{
					"rocketb20_hide",
					1
				},
				
				{
					"rocketa20_hide",
					1
				},
				
				{
					"rocketb19_hide",
					1
				},
				
				{
					"rocketa19_hide",
					1
				},
				
				{
					"rocketb18_hide",
					1
				},
				
				{
					"rocketa18_hide",
					1
				},
				
				{
					"rocketb17_hide",
					1
				},
				
				{
					"rocketa17_hide",
					1
				},
				
				{
					"rocketb16_hide",
					1
				},
				
				{
					"rocketa16_hide",
					1
				},
				
				{
					"rocketb15_hide",
					1
				},
				
				{
					"rocketa15_hide",
					1
				},
				
				{
					"rocketb14_hide",
					1
				},
				
				{
					"rocketa14_hide",
					1
				},
				
				{
					"rocketb13_hide",
					1
				},
				
				{
					"rocketa13_hide",
					1
				},
				
				{
					"rocketb12_hide",
					1
				},
				
				{
					"rocketa12_hide",
					1
				},
				
				{
					"rocketb11_hide",
					1
				},
				
				{
					"rocketa11_hide",
					1
				},
				
				{
					"rocketb10_hide",
					1
				},
				
				{
					"rocketa10_hide",
					1
				},
				
				{
					"rocketb9_hide",
					1
				},
				
				{
					"rocketa9_hide",
					1
				},
				
				{
					"rocketb8_hide",
					1
				},
				
				{
					"rocketa8_hide",
					1
				},
				
				{
					"rocketb6_hide",
					1
				},
				
				{
					"rocketa6_hide",
					1
				},
				
				{
					"rocketb5_hide",
					1
				},
				
				{
					"rocketa5_hide",
					1
				},
				
				{
					"rocketb4_hide",
					1
				},
				
				{
					"rocketa4_hide",
					1
				},
				
				{
					"rocketb3_hide",
					1
				},
				
				{
					"rocketa3_hide",
					1
				},
				
				{
					"rocketb2_hide",
					1
				},
				
				{
					"rocketa2_hide",
					1
				},
				
				{
					"rocketb7_hide",
					1
				},
				
				{
					"rocketa7_hide",
					1
				},
				
				{
					"rocketb1_hide",
					1
				},
				
				{
					"rocketa1_hide",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh3",
				"cannon_muzzleflash",
				"light_1_hide",
				"light_2_hide",
				"light_3_hide",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.1589999;
			verticalOffsetWorld=-0.035999998;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
	};

	class BDA_UNSC_D77_TC_Pelican_Single: Splits_Pelican_base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 15000;
		side = 1;
		vehicleClass = "Air";
		dlc="BDA";
		author = "Rib & I'm Kreepy";
		faction = "B_BDCUNSC";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_D77_TC_Pelican.jpg";
		displayName = "D77-TC Pelican (Single)";
		memoryPointDriverOptics= "PIP2_pos";

		//Weapons
		weapons[] = {
			"CMFlareLauncher",
			"BDA_missiles_Guided_Anvil3",
			"BDA_MG470_40mm",
			"Laserdesignator_mounted"
		};
		magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"BDA_missiles_LGIR_Anvil3_x60",
			"BDA_250rnd_40mm_G_MP_Belt",
			"BDA_250rnd_40mm_G_HE_Belt",
			"Laserbatteries"
		};
		crew = "B_BDA_Pilot";

		//single seat stuff
		class pilotCamera {
			class OpticsIn {
				class Wide {
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(60 / 120)";
					minFov = "(60 / 120)";
					maxFov = "(60 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Medium: Wide {
					opticsDisplayName = "MFOV";
					initFov = "(12 / 120)";
					minFov = "(12 / 120)";
					maxFov = "(12 / 120)";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
				};
				class Narrow: Wide {
					opticsDisplayName = "NFOV";
					initFov = "(4 / 120)";
					minFov = "(4 / 120)";
					maxFov = "(4 / 120)";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
				};
				class VeryNarrow: Wide {
					opticsDisplayName = "VFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
				};
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -20;
			maxElev = 90;
			initElev = 5;
			maxXRotSpeed = 1.0;
			maxYRotSpeed = 1.0;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class Turrets: Turrets {
			delete MainTurret;
			class RearDoorGun: RearDoorGun {
				gunnerType = "B_BDA_Crewman";
				gunnerName = "Door Gunner";
				weapons[] = {
					"BDA_M247T_Coax"
				};
				magazines[] = {
					"BDA_1200rnd_762x51_Box_Tracer"
				}; 
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerName="Standing Seat 1";
				crew="B_BDA_SquadLead";
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerName="Standing Seat 2";
				crew="B_BDA_Breacher";
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerName="Standing Seat 3";
				crew="B_BDA_Rocket";
			};
			class CargoTurret_04: CargoTurret_04
			{
				gunnerName="Standing Seat 4";
				crew="B_BDA_Rifleman";
			};
			class CargoTurret_05: CargoTurret_05
			{
				gunnerName="Standing Seat 5";
				crew="B_BDA_Autorifleman";
			};
			class CargoTurret_06: CargoTurret_06
			{
				gunnerName="Standing Seat 6";
			};
			class CargoTurret_07: CargoTurret_07
			{
				gunnerName="Standing Seat 7";
				crew="B_BDA_Medic";
			};
			class CargoTurret_08: CargoTurret_08
			{
				gunnerName="Standing Seat 8";
				crew="B_BDA_Demo";
			};
			class CargoTurret_09: CargoTurret_09
			{
				gunnerName="Standing Seat 9";
				crew="B_BDA_Sniper";
			};
			class CargoTurret_10: CargoTurret_10
			{
				gunnerName="Standing Seat 10";
			};
			class CargoTurret_11: CargoTurret_11
			{
				gunnerName="Standing Seat 11";
				crew="B_BDA_Teamleader";
			};
			class CargoTurret_12: CargoTurret_12
			{
				gunnerName="Standing Seat 12";
			};
			class CargoTurret_13: CargoTurret_13
			{
				gunnerName="Standing Seat 13";
				crew="B_BDA_Crewman";
			};
			class CargoTurret_14: CargoTurret_14
			{
				gunnerName="Standing Seat 14";
			};
			class CargoTurret_15: CargoTurret_15
			{
				gunnerName="Standing Seat 15";
				crew="B_BDA_Rifleman";
			};
		};

		//textures
		textureList[]={
			"UNSC_BDA_Green", 1,
			"UNSC_BDA_Black", 1,
			"UNSC_BDA_W610", 1,
			"UNSC_BDA_Winter", 1
		};
		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
			"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
			"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
		};

		class textureSources {
			class UNSC_BDA_Green {
				displayName="UNSC Green";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class UNSC_BDA_Black {
				displayName="UNSC Black";
				author="Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_B_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class UNSC_BDA_W610 {
				displayName="UNSC Whiskey 610";
				author="Rib";
				textures[]={
					"\BDA_Vehicles\data\customs\pelican\BDA_610_body_co.paa",
					"\BDA_Vehicles\data\customs\pelican\BDA_wings_and_gear_W_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};			
			class UNSC_BDA_Winter {
				displayName="UNSC Winter";
				author="SplitJaw/Rib";
				textures[]= {
					"\BDA_Vehicles\data\pelican\BDA_Wi_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_Wi_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_Wi_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class GreenCamo {
					displayName = "Green";
					statement = "['UNSC_BDA_Green', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
				class WinterCamo {
					displayName = "Winter";
					statement = "['UNSC_BDA_Winter', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
				class BlackCamo {
					displayName = "Black";
					statement = "['UNSC_BDA_Black', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
				class W610Camo {
					displayName = "Whiskey610";
					statement = "['UNSC_BDA_W610', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
            };
        };

		class UserActions {
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn BDA_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement = "Splits_pelicanloadSupplyPods_Menu_PelicanObject = this; createDialog ""Splits_pelicanloadSupplyPods_Menu""; Splits_pelicanloadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL Splits_pelicanloadSupplyPods_Menu_PelicanObject;  Splits_pelicanloadSupplyPods_Menu_cam CamSetTarget Splits_pelicanloadSupplyPods_Menu_PelicanObject; Splits_pelicanloadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; Splits_pelicanloadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; Splits_pelicanloadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn Splits_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""Splits_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn Splits_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]";
				animPeriod = 5;
			};
			class RampClose : RampOpen
			{
				userActionID = 51;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]";
				animPeriod = 5;
			};
			class ThrusterEngage
			{
				userActionID = 122;
				displayName = "ENGAGE FORWARD THRUSTERS";
				displayNameDefault = "ENGAGE FORWARD THRUSTERS";
				textToolTip = "ENGAGE FORWARD THRUSTERS";
				position = "cargo_door_handle";
				priority = 10;
				radius = 3;
				onlyForPlayer = 0;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterEngage";
				animPeriod = 4;
			};
			class ThrusterDisengage : ThrusterEngage
			{
				userActionID = 123;
				displayName = "DISENGAGE FORWARD THRUSTERS";
				displayNameDefault = "DISENGAGE FORWARD THRUSTERS";
				textToolTip = "DISENGAGE FORWARD THRUSTERS";
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement = "0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage: ThrusterEngage
			{
				userActionID = 124;
				displayName = "ENGAGE AIRBRAKES";
				displayNameDefault = "ENGAGE AIRBRAKES";
				textToolTip = "ENGAGE AIRBRAKES";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};
		//Structural
		armor = 280;
		maxSpeed = 600;
		fuelConsumptionRate = 0.32;

		//TFAR Config
		tf_range = 50000;
		tf_isolatedAmount = 0.45;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
		tf_hasRadio = 1;
		enableRadio = 1;

		//Radar & Sensors
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";

		//hud colour change
		class MFD {
			class MFD_Pilot_1
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={0};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0.25,1,0.25};
					condition="on";
					class ReticleGroup
					{
						color[]={1,1,1};
						class Reticle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.50142902,0.49276599},
									1
								},
								
								{
									{0.505,0.49276599},
									1
								},
								
								{
									{0.505,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49780199},
									1
								},
								
								{
									{0.50142902,0.49276599},
									1
								},
								{},
								
								{
									{0.50928599,0.49578801},
									1
								},
								
								{
									{0.587143,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.50283903},
									1
								},
								
								{
									{0.50285703,0.59752798},
									1
								},
								{},
								
								{
									{0.49857101,0.49578801},
									1
								},
								
								{
									{0.41999999,0.49578801},
									1
								},
								{},
								
								{
									{0.50285703,0.39404801},
									1
								},
								
								{
									{0.50285703,0.48672199},
									1
								},
								{},
								
								{
									{0.62,0.339652},
									1
								},
								
								{
									{0.65285701,0.339652},
									1
								},
								
								{
									{0.65285701,0.382967},
									1
								},
								{},
								
								{
									{0.65285701,0.615659},
									1
								},
								
								{
									{0.65285701,0.65998203},
									1
								},
								
								{
									{0.62071401,0.65998203},
									1
								},
								{},
								
								{
									{0.38428599,0.65998203},
									1
								},
								
								{
									{0.35142899,0.65998203},
									1
								},
								
								{
									{0.35142899,0.615659},
									1
								},
								{},
								
								{
									{0.38428599,0.339652},
									1
								},
								
								{
									{0.35142899,0.339652},
									1
								},
								
								{
									{0.35142899,0.382967},
									1
								}
							};
						};
						class ModeText
						{
							type="text";
							source="static";
							text="Mode: TI WHOT";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.31999999},
								1
							};
							right[]=
							{
								{0.07,0.31999999},
								1
							};
							down[]=
							{
								{0.039999999,0.345},
								1
							};
						};
						class RangeText
						{
							type="text";
							source="static";
							text="Range:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.33000001,0.81},
								1
							};
							right[]=
							{
								{0.37,0.81},
								1
							};
							down[]=
							{
								{0.33000001,0.84500003},
								1
							};
						};
						class Fuel
						{
							type="text";
							source="laserDist";
							sourceScale=1;
							sourceLength=4;
							align="right";
							scale=1;
							pos[]=
							{
								{0.47999999,0.81},
								1
							};
							right[]=
							{
								{0.51999998,0.81},
								1
							};
							down[]=
							{
								{0.47999999,0.84500003},
								1
							};
						};
					};
				};
			};
			class MFD_Pilot_2
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class Time
					{
						type="text";
						source="time";
						text="%X";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.11},
							1
						};
						right[]=
						{
							{0.13,0.11},
							1
						};
						down[]=
						{
							{0.029999999,0.2},
							1
						};
					};
					class Fuel
					{
						type="text";
						source="fuel";
						text="%X";
						sourceScale=2517;
						sourceLength=4;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.31},
							1
						};
						right[]=
						{
							{0.13,0.31},
							1
						};
						down[]=
						{
							{0.029999999,0.40000001},
							1
						};
					};
					class LBSText
					{
						type="text";
						source="static";
						text="LBS";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.30000001,0.31},
							1
						};
						right[]=
						{
							{0.40000001,0.31},
							1
						};
						down[]=
						{
							{0.30000001,0.40000001},
							1
						};
					};
					class GridX
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceOffset=-0.5;
						sourceLength=3;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.61000001},
							1
						};
						right[]=
						{
							{0.13,0.61000001},
							1
						};
						down[]=
						{
							{0.029999999,0.69999999},
							1
						};
					};
					class GridY: GridX
					{
						source="coordinateY";
						pos[]=
						{
							{0.23999999,0.61000001},
							1
						};
						right[]=
						{
							{0.34,0.61000001},
							1
						};
						down[]=
						{
							{0.23999999,0.69999999},
							1
						};
					};
					class GridText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.029999999,0.50999999},
							1
						};
						right[]=
						{
							{0.13,0.50999999},
							1
						};
						down[]=
						{
							{0.029999999,0.60000002},
							1
						};
					};
				};
			};
			class MFD_Pilot_3
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={-2};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on";
					class CollectiveGroup
					{
						condition="simulRTD";
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
						class CollectiveNumber
						{
							type="text";
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.22,0.2},
								1
							};
							right[]=
							{
								{0.28,0.2},
								1
							};
							down[]=
							{
								{0.22,0.23999999},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="left";
						scale=1;
						pos[]=
						{
							{0.28,0.45199999},
							1
						};
						right[]=
						{
							{0.31999999,0.45199999},
							1
						};
						down[]=
						{
							{0.28,0.49200001},
							1
						};
					};
					class AltNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							{0.75,0.45199999},
							1
						};
						right[]=
						{
							{0.79000002,0.45199999},
							1
						};
						down[]=
						{
							{0.75,0.49200001},
							1
						};
					};
					class CruiseMode
					{
						condition="1+((altitudeASL-27) min 1) - autohover";
						class AltNumberASL
						{
							type="text";
							source="altitudeASL";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.81,0.16},
								1
							};
							right[]=
							{
								{0.85000002,0.16},
								1
							};
							down[]=
							{
								{0.81,0.2},
								1
							};
						};
					};
				};
			};
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.00,1.00,0.2,1.0}; //original RGBA=0.169,0.85100001,0.83899999
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				enableParallax=1;
				font="LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]={0,-0.0024999999};
						pos10[]={0.0099999998,0.0024999999};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.15,1.0,0.2,1.0}; //original 0.15000001,0.15000001,1,1 RGBA
					condition="on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.40000001,0.86000001},
								1
							},
							
							{
								{0.40000001,0.94},
								1
							},
							
							{
								{0.60000002,0.94},
								1
							},
							
							{
								{0.60000002,0.86000001},
								1
							},
							
							{
								{0.40000001,0.86000001},
								1
							},
							{},
							
							{
								{0.40000001,0.88499999},
								1
							},
							
							{
								{0.40799999,0.88499999},
								1
							},
							{},
							
							{
								{0.60000002,0.88499999},
								1
							},
							
							{
								{0.59200001,0.88499999},
								1
							},
							{},
							
							{
								{0.5,0.86000001},
								1
							},
							
							{
								{0.5,0.86799997},
								1
							},
							{},
							
							{
								{0.5,0.94},
								1
							},
							
							{
								{0.5,0.93199998},
								1
							},
							{},
							
							{
								{0.51999998,0.079999998},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								{0.47999999,0.079999998},
								1
							},
							
							{
								{0.51999998,0.079999998},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089802},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							{}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.29578;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.82564098},
								1
							};
							right[]=
							{
								{0.54000002,0.82564098},
								1
							};
							down[]=
							{
								{0.5,0.85512799},
								1
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class MGun
					{
						condition="mgun+rocket";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
		};
		class Components: Components {
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=6000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=45;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=100;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=75;
						angleRangeVertical=50;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=300;
						angleRangeHorizontal=150;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={6000,4000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent {
				uiPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class Pylons {
					class PylonRight1
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=5;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="Splits_PylonMissile_AA_Pelican_x2";
						priority=4;
						hardpoints[]=
						{
							"Splits_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="Splits_PylonMissile_AGM_Bottom_Pelican_x3";
						priority=3;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="BDA_PylonMissile_AA_Pelican_x4";
						priority=2;
						hardpoints[]=
						{
							"Splits_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.2};
					};
					class PylonsLeft1: PylonRight1
					{
						UIposition[]={0.25,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft2: PylonRight2
					{
						UIposition[]={0.25,0.40000001};
						mirroredMissilePos=1;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=1;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class Presets {
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",

							"BDA_PylonMissile_AA_Pelican_x4",
							"BDA_PylonMissile_AA_Pelican_x4",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class AT
					{
						displayName="AT";
						attachment[]=
						{
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",

							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
							"Splits_PylonMissile_AA_Pelican_x2",
							"Splits_PylonMissile_AA_Pelican_x2"
						};
					};
					class OPTRE_Default
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_2Rnd_Jackknife_missile",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AA
					{
						displayName="OPTRE AA";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",

							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
					class OPTRE_AT
					{
						displayName="OPTRE AT";
						attachment[]=
						{
							"OPTRE_6Rnd_C2GMLS_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",
							"OPTRE_4Rnd_Scorpion_missiles",

							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_6Rnd_C2GMLS_missiles"
						};
					};
				};
			};
		};

		//Storage
		class TransportItems {
			class _xx_FirstAidKit {name="FirstAidKit"; count=15;};
			class _xx_Medikit {name="Medikit"; count=5;};
			class _xx_ACE_CableTie {name="ACE_CableTie"; count=30;};
			class _xx_OPTRE_Biofoam {name="OPTRE_Biofoam"; count=20;};
			class _xx_ACE_Splint {name="ACE_Splint"; count=16;};
			class _xx_Toolkit {name="ToolKit"; count=2;};
			class _xx_ACE_WaterBottle {name="ACE_WaterBottle"; count=10;};
			class _xx_ACE_EntrenchingTool {name="ACE_EntrenchingTool"; count=4;};
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=2;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=20;};
			//class _xx_ACE_
		};
		ace_cargo_space = 48;
		class Ace_Cargo {
			class Cargo {
				class xx_SpareWheel {
					type="ACE_Wheel";
					amount=8;
				};
				class xx_SpareTrack {
					type="ACE_Track";
					amount=2;
				};
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

		//misc
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damage_hide",
					0
				},
				
				{
					"glass_1",
					0
				},
				
				{
					"glass_2",
					0
				},
				
				{
					"glass_3",
					0
				},
				
				{
					"glass_4",
					0
				},
				
				{
					"glass_5",
					0
				},
				
				{
					"glass_6",
					0
				},
				
				{
					"glass_7",
					0
				},
				
				{
					"glass_8",
					0
				},
				
				{
					"glass_9",
					0
				},
				
				{
					"glass_10",
					0
				},
				
				{
					"glass_11",
					0
				},
				
				{
					"glass_12",
					0
				},
				
				{
					"glass_13",
					0
				},
				
				{
					"glass_14",
					0
				},
				
				{
					"glass_15",
					0
				},
				
				{
					"glass_16",
					0
				},
				
				{
					"glass_17",
					0
				},
				
				{
					"glass_18",
					0
				},
				
				{
					"glass_19",
					0
				},
				
				{
					"glass_20",
					0
				},
				
				{
					"cannon_barrel_hide",
					0
				},
				
				{
					"rotor_1_blur_hide",
					0
				},
				
				{
					"rotor_1_static_hide",
					0
				},
				
				{
					"rotor_2_blur_hide",
					0
				},
				
				{
					"rotor_2_static_hide",
					0
				},
				
				{
					"engine_1_1_rot",
					1
				},
				
				{
					"engine_1_2_rot",
					1
				},
				
				{
					"engine_2_1_rot",
					1
				},
				
				{
					"engine_2_2_rot",
					1
				},
				
				{
					"stator_1_rudder_rot",
					0
				},
				
				{
					"stator_1_elevator_rot",
					0
				},
				
				{
					"rotor_1_rot",
					0
				},
				
				{
					"stator_2_rudder_rot",
					0
				},
				
				{
					"stator_2_elevator_rot",
					0
				},
				
				{
					"rotor_2_rot",
					0
				},
				
				{
					"gear_1_move",
					0
				},
				
				{
					"gear_2_rot",
					0
				},
				
				{
					"gear_2_a_rot",
					0
				},
				
				{
					"gear_2_b_rot",
					0
				},
				
				{
					"gear_3_rot",
					0
				},
				
				{
					"gear_3_a_rot",
					0
				},
				
				{
					"gear_3_b_rot",
					0
				},
				
				{
					"gear_1_hatch_1_rot",
					0
				},
				
				{
					"gear_1_hatch_2_rot",
					0
				},
				
				{
					"wheel_1_rot",
					0
				},
				
				{
					"wheel_2_rot",
					0
				},
				
				{
					"wheel_3_rot",
					0
				},
				
				{
					"gear_1_damper_move",
					0
				},
				
				{
					"gear_1_damper_rotate",
					0
				},
				
				{
					"gear_1_link_1_rotate",
					0
				},
				
				{
					"gear_1_link_2_rotate",
					0
				},
				
				{
					"gear_2_damper_move",
					0
				},
				
				{
					"gear_3_damper_move",
					0
				},
				
				{
					"door_1_rot",
					0
				},
				
				{
					"cargoseats_hide",
					1
				},
				
				{
					"display_off_hide",
					0
				},
				
				{
					"positionlights_hide",
					0
				},
				
				{
					"cannon_turret_rot",
					0
				},
				
				{
					"cannon_rot",
					0.090000004
				},
				
				{
					"cannon_muzzleflash_hide",
					0
				},
				
				{
					"cannon_barrel_move",
					1
				},
				
				{
					"rotor_1_hide",
					0
				},
				
				{
					"rotor_1_unhide",
					0
				},
				
				{
					"rotor_2_hide",
					0
				},
				
				{
					"rotor_2_unhide",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"stick_control_1_pitch_rot",
					0
				},
				
				{
					"Throttle",
					0
				},
				
				{
					"stick_control_2_pitch_rot",
					0
				},
				
				{
					"stick_control_1_roll_rot",
					0
				},
				
				{
					"stick_control_2_roll_rot",
					0
				},
				
				{
					"pedals_1_left_1_move",
					0
				},
				
				{
					"pedals_1_right_1_move",
					0
				},
				
				{
					"pedals_1_left_2_rot",
					0
				},
				
				{
					"pedals_1_right_2_rot",
					0
				},
				
				{
					"pedals_2_left_1_move",
					0
				},
				
				{
					"pedals_2_right_1_move",
					0
				},
				
				{
					"pedals_2_left_2_rot",
					0
				},
				
				{
					"pedals_2_right_2_rot",
					0
				},
				
				{
					"display_1_alt_ladder_rot",
					8.1599998
				},
				
				{
					"display_1_alt_1_rot",
					8.1599998
				},
				
				{
					"display_1_alt_10_rot",
					8.1599998
				},
				
				{
					"display_1_alt_100_rot",
					8.1599998
				},
				
				{
					"display_1_alt_1000_rot",
					8.1599998
				},
				
				{
					"display_1_compass_rot",
					0
				},
				
				{
					"display_1_fuel_move",
					1
				},
				
				{
					"display_1_gear_down_move",
					0
				},
				
				{
					"display_1_gear_up_move",
					0
				},
				
				{
					"display_1_horizon_bank_rot",
					0
				},
				
				{
					"display_1_horizon_move",
					0
				},
				
				{
					"display_1_hydraulics_1_rot",
					0
				},
				
				{
					"display_1_hydraulics_2_rot",
					0
				},
				
				{
					"display_1_oil_1_rot",
					1
				},
				
				{
					"display_1_oil_2_rot",
					1
				},
				
				{
					"display_1_oil_3_rot",
					1
				},
				
				{
					"display_1_oil_4_rot",
					1
				},
				
				{
					"display_1_oil_5_rot",
					1
				},
				
				{
					"display_1_oil_6_rot",
					1
				},
				
				{
					"display_1_pitch_rot",
					0
				},
				
				{
					"display_1_roll_rot",
					0
				},
				
				{
					"display_1_yaw_rot",
					0
				},
				
				{
					"display_1_rpm_1_rot",
					0
				},
				
				{
					"display_1_rpm_2_rot",
					0
				},
				
				{
					"display_1_speed_ladder_rot",
					0
				},
				
				{
					"display_1_speed_1_rot",
					0
				},
				
				{
					"display_1_speed_10_rot",
					0
				},
				
				{
					"display_1_speed_100_rot",
					0
				},
				
				{
					"display_1_vert_speed_rot",
					0
				},
				
				{
					"display_1_voltage_1_rot",
					0
				},
				
				{
					"display_1_voltage_2_rot",
					0
				},
				
				{
					"display_1_vtol_1_rot",
					1
				},
				
				{
					"display_1_vtol_2_rot",
					1
				},
				
				{
					"display_2_alt_ladder_rot",
					8.1599998
				},
				
				{
					"display_2_alt_1_rot",
					8.1599998
				},
				
				{
					"display_2_alt_10_rot",
					8.1599998
				},
				
				{
					"display_2_alt_100_rot",
					8.1599998
				},
				
				{
					"display_2_alt_1000_rot",
					8.1599998
				},
				
				{
					"display_2_compass_rot",
					0
				},
				
				{
					"display_2_fuel_move",
					1
				},
				
				{
					"display_2_horizon_bank_rot",
					0
				},
				
				{
					"display_2_horizon_move",
					0
				},
				
				{
					"display_2_oil_1_rot",
					1
				},
				
				{
					"display_2_oil_2_rot",
					1
				},
				
				{
					"display_2_speed_ladder_rot",
					0
				},
				
				{
					"display_2_speed_1_rot",
					0
				},
				
				{
					"display_2_speed_10_rot",
					0
				},
				
				{
					"display_2_speed_100_rot",
					0
				},
				
				{
					"display_2_vert_speed_rot",
					0
				},
				
				{
					"display_2_vtol_1_rot",
					1
				},
				
				{
					"display_2_vtol_2_rot",
					1
				},
				
				{
					"display_at_1_hide",
					1
				},
				
				{
					"display_at_2_hide",
					1
				},
				
				{
					"display_at_3_hide",
					1
				},
				
				{
					"display_at_4_hide",
					1
				},
				
				{
					"display_at_5_hide",
					1
				},
				
				{
					"display_at_6_hide",
					1
				},
				
				{
					"display_at_7_hide",
					1
				},
				
				{
					"display_at_8_hide",
					1
				},
				
				{
					"display_mg_ammo_1_hide",
					1
				},
				
				{
					"display_mg_ammo_2_hide",
					1
				},
				
				{
					"display_mg_ammo_3_hide",
					1
				},
				
				{
					"display_mg_ammo_4_hide",
					1
				},
				
				{
					"display_mg_ammo_5_hide",
					1
				},
				
				{
					"display_mg_ammo_6_hide",
					1
				},
				
				{
					"display_mg_ammo_7_hide",
					1
				},
				
				{
					"display_mg_ammo_8_hide",
					1
				},
				
				{
					"display_mg_ammo_9_hide",
					1
				},
				
				{
					"display_mg_ammo_10_hide",
					1
				},
				
				{
					"display_rocketspod_1_empty_hide",
					1
				},
				
				{
					"display_rocketspod_2_empty_hide",
					1
				},
				
				{
					"rocketb30_hide",
					1
				},
				
				{
					"rocketa30_hide",
					1
				},
				
				{
					"rocketb29_hide",
					1
				},
				
				{
					"rocketa29_hide",
					1
				},
				
				{
					"rocketb28_hide",
					1
				},
				
				{
					"rocketa28_hide",
					1
				},
				
				{
					"rocketb27_hide",
					1
				},
				
				{
					"rocketa27_hide",
					1
				},
				
				{
					"rocketb26_hide",
					1
				},
				
				{
					"rocketa26_hide",
					1
				},
				
				{
					"rocketb25_hide",
					1
				},
				
				{
					"rocketa25_hide",
					1
				},
				
				{
					"rocketb24_hide",
					1
				},
				
				{
					"rocketa24_hide",
					1
				},
				
				{
					"rocketb23_hide",
					1
				},
				
				{
					"rocketa23_hide",
					1
				},
				
				{
					"rocketb22_hide",
					1
				},
				
				{
					"rocketa22_hide",
					1
				},
				
				{
					"rocketb21_hide",
					1
				},
				
				{
					"rocketa21_hide",
					1
				},
				
				{
					"rocketb20_hide",
					1
				},
				
				{
					"rocketa20_hide",
					1
				},
				
				{
					"rocketb19_hide",
					1
				},
				
				{
					"rocketa19_hide",
					1
				},
				
				{
					"rocketb18_hide",
					1
				},
				
				{
					"rocketa18_hide",
					1
				},
				
				{
					"rocketb17_hide",
					1
				},
				
				{
					"rocketa17_hide",
					1
				},
				
				{
					"rocketb16_hide",
					1
				},
				
				{
					"rocketa16_hide",
					1
				},
				
				{
					"rocketb15_hide",
					1
				},
				
				{
					"rocketa15_hide",
					1
				},
				
				{
					"rocketb14_hide",
					1
				},
				
				{
					"rocketa14_hide",
					1
				},
				
				{
					"rocketb13_hide",
					1
				},
				
				{
					"rocketa13_hide",
					1
				},
				
				{
					"rocketb12_hide",
					1
				},
				
				{
					"rocketa12_hide",
					1
				},
				
				{
					"rocketb11_hide",
					1
				},
				
				{
					"rocketa11_hide",
					1
				},
				
				{
					"rocketb10_hide",
					1
				},
				
				{
					"rocketa10_hide",
					1
				},
				
				{
					"rocketb9_hide",
					1
				},
				
				{
					"rocketa9_hide",
					1
				},
				
				{
					"rocketb8_hide",
					1
				},
				
				{
					"rocketa8_hide",
					1
				},
				
				{
					"rocketb6_hide",
					1
				},
				
				{
					"rocketa6_hide",
					1
				},
				
				{
					"rocketb5_hide",
					1
				},
				
				{
					"rocketa5_hide",
					1
				},
				
				{
					"rocketb4_hide",
					1
				},
				
				{
					"rocketa4_hide",
					1
				},
				
				{
					"rocketb3_hide",
					1
				},
				
				{
					"rocketa3_hide",
					1
				},
				
				{
					"rocketb2_hide",
					1
				},
				
				{
					"rocketa2_hide",
					1
				},
				
				{
					"rocketb7_hide",
					1
				},
				
				{
					"rocketa7_hide",
					1
				},
				
				{
					"rocketb1_hide",
					1
				},
				
				{
					"rocketa1_hide",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh3",
				"cannon_muzzleflash",
				"light_1_hide",
				"light_2_hide",
				"light_3_hide",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.1589999;
			verticalOffsetWorld=-0.035999998;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
	};

	class BDA_UNSC_Hornet: OPTRE_Hornet_Base {
		dlc = "BDA";
		author = "Rib";
		faction = "B_BDCUNSC";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "AV-15 Heavy Hornet";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_Hornet.jpg";
		crew = "B_BDA_Pilot";
		OPTRE_canThrust = 1;
		weapons[] = {
			"OPTRE_GUA23AW",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS",
			"OPTRE_missiles_Anvil3"
		};
		magazines[] = {
			"OPTRE_2000Rnd_30mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_16Rnd_Anvil3_missiles",
		};
		armor = 240;

		//Radar & Sensors
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";

		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"
		};
		class textureSources {
			class BDA_standard {
				displayName="Standard Marine";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Blackout {
				displayName="Blackout";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Dark {
				displayName="Urban";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Desert {
				displayName="Desert";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Grey {
				displayName="Grey";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Jungle {
				displayName="Jungle";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Olive {
				displayName="Olive";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Woodland {
				displayName="Woodland";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Winter {
				displayName="Winter";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]= {
			"BDA_Standard", 1,
			"BDA_Blackout", 1,
			"BDA_Dark", 1,
			"BDA_Desert", 1,
			"BDA_Grey", 1,
			"BDA_Jungle", 1,
			"BDA_Olive", 1,
			"BDA_Woodland", 1,
			"BDA_Winter", 1
		};

		class UserActions {
			class ThrusterEngage {
				userActionID = 90;
				displayName = "<t color='#b00c00'>Engage Thrusters";
				textToolTip = "Engage Thrusters";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
				priority=10;
				showWindow=0;
				radius=100000;
				animPeriod=5;
				onlyForPlayer=0;
				position="cargo_door_handle";
			};
			class ThrusterDisengage: ThrusterEngage {
				userActionID = 91;
				displayName = "<t color='#ffe11c'>Disengage Thrusters";
				textToolTip = "Disengage Thrusters";
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage: ThrusterEngage {
				userActionID = 92;
				displayName = "<t color='#0e2cc2'>Engage Airbrakes";
				textToolTip = "Engage Airbrakes";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Temperate {
					displayName = "Temperate Ops";
					class GreenCamo {
						displayName = "Standard";
						statement = "['BDA_Green', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_Jungle', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
					class OliveCamo {
						displayName = "Olive";
						statement = "['BDA_Olive', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_Woodland', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class WinterCamo {
						displayName = "Winter";
						statement = "['BDA_Winter', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
					class GreyCamo {
						displayName = "Grey";
						statement = "['BDA_Grey', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_Blackout', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
					class DarkCamo {
						displayName = "Darkie";
						statement = "['BDA_Dark', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_Desert', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
				};
            };
        };

		class Components: Components {
			class TransportPylonsComponent {
				UIPicture="\OPTRE_Vehicles_Air\Hornet\HornetPylonPic.paa";
				class pylons {
					class pylons1 {
						maxweight=600;
						hardpoints[] = {"OPAEX_Hardpoint_AV14"};
						attachment="OPTRE_8rnd_C2GMLS_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.100000,0.2};
						turret[]={};
					};
					class pylons2: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.22,0.2};
					};
					class pylons3: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.42,0.2};
					};
					class pylons4: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.54,0.2};
					};
				};
				class Presets {
					class Empty {
						displayName="Empty";
						attachment[]={};
					};
					class Default {
						displayName="Combat Air Patrol";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
						};
					};
					class CAS_AT {
						displayName="Vehicle Hunter";
						attachment[]={
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_2Rnd_Jackknife_missile"
						};
					};
					class CAS_Rockets {
						displayName="CAS Strafe";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=100;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};

	class BDA_UNSC_Hornet_Lite: OPTRE_Hornet_Base {
		dlc = "BDA";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Rib";
		faction = "B_BDCUNSC";
		side = 1;
		displayName = "AV-15 Hornet Stealth";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_Hornet.jpg";
		crew = "B_BDA_Pilot";
		armor = 200;
		cost = 2000;
		OPTRE_canThrust = 1;
		hiddenSelectionsTextures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};

		//Radar & Sensors
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";

		class textureSources {
			class BDA_standard {
				displayName="Standard Marine";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Blackout {
				displayName="Blackout";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Dark {
				displayName="Urban";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Desert {
				displayName="Desert";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Grey {
				displayName="Grey";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Jungle {
				displayName="Jungle";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Olive {
				displayName="Olive";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Woodland {
				displayName="Woodland";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Winter {
				displayName="Winter";
				author="Black Dagger Armory";
				textures[]={"BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]= {
			"BDA_Standard", 1,
			"BDA_Blackout", 1,
			"BDA_Dark", 1,
			"BDA_Desert", 1,
			"BDA_Grey", 1,
			"BDA_Jungle", 1,
			"BDA_Olive", 1,
			"BDA_Woodland", 1,
			"BDA_Winter", 1
		};

		class UserActions {
			class ThrusterEngage {
				userActionID = 90;
				displayName = "<t color='#b00c00'>Engage Thrusters";
				textToolTip = "Engage Thrusters";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
				priority=10;
				showWindow=0;
				radius=100000;
				animPeriod=5;
				onlyForPlayer=0;
				position="cargo_door_handle";
			};
			class ThrusterDisengage: ThrusterEngage {
				userActionID = 91;
				displayName = "<t color='#ffe11c'>Disengage Thrusters";
				textToolTip = "Disengage Thrusters";
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
			};
			class AirbrakeEngage: ThrusterEngage {
				userActionID = 92;
				displayName = "<t color='#0e2cc2'>Engage Airbrakes";
				textToolTip = "Engage Airbrakes";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Temperate {
					displayName = "Temperate Ops";
					class GreenCamo {
						displayName = "Standard";
						statement = "['BDA_Green', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_Jungle', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
					class OliveCamo {
						displayName = "Olive";
						condition = "driver vehicle player isEqualTo player";
						statement = "['BDA_Olive', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_Woodland', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class WinterCamo {
						displayName = "Winter";
						statement = "['BDA_Winter', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
					class GreyCamo {
						displayName = "Grey";
						statement = "['BDA_Grey', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_Blackout', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
					class DarkCamo {
						displayName = "Darkie";
						statement = "['BDA_Dark', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_Desert', 'BDA_UNSC_Hornet_Lite'] call BDA_fnc_chgTex";
					};
				};
            };
        };

		//weapons
		weapons[] = {
			"OPTRE_GUA23A",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS",
			"OPTRE_missiles_Anvil3"
		};
		magazines[] = {
			"OPTRE_2000Rnd_20mm_HEIAP",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_16Rnd_Anvil3_missiles",
		};

		class Components: Components {
			class TransportPylonsComponent {
				UIPicture="\OPTRE_Vehicles_Air\Hornet\HornetPylonPic.paa";
				class pylons {
					class pylons1 {
						maxweight=800;
						hardpoints[] = {"OPAEX_Hardpoint_AV14"};
						attachment="OPTRE_8rnd_C2GMLS_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.100000,0.2};
						turret[]={};
					};
					class pylons2: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.42,0.2};
					};
				};
				class Presets {
					class Empty {
						displayName="Empty";
						attachment[]={};
					};
					class Default {
						displayName="Combat Air Patrol";
						attachment[]={
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
						};
					};
					class CAS_AT {
						displayName="Vehicle Hunter";
						attachment[]={
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_2Rnd_Jackknife_missile"
						};
					};
					class CAS_Rockets {
						displayName="CAS Strafe";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles"
						};
					};
				};
			};
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=100;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={5000,3000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};

	class BDA_UNSC_Hornet_VTOL: VTOL_Base_F {
		scope = 2
		scopeCurator = 2;
		scopeArsenal = 2;
		vehicleClass = "BDA_UNSC_Air_Class";
		dlc = "BDA";
		author = "Rib";
		faction = "B_BDCUNSC";
		side = 1;
		displayName = "AV-15 Hornet VTOL";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_Hornet.jpg";
		model="\OPTRE_Vehicles_Air\Hornet\hornet.p3d";
		icon="OPTRE_Vehicles_Air\Hornet\HornetIcon.paa";
		picture="OPTRE_Vehicles_Air\Falcon\Data\icon2.paa";
		crew = "B_BDA_Pilot";
		weapons[] = {
			"OPTRE_GUA23AW",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS",
			"OPTRE_missiles_Anvil3"
		};
		magazines[] = {
			"OPTRE_2000Rnd_30mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_32Rnd_Anvil3_missiles",
		};
		hiddenSelections[]= {
			"camo1",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"
		};
		class textureSources {
			class BDA_standard {
				displayName="Standard Marine";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Blackout {
				displayName="Blackout";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Dark {
				displayName="Urban";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Desert {
				displayName="Desert";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Grey {
				displayName="Grey";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Jungle {
				displayName="Jungle";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Olive {
				displayName="Olive";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Woodland {
				displayName="Woodland";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Winter {
				displayName="Winter";
				author="Black Dagger Armory";
				textures[]={"\BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]= {
			"BDA_Standard", 1,
			"BDA_Blackout", 1,
			"BDA_Dark", 1,
			"BDA_Desert", 1,
			"BDA_Grey", 1,
			"BDA_Jungle", 1,
			"BDA_Olive", 1,
			"BDA_Woodland", 1,
			"BDA_Winter", 1
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class Temperate {
					displayName = "Temperate Ops";
					class GreenCamo {
						displayName = "Standard";
						statement = "['BDA_Green', 'BDA_UNSC_Hornet_VTOL'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_Jungle', 'BDA_UNSC_Hornet_VTOL'] call BDA_fnc_chgTex";
					};
					class OliveCamo {
						displayName = "Olive";
						statement = "['BDA_Olive', 'BDA_UNSC_Hornet_VTOL'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_Woodland', 'BDA_UNSC_Hornet_VTOL'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class WinterCamo {
						displayName = "Winter";
						statement = "['BDA_Winter', 'BDA_UNSC_Hornet_VTOL'] call BDA_fnc_chgTex";
					};
					class GreyCamo {
						displayName = "Grey";
						statement = "['BDA_Grey', 'BDA_UNSC_Hornet_VTOL'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_Blackout', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
					class DarkCamo {
						displayName = "Darkie";
						statement = "['BDA_Dark', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_Desert', 'BDA_UNSC_Hornet'] call BDA_fnc_chgTex";
					};
				};
            };
        };

		class MFD {
			class B_Plane_Fighter_01_static_HUD {
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.234,0.23};
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-40) + (abs(cameraHeadingDiffX)>=30))*on";
					class VelocityLine
					{
						type="line";
						width=1;
						points[]=
						{
							
							{
								"PlaneW",
								1
							},
							
							{
								"Velocity",
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.0049145301},
								1
							},
							
							{
								"Velocity",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"Velocity",
								{0.0049999999,0},
								1
							},
							
							{
								"Velocity",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"Velocity",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0,0.0049145301},
								1
							},
							
							{
								"Velocity",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"Velocity",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"Velocity",
								{-0.0049999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"Velocity",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"Velocity",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class ThrustVectoringAuto
					{
						condition = "-vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "AUTO";
							align = "left";
							scale = 1;
							pos[] = {{0.132,0.74},1};
							right[] = {{0.167,0.74},1};
							down[] = {{0.132,0.765},1};
						};
					};
					class ThrustVectoring
					{
						condition = "1+vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "vtolvectoring";
							sourceScale = 90;
							align = "left";
							scale = 1;
							pos[] = {{0.116,0.744},1};
							right[] = {{0.151,0.744},1};
							down[] = {{0.116,0.769},1};
						};
						class ThrustVectoringText
						{
							type = "text";
							source = "static";
							text = "°";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{0.132,0.745},1};
							right[] = {{0.167,0.745},1};
							down[] = {{0.132,0.77},1};
						};
						class VectoringArrow
						{
							type = "line";
							width = 3.0;
							points[] = {{"ThrustVectoringRotation",{0.01,0.0},1},{"ThrustVectoringRotation",{0.04,0.0},1},{},{"ThrustVectoringRotation",{0.04,0.02},1},{"ThrustVectoringRotation",{0.04,-0.02},1},{}};
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=1.5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=1.5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						color[]={1,0,0};
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class BrakesWarn
					{
						type="text";
						source="userText";
						sourceScale=1;
						sourceIndex=5;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38,-0.30000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.38 + 0.05",
								-0.30000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38,
								"-0.3 + 0.05"
							},
							1
						};
					};
					class OverSpeedGroup
					{
						type="group";
						condition="speed > 185";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							align="center";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.40000001,-0.25},
								1
							};
							right[]=
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							};
							down[]=
							{
								"PlaneW",
								{-0.40000001,-0.2},
								1
							};
						};
						class OverSpeedWarn
						{
							type="text";
							source="static";
							align="left";
							text="-OVERSPEED-";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.30000001,-0.17},
								1
							};
							right[]=
							{
								"PlaneW",
								
								{
									"-0.3 + 0.05",
									-0.17
								},
								1
							};
							down[]=
							{
								"PlaneW",
								
								{
									-0.30000001,
									"-0.17 + 0.05"
								},
								1
							};
						};
					};
					class AlphaNumber
					{
						type="text";
						source="AoA";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.162},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.162
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"0.162 + 0.05"
							},
							1
						};
					};
					class AlphaText
					{
						type="text";
						source="static";
						text="AoA:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.162},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.162
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.162 + 0.05"
							},
							1
						};
					};
					class GNumber
					{
						type="text";
						source="userText";
						sourceIndex=4;
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.213},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.213
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"0.213 + 0.05"
							},
							1
						};
					};
					class GText
					{
						type="text";
						source="static";
						text="G:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.213},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.213
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.213 + 0.05"
							},
							1
						};
					};
					class SpeedGroup
					{
						type="group";
						condition="speed < 185";
						class SpeedNumber
						{
							type="text";
							source="speed";
							sourceScale=3.5999999;
							align="center";
							scale=1;
							pos[]=
							{
								"PlaneW",
								{-0.40000001,-0.25},
								1
							};
							right[]=
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							};
							down[]=
							{
								"PlaneW",
								{-0.40000001,-0.2},
								1
							};
						};
					};
					class Grid
					{
						condition="on";
						class CoordXNumber
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="left";
							scale=1;
							pos[]=
							{
								{0.90600002,0.85399997},
								1
							};
							right[]=
							{
								{0.954,0.85399997},
								1
							};
							down[]=
							{
								{0.90600002,0.89899999},
								1
							};
						};
						class CoordYNumber: CoordXNumber
						{
							source="coordinateY";
							align="right";
							pos[]=
							{
								{0.92199999,0.85399997},
								1
							};
							right[]=
							{
								{0.96700001,0.85399997},
								1
							};
							down[]=
							{
								{0.92199999,0.89899999},
								1
							};
						};
						class Time: CoordXNumber
						{
							source="time";
							text="%X";
							align="center";
							pos[]=
							{
								{0.90700001,0.88},
								1
							};
							right[]=
							{
								{0.95499998,0.88},
								1
							};
							down[]=
							{
								{0.90700001,0.92500001},
								1
							};
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.60501802},
								1
							};
							down[]=
							{
								{0.92400002,0.64246398},
								1
							};
							right[]=
							{
								{0.96399999,0.60501802},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.60501802},
								1
							};
							right[]=
							{
								{0.917,0.60501802},
								1
							};
							down[]=
							{
								{0.87699997,0.64246398},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.60650003
								},
								1
							};
							right[]=
							{
								{0.875,0.60650003},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.6415
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.60650003
								},
								1
							};
							right[]=
							{
								{0.95499998,0.60650003},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.6415
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5   )"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5   )"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045 )"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="20-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=340)-20";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};

		class Components: Components {
			class TransportPylonsComponent {
				UIPicture="\OPTRE_Vehicles_Air\Hornet\HornetPylonPic.paa";
				class pylons {
					class pylons1 {
						maxweight=600;
						hardpoints[] = {"OPAEX_Hardpoint_AV14"};
						attachment="OPTRE_8rnd_C2GMLS_missiles";
						bay=-1;
						priority=2;
						UIposition[]={0.100000,0.2};
						turret[]={};
					};
					class pylons2: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.22,0.2};
					};
					class pylons3: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.42,0.2};
					};
					class pylons4: pylons1 {
						mirroredMissilePos=1;
						UIposition[]={0.54,0.2};
					};
				};
				class Presets {
					class Empty {
						displayName="Empty";
						attachment[]={};
					};
					class Default {
						displayName="Combat Air Patrol";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
							"OPTRE_8rnd_C2GMLS_missiles",
						};
					};
					class CAS_AT {
						displayName="Vehicle Hunter";
						attachment[]={
							"OPTRE_2Rnd_Jackknife_missile",
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_16Rnd_Anvil3_missiles",
							"OPTRE_2Rnd_Jackknife_missile"
						};
					};
					class CAS_Rockets {
						displayName="CAS Strafe";
						attachment[]={
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles",
							"OPTRE_32Rnd_Anvil3_missiles"
						};
					};
				};
			};
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR {
						class AirTarget {
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget {
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual {
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
						class AirTarget
						{
							minRange=5000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=80;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
				class Components: components {
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
				defaultDisplay="SensorDisplay";
				class Components: components {
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};

		class Turrets {
			delete CargoTurret_01;
			delete CargoTurret_02;
			delete CargoTurret_03;
			delete CargoTurret_04;
			delete CargoTurret_05;
			delete CargoTurret_06;
		};

		class Reflectors {
			class Right {
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
		};

		class HitPoints {
			class HitHull {
				armor=0.1;
				explosionShielding=1;
				name="HitHull";
				passThrough=0.5;
				visual="Hull";
				radius=0.0099999998;
				minimalHit=0.050000001;
				depends="Total";
				material=-1;
			};
			class HitFuel {
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
				name="HitFuel";
				passThrough=0.5;
				visual="Hit_Fuel";
				depends="0";
			};
			class HitAvionics {
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
				name="HitAvionics";
				passThrough=0.2;
				visual="Hit_Avionics";
				depends="0";
			};
		};

		class Exhausts {
			class Exhaust1 {
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust2 {
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};

		simulation="airplanex";
		driveOnComponent[]= {
			"skid"
		};
		class Wheels {};
		cost = 150000;
		accuracy = 1.5;
		armor = 240;
		fuelCapacity=300;
		gearRetracting=0;
		gunnerCanSee=31;
		commanderCanSee=31;
		driverCanSee=31;
		visionMode[]= {
			"Normal",
			"NVG",
			"Ti"
		};
		class ViewPilot {
			initAngleX=0;
			initAngley=0;
			minAnglex=-90;
			minAngley=-120;
			maxAnglex=90;
			maxAngley=120;
			initFov=0.75;
			minFov=0.375;
			maxFov=1.1;
		};
		memoryPointDriverOptics="Light_L";
		unitInfoType="RscOptics_CAS_Pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		class pilotCamera {
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(14.4 / 120)";
					minFov="(14.4 / 120)";
					maxFov="(14.4 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(4.8 / 120)";
					minFov="(4.8 / 120)";
					maxFov="(4.8 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-90;
			maxTurn=90;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=25;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		landingAoa="10*3.1415/180";
		maxSpeed=666;
		maxFordingDepth=0.80000001;
		vtol=4;
		VTOLYawInfluence=4;
		VTOLPitchInfluence=2;
		VTOLRollInfluence=2;
		envelope[]={0,0.0099999998,0.2,4,6,7.5999999,8.3999996,9.1999998,9.3999996,9.6000004,9.6999998,9.8000002,8,1};
		aileronSensitivity=0.89999998;
		aileronControlsSensitivityCoef=0.80000001;
		aileronCoef[]={0.60000002,0.80000001,1,1.1,1.2,1.15,0.1};
		elevatorSensitivity=0.89999998;
		elevatorControlsSensitivityCoef=0.80000001;
		elevatorCoef[]={0.33000001,0.38999999,0.50999999,0.60000002,0.68000001,0.75,0.80000001,0.85000002,0.89999998,0.74000001,0.30000001};
		rudderInfluence=0.0099999998;
		rudderControlsSensitivityCoef=1;
		rudderCoef[]={0.5,0.69999999,1,1.8,2.0999999,2.25,2.3299999,2,1.7,1,0.89999998,0.81999999,0.76999998};
		flaps=0;
		airbrake=1;
		airBrakeFrictionCoef=5;
		tailhook=0;
		draconicForceXCoef=6.5999999;
		draconicForceYCoef=1.5;
		draconicForceZCoef=0.22;
		draconicTorqueXCoef[]={3.5,3,2.8,2.6500001,2.4749999,2.4000001,2.425,2.625,2.75,2.875,3};
		draconicTorqueYCoef[]={0,0.5,1.2,2,3,2.5999999,2.4000001,2.2,2,1.9,1.8};
		airFrictionCoefs2[]={0.001,0.0049999999,6.4e-005};
		airFrictionCoefs1[]={0.1,0.0469,0.012};
		airFrictionCoefs0[]={0,0,0};
		thrustCoef[]={2,1.96,1.89,1.76,1.71,1.6900001,1.66,1.5,1.3,1,0.89999998,0.81999999,0.33000001,0,0,0};
		altFullForce=2000;
		altNoForce=7000;
		driverAction="pilot_Heli_Light_02";
		driverInAction="pilot_Heli_Light_02";
		precisegetinout=1;
		GetInAction="pilot_Heli_Light_02_Enter";
		GetOutAction="pilot_Heli_Light_02_Exit";
		cargoGetInAction[]= {
			"GetInHeli_Transport_01Cargo"
		};
		cargoGetOutAction[]= {
			"GetOutMantis"
		};
		cargoCanEject=1;
		driverCanEject=1;
		transportSoldier=0;
		hideWeaponsCargo=0;
		cargoProxyIndexes[]={};
		class TransportBackpacks {};
		class TransportItems {};
		maximumLoad=2000;
		slingLoadMaxCargoMass=1500;
		allowTabLock=1;
		canUseScanner=1;
		nvScanner=1;
		laserScanner=1;
		//Radar & Sensors
		radartype=4;
		lockdetectionsystem="2 + 4 + 8";
		incomingMissileDetectionSystem="8 + 16";
		weaponLockSystem="2+4+8+16";
		irScanToEyeFactor=1;
		irScanRangeMin=200;
		irScanRangeMax=10000;
		irScanGround=1;
		irTarget=1;
		irTargetSize=2;
		laserTarget=0;
		radarTarget=1;
		radarTargetSize=2;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		soundGetIn[]= {
			"A3\Sounds_F_Exp\vehicles\air\VTOL_02\TO_getin",
			1,
			1
		};
		soundGetOut[]= {
			"A3\Sounds_F_Exp\vehicles\air\VTOL_02\getout",
			1,
			1,
			40
		};
		soundDammage[]= {
			"A3\Sounds_F\air\Heli_Light_02\crash",
			"db-5",
			1
		};
		soundEngineOnInt[]= {
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2",
			"db-5",
			1
		};
		soundEngineOnExt[]= {
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2",
			"db-2",
			1,
			600
		};
		soundEngineOffInt[]= {
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2",
			"db-5",
			1
		};
		soundEngineOffExt[]= {
			"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2",
			"db-2",
			1,
			600
		};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
		soundEnviron[]= {
			"",
			"db-30",
			1
		};
		class Sounds {
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_idle_ext",
					1,
					1,
					2100
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_max_ext",
					1,
					1.2,
					2500
				};
				frequency=1;
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_forsage_ext",
					1.41254,
					1.2,
					2800
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.4, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class TurbineOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_ext",
					1,
					1,
					1800
				};
				frequency="rpm * (thrust/4 + 0.5)";
				volume="camPos * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_ext",
					1,
					1,
					1800
				};
				frequency="1.7 * (rpm factor[-5,1])";
				volume="0.8 * camPos * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\noise",
					0.56234097,
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowInt
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_idle_int",
					0.63095701,
					1,
					2100
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighInt
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_max_int",
					0.63095701,
					1.2,
					2500
				};
				frequency=1;
				volume="(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageInt
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_forsage_int",
					0.79432797,
					1.2,
					2800
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(thrust factor[0.4, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class TurbineInt
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_int",
					0.63095701,
					1,
					1800
				};
				frequency="rpm * (thrust/4 + 0.5)";
				volume="(1-camPos) * 1.86 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighInt
			{
				sound[]=
				{
					"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_int",
					0.63095701,
					1,
					1800
				};
				frequency="1.7 * (rpm factor[-5,1])";
				volume="0.66 * (1-camPos) * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.77828,
					1,
					100
				};
				frequency=1;
				volume="camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * rain * (speed factor[50, 0])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.56234097,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.99526,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * (gmeterZ factor[1.0, 2.5]) * 2";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					0.50118703,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[60,80])";
			};
		};
		ace_cargo_space=4;
		ace_cargo_hasCargo=1;
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]= {
			"ropeOriginLeft",
			"ropeOriginRight"
		};
		gunBeg[]= {
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]= {
			"z_gunL_chamber",
			"z_gunR_chamber"
		};
		memoryPointGun[]= {
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class Damage {
			tex[]={};
			mat[]=
			{
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		class AnimationSources {
			class gatling_alt
			{
				source="ammo";
				weapon="OPTRE_GUA23AW";
			};
			class gatling_alt_rot
			{
				source="ammoRandom";
				animPeriod=1e-006;
				weapon="OPTRE_GUA23AW";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_missiles_Anvil3";
			};
		};
		class MarkerLights {
			class Pos_R {
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="PositionLight_Red_1_pos";
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation {
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class Pos_G: Pos_R {
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="PositionLight_Green_1_pos";
			};
			class Pos_W {
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_1_pos";
				intensity=75;
				drawLight=1;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				dayLight=0;
				useFlare=0;
				blinking=0;
				blinkingPattern[]={0.1,0.89999998};
				blinkingStartsOn=0;
				blinkingPatternGuarantee=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class CollisionLight_W: Pos_W {
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
				intensity=75;
				name="CollisionLight_White_1_pos";
			};
			class CollisionLight_R: CollisionLight_W {
				ambient[]={0.090000004,0.015,0.0099999998};
				color[]={0.89999998,0.15000001,0.1};
				blinkingPattern[]={0.2,1.3};
				drawLightCenterSize=0.079999998;
				name="CollisionLight_Red_1_pos";
			};
			class Still_G: Pos_G {
				name="zeleny pozicni";
			};
			class Still_R: Pos_R {
				name="cerveny pozicni";
			};
			class Still_W: Pos_W {
				name="bily pozicni";
			};
			class Blink_W: Pos_W {
				name="bily pozicni blik";
			};
		};

	};

	class BDA_UNSC_UH145A_Falcon2: OPTRE_UNSC_falcon_S {
		dlc = "BDA";
		scope = 2;
		scopeCurator = 2;
		author = "Rib";
		side = 1;
		faction = "B_BDCUNSC";
		displayName = "UH-145S Falcon";
		editorPreview = "\BDA_Units\b_bdcunsc\data\preview\BDA_UNSC_UH145A_Falcon2.jpg";
		crew = "B_BDA_Pilot";
		armor = 250;
		cost = 1000;
		maximumLoad = 1000;
		OPTRE_canThrust = 1;
		ace_cargo_space = 12;

		hiddenSelectionsTextures[]= {
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
			"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa", 
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
			"\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa" //replace
		};

		class textureSources {
			class BDA_Classic {
				displayName = "Classic";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Marine {
				displayName = "Marine";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Jungle {
				displayName = "Jungle";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_BJ7 {
				displayName = "BJ7";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Woodland {
				displayName = "Woodland";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa",
					"\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Black {
				displayName = "Black";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Urban {
				displayName = "Urban";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa",
					"\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Arab {
				displayName = "Arabian";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Desert {
				displayName = "Desert";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Dune {
				displayName = "Dune";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Frost {
				displayName = "Frost";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Tundra {
				displayName = "Tundra";
				author = "Rib/Vespade";
				textures[] = {
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Romeo610 {
				displayName = "Romeo610";
				author = "Griffin";
				textures[] = {
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_test_m_co.paa",
					"\BDA_Vehicles\data\falcon\customs\BDA_Falc_test_a_co.paa",
					"\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa",
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
					"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa", 
					"\BDA_Vehicles\data\falcon\customs\falcon_610_var1_ca.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]={
			"BDA_Classic",
			1,
			"BDA_Marine",
			1,
			"BDA_Jungle",
			1,
			"BDA_BJ7",
			1,
			"BDA_Woodland",
			1,
			"BDA_Black",
			1,
			"BDA_Urban",
			1,
			"BDA_Arab",
			1,
			"BDA_Desert",
			1,
			"BDA_Dune",
			1,
			"BDA_Frost",
			1,
			"BDA_Tundra",
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
			class ThrusterEngage {
				userActionID = 90;
				displayName = "<t color='#b00c00'>Engage Thrusters";
				textToolTip = "Engage Thrusters";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				priority=10;
				showWindow=0;
				radius=100000;
				animPeriod=5;
				onlyForPlayer=0;
				position="cargo_door_handle";
			};
			class ThrusterDisengage: ThrusterEngage {
				userActionID = 91;
				displayName = "<t color='#ffe11c'>Disengage Thrusters";
				textToolTip = "Disengage Thrusters";
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
			};
			class AirbrakeEngage: ThrusterEngage {
				userActionID = 92;
				displayName = "<t color='#0e2cc2'>Engage Airbrakes";
				textToolTip = "Engage Airbrakes";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
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
						statement = "['BDA_Classic', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class JungleCamo {
						displayName = "Jungle";
						statement = "['BDA_Jungle', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class MarineCamo {
						displayName = "Marine";
						statement = "['BDA_Marine', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class WoodlandCamo {
						displayName = "Woodland";
						statement = "['BDA_Woodland', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class BJ7Camo {
						displayName = "BJ7";
						statement = "['BDA_BJ7', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Winter {
					displayName = "Winter Ops";
					class FrostCamo {
						displayName = "Frost";
						statement = "['BDA_Frost', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class TundraCamo {
						displayName = "Tundra";
						statement = "['BDA_Tundra', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Night {
					displayName = "Night Ops";
					class BlackCamo {
						displayName = "Blackout";
						statement = "['BDA_Black', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class UrbanCamo {
						displayName = "Urban";
						statement = "['BDA_Urban', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Desert {
					displayName = "Desert Ops";
					class DesertCamo {
						displayName = "Desert Tan";
						statement = "['BDA_Desert', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class ArabianCamo {
						displayName = "Arabian";
						statement = "['BDA_Arab', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
					class DuneCamo {
						displayName = "Dune Tan";
						statement = "['BDA_Dune', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
					};
				};
				class Customs {
					displayName = "Customs";
					class Romeo610 {
						displayName = "Romeo-610";
						statement = "['BDA_Romeo610', 'BDA_UNSC_UH145A_Falcon2'] call BDA_fnc_chgTex";
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
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=1;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=6;};
			class _xx_ACE_tourniquet {name = "ACE_tourniquet"; count = 8;};
			class _xx_ACE_morphine {name = "ACE_morphine"; count = 10;};
		};
		magazines[]= {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
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
		armor = 300;
		cost = 500;
		maximumLoad = 1000;
		OPTRE_canThrust = 1;
		ace_cargo_space = 12;

		class textureSources {
			class BDA_Classic {
				displayName = "Classic";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Marine {
				displayName = "Marine";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Jungle {
				displayName = "Jungle";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_BJ7 {
				displayName = "BJ7";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Woodland {
				displayName = "Woodland";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa",
					"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Black {
				displayName = "Black";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa",
					"BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa",
					"BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Urban {
				displayName = "Urban";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa",
					"BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa",
					"BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Arab {
				displayName = "Arabian";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa",
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa",
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Desert {
				displayName = "Desert";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa",
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa",
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Dune {
				displayName = "Dune";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa",
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa",
					"BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Frost {
				displayName = "Frost";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa",
					"BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa",
					"BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Tundra {
				displayName = "Tundra";
				author = "Rib/Vespade";
				textures[] = {
					"BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa",
					"BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa",
					"BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
		};
		textureList[]={
			"BDA_Classic",
			1,
			"BDA_Marine",
			1,
			"BDA_Jungle",
			1,
			"BDA_BJ7",
			1,
			"BDA_Woodland",
			1,
			"BDA_Black",
			1,
			"BDA_Urban",
			1,
			"BDA_Arab",
			1,
			"BDA_Desert",
			1,
			"BDA_Dune",
			1,
			"BDA_Frost",
			1,
			"BDA_Tundra",
			1,
		};

		hiddenSelectionsTextures[]= {
			"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa",
			"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa",
			"BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa",
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
			class ThrusterEngage {
				userActionID = 90;
				displayName = "<t color='#b00c00'>Engage Thrusters";
				textToolTip = "Engage Thrusters";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				priority=10;
				showWindow=0;
				radius=100000;
				animPeriod=5;
				onlyForPlayer=0;
				position="cargo_door_handle";
			};
			class ThrusterDisengage: ThrusterEngage {
				userActionID = 91;
				displayName = "<t color='#ffe11c'>Disengage Thrusters";
				textToolTip = "Disengage Thrusters";
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
			};
			class AirbrakeEngage: ThrusterEngage {
				userActionID = 92;
				displayName = "<t color='#0e2cc2'>Engage Airbrakes";
				textToolTip = "Engage Airbrakes";
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
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
			class _xx_adv_aceCPR_AED {name="adv_aceCPR_AED"; count=1;};
			class _xx_ACE_IR_Strobe_Item {name="ACE_IR_Strobe_Item"; count=6;};
			class _xx_ACE_tourniquet {name = "ACE_tourniquet"; count = 8;};
			class _xx_ACE_morphine {name = "ACE_morphine"; count = 10;};
		};
		magazines[]= {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
	};

	class BDA_AV22_Sparrowhawk_B: OPTRE_AV22_Sparrowhawk {
		scope = 1;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		dlc = "BDA";
		author = "Rib";
		displayName = "AV-22B Sparrowhawk (WIP)";
		faction = "B_BDCUNSC";
		crew = "B_BDA_Pilot";
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;

		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"attach_noseLaser",
			"attach_CannonHeavy",
			"attach_Decal1",
			"attach_Decal2"
		};
		hiddenSelectionsTextures[] = { //work out this bullshit... interiors and decals 
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_1_co.paa", //camo1
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_2_co.paa", //camo2
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_3_co.paa", //camo3
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_4_co.paa", //camo4
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_5_co.paa", //camo5
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_cannon_co.paa", //autocanon
			"\BDA_Vehicles\data\sparrowhawk\black\BDA_sparrowhawk_blk_fcannon_co.paa", //feedautocannon
			"\BDA_Vehicles\data\sparrowhawk\decals\decal_02_ca.paa" //decal 1 - wHERE IS 2?!!?
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

		class Components;
		class Components: Components {
			class TransportPylonsComponent {
				UIPicture="\OPTRE_Vehicles_Air\Sparrowhawk\sparrowhawkPylonImage.paa";
				class pylons {
					class WingPylonRight1 {
						maxweight=560;
						hardpoints[] = {
							"OPAEX_Hardpoint_AV22"
						};
						attachment="OPTRE_6Rnd_C2GMLS_missiles";
						bay=-1;
						priority=3;
						UIposition[]={0.34999999,0.1};
						turret[]={};
					};
					class WingPylonRight2: WingPylonRight1 {
						priority=2;
						UIposition[]={0.30000001,0.134};
						attachment="OPTRE_4Rnd_Scorpion_missiles";
					};
					class WingPylonRight3: WingPylonRight1 {
						priority=1;
						UIposition[]={0.34999999,0.167};
						attachment="OPTRE_2Rnd_Jackknife_missile";
					};
					class WingPylonLeft3: WingPylonRight3 {
						mirroredMissilePos=3;
						UIposition[]={0.34999999,0.40000001};
					};
					class WingPylonLeft2: WingPylonRight2 {
						mirroredMissilePos=2;
						UIposition[]={0.30000001,0.43399999};
					};
					class WingPylonLeft1: WingPylonRight1 {
						mirroredMissilePos=1;
						UIposition[]={0.34999999,0.46700001};
					};
				};
				class Presets {
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
				};
			};
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR {
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual {
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=1500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=100;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
						class AirTarget
						{
							minRange=5000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=100;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		
		class UserActions {
			class FullAirbrakeEngage {
				userActionID=57;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				animPeriod=5;
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
			};
			class HalfAirbrakeEngage: FullAirbrakeEngage {
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngage";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
			class Thruster400Engage: FullAirbrakeEngage  {
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage: FullAirbrakeEngage  {
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburnerss600Engage: FullAirbrakeEngage  {
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				statement="0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners600Disengage: FullAirbrakeEngage  {
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				statement="0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
		};
	};
	
}; //cfgend

class cfgMods {
	author="Rib";
	timepacked="0811242120";
};