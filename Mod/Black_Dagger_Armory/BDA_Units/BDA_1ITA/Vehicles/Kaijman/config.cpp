class cfgPatches {
    class BDA_1ITA_Kaijman {
        requiredAddons[]={
            "A3_Air_F_Beta",
            "A3_Air_F_Beta_Heli_Attack_02",
			"BDA_1ITA"
        };
        requiredVersion=0.1;
        units[]={
			"BDA_1ITA_Kaijman_Dynamic"
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
	class Helicopter: Air {
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter {
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
			class HitWinch;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F {
		class SpeechVariants;
		class RotorLibHelicopterProperties;
		class HitPoints;
		class AnimationSources;
		class Components;
		class pilotCamera;
		class Turrets;
		class Sounds;
		class SoundsExt;
		class Exhausts;
		class Damage;
		class MFD;
		class UserActions;
	};
    class O_Heli_Attack_02_black_F: Heli_Attack_02_base_F {};

    class BDA_1ITA_Kaijman_Dynamic: O_Heli_Attack_02_black_F {
        scope = 2; 
        scopeCurator = 2;
        author = "Rib";
        displayName = "M480 Super Alligator";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Air";
		side = 0;
        crew = "O_1ITA_Heli_Pilot";
        typicalCargo[] = {
			"O_1ITA_Heli_Pilot",
			"O_1ITA_CombatCrewman"
		};
		hiddenSelectionsTextures[]= {
			"\BDA_Units\BDA_1ITA\Vehicles\Kaijman\Data\ITA_Kaijman_Body1_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\Kaijman\Data\ITA_Kaijman_Body2_co.paa"
		};
        armor=300;
        maxSpeed=400;
		magazines[]= {
			"192Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine"
		};
        class Components: Components {
            class TransportPylonsComponent {
                uiPicture="\A3\Air_F_Beta\Heli_Attack_02\Data\UI\Heli_Attack_02_3DEN_CA.paa";
				class Pylons {
					class PylonLeft1 {
						attachment="OPTRE_32Rnd_Anvil2_missiles";
						priority=5;
						hardpoints[]= {
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
			                "OPAEX_Hardpoint_AV22",
                            "OPAEX_Hardpoint_D77-TC",
                            "OPAEX_Hardpoint_AV14",
                            "20MM_TWIN_CANNON"
						};
						turret[]={0};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1 {
						attachment="OPTRE_6Rnd_C2GMLS_missiles";
						priority=4;
						hardpoints[]= {
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON_HELI",
                            "OPAEX_Hardpoint_AV22",
                            "OPAEX_Hardpoint_D77-TC",
                            "OPAEX_Hardpoint_AV14",
                            "20MM_TWIN_CANNON"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonRight2: PylonLeft2 {
						UIposition[]={0.56999999,0.34999999};
					};
					class PylonRight1: PylonLeft1 {
						UIposition[]={0.58999997,0.40000001};
					};
				};
                class Presets {
					class Empty {
						displayName="Empty";
						attachment[]={};
					};
					class Default {
						displayName="Default";
						attachment[]= {
                            "OPTRE_32Rnd_Anvil2_missiles",
                            "OPTRE_12Rnd_C2GMLS_missiles",
                            "OPTRE_2Rnd_Jackknife_missile",
                            "OPTRE_16Rnd_Anvil3_missiles"
						};
					};
					class AT {
						displayName="Anti-Tank";
						attachment[]= {
                            "OPTRE_32Rnd_Anvil2_missiles",
                            "OPTRE_8Rnd_Scorpion_missiles",
                            "OPTRE_4Rnd_Jackknife_missile",
                            "OPTRE_16Rnd_Anvil3_missiles"
						};
					};
					class CAS {
						displayName="Close Air Support";
						attachment[]= {
                            "OPTRE_32Rnd_Anvil3_missiles",
                            "OPTRE_4Rnd_Jackknife_missile",
                            "OPTRE_12Rnd_C2GMLS_missiles",
                            "OPTRE_32Rnd_Anvil3_missiles"
						};
					};
				};

            };
			class SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft;
			class VehicleSystemsDisplayManagerComponentRight;
        };
		class TransportBackpacks {};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
    };


};