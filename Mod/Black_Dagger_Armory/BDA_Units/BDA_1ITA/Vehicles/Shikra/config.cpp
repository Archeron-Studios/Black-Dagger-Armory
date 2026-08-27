class cfgPatches {
    class BDA_1ITA_Shikra {
        requiredAddons[]= {
			"A3_Air_F",
            "A3_Air_F_Jets",
            "BDA_1ITA"
		};
		requiredVersion=0.1;
		units[]= {
            "BDA_1ITA_Shikra"
		};
		weapons[]={};
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
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class AirplaneHUD;

class CfgVehicles {
    class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
		class ViewPilot;
	};
    class Plane_Fighter_02_Base_F {
		class Components;
	};

    class BDA_1ITA_Shikra: Plane_Fighter_02_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        displayName = "Mk-214 Shikra";
        DLC = "BDA";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Air";
        crew = "O_1ITA_JetPilot";
        typicalCargo[] = {"O_1ITA_JetPilot"};
        armor = 140;

        hiddenSelectionsTextures[] = {
            "\BDA_Units\BDA_1ITA\Vehicles\Shikra\Data\bda_shikra_fuselage_01_co.paa", 
            "\BDA_Units\BDA_1ITA\Vehicles\Shikra\Data\bda_shikra_fuselage_02_co.paa",
            "\BDA_Units\BDA_1ITA\Vehicles\Shikra\Data\bda_shikra_fuselage_01_co.paa", 
            "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", 
            "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa", 
            "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_04_co.paa"
        };

        weapons[] = {"weapon_Fighter_Gun_30mm", "Laserdesignator_pilotCamera", "CMFlareLauncher"};
		magazines[] = {"magazine_Fighter02_Gun30mm_AA_x180", "magazine_Fighter02_Gun30mm_AA_x180", "Laserbatteries", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine"};
		class Components: Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent: SensorTemplateIR {
						class AirTarget {
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget {
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 120;
						maxTrackableSpeed = 500;
					};
					class VisualSensorComponent: SensorTemplateVisual {
						class AirTarget {
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget {
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 26;
						angleRangeVertical = 20;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = "pilotCameraRotY";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
						class AirTarget {
							minRange = 13000;
							maxRange = 13000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							minRange = 9000;
							maxRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 6000;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.100000;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation {
						class AirTarget {
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						angleRangeHorizontal = 60;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser {
					};
					class NVSensorComponent: SensorTemplateNV {
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
				class Components {
					class EmptyDisplay {
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay {
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay {
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay {
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay {
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay {
						componentType = "SensorsDisplayComponent";
						range[] = {16000, 8000, 4000, 2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
				defaultDisplay = "SensorDisplay";
				class Components {
					class EmptyDisplay {
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay {
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay {
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay {
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay {
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay {
						componentType = "SensorsDisplayComponent";
						range[] = {16000, 8000, 4000, 2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent {
				UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons {
					class pylons1 {
						hardpoints[] = {"O_R73", 
							"O_R77", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25", 
							"O_KAB250_BOMB", 
							"O_KH58"
						};
						attachment = "PylonMissile_Missile_AA_R73_x1";
						priority = 13;
						maxweight = 300;
						UIposition[] = {0.600000, 0.450000};
					};
					class pylons2: pylons1 {
						UIposition[] = {0.050000, 0.450000};
						mirroredMissilePos = 1;
					};
					class pylons3 {
						hardpoints[] = {
							"O_R73", 
							"O_R77", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25", 
							"O_KAB250_BOMB", 
							"O_KH58"
						};
						attachment = "PylonMissile_Missile_AA_R77_x1";
						priority = 11;
						maxweight = 1050;
						UIposition[] = {0.550000, 0.350000};
					};
					class pylons4: pylons3 {
						UIposition[] = {0.100000, 0.350000};
						mirroredMissilePos = 3;
					};
					class pylons5 {
						hardpoints[] = {
							"O_R73", 
							"O_R77", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25", 
							"O_KAB250_BOMB", 
							"O_KH58"
						};
						attachment = "PylonMissile_Bomb_KAB250_x1";
						priority = 9;
						maxweight = 1200;
						UIposition[] = {0.500000, 0.250000};
					};
					class pylons6: pylons5 {
						UIposition[] = {0.150000, 0.250000};
						mirroredMissilePos = 5;
					};
					class pylonBayRight1 {
						hardpoints[] = {
							"O_R73", 
							"O_R77", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25", 
							"O_KAB250_BOMB", 
							"O_KH58"
						};
						priority = 7;
						attachment = "PylonMissile_Missile_AA_R73_x1";
						maxweight = 300;
						UIposition[] = {0.450000, 0.150000};
						bay = 2;
					};
					class pylonBayLeft1: pylonBayRight1 {
						UIposition[] = {0.200000, 0.150000};
						mirroredMissilePos = 7;
						bay = 1;
					};
					class pylonBayRight2 {
						hardpoints[] = {
							"O_R73", 
							"O_R77", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25", 
							"O_KAB250_BOMB", 
							"O_KH58"
						};
						priority = 5;
						attachment = "PylonMissile_Missile_AA_R77_x1";
						maxweight = 750;
						UIposition[] = {0.330000, 0.300000};
						bay = 4;
					};
					class pylonBayLeft2: pylonBayRight2 {
						UIposition[] = {0.330000, 0.350000};
						mirroredMissilePos = 9;
						bay = 3;
					};
					class pylonBayCenter1 {
						hardpoints[] = {
							"O_R73", 
							"O_R77_INT", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25_INT", 
							"O_KAB250_BOMB", 
							"O_KH58_INT"
						};
						priority = 2;
						attachment = "PylonMissile_Missile_AA_R77_INT_x1";
						maxweight = 750;
						UIposition[] = {0.330000, 0.450000};
						bay = 5;
					};
					class pylonBayCenter2: pylonBayCenter1 {
						UIposition[] = {0.330000, 0.500000};
						mirroredMissilePos = 11;
					};
					class pylonBayCenter3 {
						hardpoints[] = {
							"O_R73", 
							"O_R77_INT", 
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
							"OPTRE_Hardpoint_AV22",
							"OPTRE_Hardpoint_D77-TC",
							"OPTRE_Hardpoint_AV14",
							"O_KH25_INT", 
							"O_KAB250_BOMB", 
							"O_KH58_INT"
						};
						priority = 1;
						attachment = "PylonMissile_Bomb_KAB250_x1";
						maxweight = 1200;
						UIposition[] = {0.330000, 0.550000};
						bay = 5;
					};
				};

				class Bays {
					class BayLeft1 {
						bayOpenTime = 0.500000;
						openBayWhenWeaponSelected = 0;
						autoCloseWhenEmptyDelay = 1;
					};
					class BayRight1 {
						bayOpenTime = 0.500000;
						openBayWhenWeaponSelected = 0;
						autoCloseWhenEmptyDelay = 1;
					};
					class BayLeft2 {
						bayOpenTime = 0.500000;
						openBayWhenWeaponSelected = 1.000000;
						autoCloseWhenEmptyDelay = 2;
					};
					class BayRight2 {
						bayOpenTime = 0.500000;
						openBayWhenWeaponSelected = 1.000000;
						autoCloseWhenEmptyDelay = 1;
					};
					class BayCenter1 {
						bayOpenTime = 0.500000;
						openBayWhenWeaponSelected = 1.000000;
						autoCloseWhenEmptyDelay = 2;
					};
				};

				class Presets {
					class Empty {
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default {
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Bomb_KAB250_x1", "PylonMissile_Bomb_KAB250_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Bomb_KAB250_x1"};
					};
					class AA {
						displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1"};
					};
					class CAS {
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AGM_KH25_INT_x1"};
					};
				};
			};
		};
    };
};