class CfgPatches {
	class BDA_Vehicles {
		author = "Black Dagger Development Crew";
		units[]= {
			"BDA_UNSC_D77_TC_Pelican",
			"BDA_UNSC_D77_TC_Pelican_Single",
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

	class BDA_UNSC_D77_TC_Pelican: Splits_Pelican_base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		maximumLoad = 15000;
		side = 1;
		vehicleClass = "Air";
		dlc="BDA";
		author = "Rib";
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
			class BDA_Pelican_Green {
				displayName="UNSC Green";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Pelican_Black {
				displayName="UNSC Black";
				author="Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_B_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Pelican_W610 {
				displayName="UNSC Whiskey 610";
				author="Splitjaw/Grif/Rib";
				textures[]={
					"\BDA_Vehicles\data\customs\Pelican\BDA_610_body_co.paa",
					"\BDA_Vehicles\data\customs\Pelican\BDA_wings_and_gear_W_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Pelican_Winter {
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
			"BDA_Pelican_Green", 1,
			"BDA_Pelican_Black", 1,
			"BDA_Pelican_W610", 1,
			"BDA_Pelican_Winter", 1
		};

		class ACE_SelfActions: ACE_SelfActions {
            class vehCamo {
                displayName = "Change Camo";
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				priority = 5;
				class GreenCamo {
					displayName = "Green";
					statement = "['BDA_Pelican_Green', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
				class WinterCamo {
					displayName = "Winter";
					statement = "['BDA_Pelican_Winter', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
				class BlackCamo {
					displayName = "Black";
					statement = "['BDA_Pelican_Black', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
				class W610Camo {
					displayName = "W610";
					statement = "['BDA_Pelican_W610', 'BDA_UNSC_D77_TC_Pelican'] call BDA_fnc_chgTex";
            	};
            };
        };

		class UserActions {
			class PelLift_LoadVehicle {
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
			class PelLift_LoadPodMenu {
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
			class PelLift_UnLoadVehicle {
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
			class PelLift_OpenDetachPodMenu {
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
			class RampOpen {
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
			class RampClose : RampOpen {
				userActionID = 51;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]";
				animPeriod = 5;
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
			class Afterburners600Engage {
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

		//Structural
		armor = 400;
		maxSpeed = 900;
		fuelConsumptionRate = 0.3;

		//Weapons
		magazines[] = {
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"BDA_missiles_LGIR_Anvil3_x60",
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
				color[]={0.082, 0.408, 0.039, 1}; //original RGBA=0.169,0.85100001,0.83899999
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
						attachment="";
						priority=4;
						hardpoints[]=
						{
							"BDA_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="";
						priority=3;
						hardpoints[]=
						{
							"BDA_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="";
						priority=2;
						hardpoints[]=
						{
							"BDA_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="";
						priority=1;
						hardpoints[]=
						{
							"BDA_B_Missiles",
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
						mirroredMissilePos=2;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=3;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=4;
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
				class xx_BDA_Ammo_Pioneer_SupplyPod {
					type = "BDA_Ammo_Pioneer_SupplyPod";
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
		author = "Rib";
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
			"BDA_Pelican_Green", 1,
			"BDA_Pelican_Black", 1,
			"BDA_Pelican_W610", 1,
			"BDA_Pelican_Winter", 1
		};
		hiddenSelectionsTextures[]={
			"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
			"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
			"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
		};

		class textureSources {
			class BDA_Pelican_Green {
				displayName="UNSC Green";
				author="Splitjaw/Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_G_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Pelican_Black {
				displayName="UNSC Black";
				author="Rib";
				textures[]={
					"\BDA_Vehicles\data\pelican\BDA_B_body_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_wings_and_gear_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};
			class BDA_Pelican_W610 {
				displayName="UNSC Whiskey 610";
				author="Rib";
				textures[]={
					"\BDA_Vehicles\data\customs\pelican\BDA_610_body_co.paa",
					"\BDA_Vehicles\data\customs\pelican\BDA_wings_and_gear_W_co.paa",
					"\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"
				};
				factions[]={"B_BDCUNSC"};
			};			
			class BDA_Pelican_Winter {
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
					statement = "['BDA_Pelican_Green', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
				class WinterCamo {
					displayName = "Winter";
					statement = "['BDA_Pelican_Winter', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
				class BlackCamo {
					displayName = "Black";
					statement = "['BDA_Pelican_Black', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
				class W610Camo {
					displayName = "Whiskey610";
					statement = "['BDA_Pelican_W610', 'BDA_UNSC_D77_TC_Pelican_Single'] call BDA_fnc_chgTex";
            	};
            };
        };

		class UserActions {
			class PelLift_LoadVehicle {
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
			class PelLift_LoadPodMenu {
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
			class PelLift_UnLoadVehicle {
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
			class PelLift_OpenDetachPodMenu {
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
			class RampOpen {
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
			class RampClose : RampOpen {
				userActionID = 51;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]";
				animPeriod = 5;
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
		//Structural
		armor = 340;
		maxSpeed = 700;
		fuelConsumptionRate = 0.33;

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
				color[]={0.082, 0.408, 0.039, 1}; //original RGBA=0.169,0.85100001,0.83899999
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
						attachment="";
						priority=5;
						hardpoints[]=
						{
							"BDA_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.1};
					};
					class PylonRight2
					{
						attachment="";
						priority=4;
						hardpoints[]=
						{
							"BDA_T_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.25,0.2};
					};
					class PylonRight3
					{
						attachment="";
						priority=3;
						hardpoints[]=
						{
							"BDA_B_Missiles",
							"OPAEX_Hardpoint_AV22",
							"B_HARM_RAIL",
							"B_BOMB_PYLON"
						};
						turret[]={};
						UIposition[]={0.60000002,0.1};
					};
					class PylonRight4
					{
						attachment="";
						priority=2;
						hardpoints[]=
						{
							"BDA_B_Missiles",
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
						mirroredMissilePos=2;
					};
					class PylonsLeft3: PylonRight3
					{
						UIposition[]={0.60000002,0.5};
						mirroredMissilePos=3;
					};
					class PylonsLeft4: PylonRight4
					{
						UIposition[]={0.60000002,0.40000001};
						mirroredMissilePos=4;
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
				class xx_BDA_Ammo_Pioneer_SupplyPod {
					type = "BDA_Ammo_Pioneer_SupplyPod";
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

};

class cfgMods {
	author="Rib";
	timepacked="120028042026";
};