class CfgPatches {
	class BDA_1ITA_T100X {
		requiredAddons[]= {
			"A3_Armor_F_Decade",
            "A3_Armor_F_Decade_MBT_02",
            "BDA_1ITA"
		};
		requiredVersion=0.1;
		units[]= {
			"BDA_1ITA_T1000X"
		};
		weapons[]={};
	};
};

class CfgVehicles {
    class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret: NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class HitPoints;
	};
	class MBT_02_base_F: Tank_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {};
				};
			};
		};
		class AnimationSources;
		class RenderTargets {
			class commander_display {
				class CameraView1;
			};
			class driver_display {
				class CameraView1;
			};
		};
		class MFD;
		class HitPoints: HitPoints {
			class HitERA_Front {
				class DestructionEffects {
					class Explo;
				};
			};
		};
		class DestructionEffects;
		class Wheels {
			class L2;
		};
	};
    class O_T_MBT_02_railgun_ghex_F; 

    class BDA_1ITA_T1000X: O_T_MBT_02_railgun_ghex_F {
		DLC="BDA";
        scope = 2;
        scopeCurator = 2;
        author = "Rib";
        displayName = "T-1000X Cosmos MBT";
        faction = "O_1ITA";
		editorCategory = "BDA_EC_1ITA";
		editorSubcategory = "1ITA_ESC_Vehicle";
        crew = "O_1ITA_CombatCrewman";
		armor = 400;
		class textureSources {
			class Black {
				displayName = "Black";
				author = "Rib";
				textures[] = {
					"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\ITA_T1000X_Body_co.paa",
					"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\ITA_T1000X_Turret_co.paa",
					"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\ITA_T1000X_Main_co.paa",
					"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\camonet_1ITA_Stripe_co.paa"
				};
				factions[] = {"O_1ITA"};
			};
		};
		textureList[] = {"Black",1};
		hiddenSelectionsTextures[] = {
			"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\ITA_T1000X_Body_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\ITA_T1000X_Turret_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\ITA_T1000X_Main_co.paa",
			"\BDA_Units\BDA_1ITA\Vehicles\T100X\Data\camonet_1ITA_Stripe_co.paa"
		};
        typicalCargo[] = {
			"O_1ITA_CombatCrewman",
			"O_1ITA_CombatCrewman",
			"O_1ITA_Officer"
		};
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed {
				magazine="SmokeShellRed";
				count=2;
			};
		};
		class TransportWeapons {};
    };
};