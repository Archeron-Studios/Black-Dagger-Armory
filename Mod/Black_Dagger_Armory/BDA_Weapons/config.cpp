class CfgPatches 
{
    class BDA_Weapons 
    {
        author = "Black Dagger Development Crew";
		name = "Black Dagger Weapons";
		requiredAddons[] = {"A3_Weapons_F","A3_Data_F_Jets","Splits_Weapons_Vehicle","Splits_Weaponry_Ammo", "OPTRE_Weapons_MG","OPTRE_Weapons_Vehicle","cba_main","ace_common","ace_interaction"};
		requiredVersion = 0.100000;
		units[] = {};
		weapons[] = {"BDA_missiles_Guided_Anvil3","BDA_weapon_Guided_AGM_Launcher","BDA_weapon_Guided_AGM_Bottom_Launcher","BDA_weapon_Guided_AA_Launcher","BDA_weapon_Guided_AA_Bottom_Launcher", "BDA_Smartfinder","BDA_M247T_Coax","BDA_MG470_40mm"};
		magazines[] = {"BDA_missiles_LGIR_Anvil3_x60","BDA_PylonMissile_AGM_Pelican_x3","BDA_PylonMissile_AGM_Pelican_x2","BDA_PylonMissile_AA_Pelican_x2","BDA_PylonMissile_AA_Pelican_x4","BDA_1200rnd_762x51_Box_Tracer","BDA_95x40_400rnd_Box_Tracer","BDA_95x40_400rnd_Box","BDA_1200rnd_762x51_Box_Tracer","BDA_250rnd_40mm_G_HE_Belt","BDA_250rnd_40mm_G_MP_Belt"};
		ammo[] = {"Ribs_M_Anvil3_LGIR","BDA_40mm_HE","BDA_40mm_MP"};
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

class CfgAmmo {
	/*arma*/ class MissileCore;

	class MissileBase: MissileCore {
		class Components;
	};
	/*arma*/ class BulletBase;
	/*arma*/ class RocketBase;
	/*arma*/ class LaserBombCore;
	/*arma*/ class BombCore;
	/*arma*/ class ShellBase;
	/*arma*/ class M_AT;
	/*arma*/ class Missile_AA_04_F;
	/*arma*/ class Missile_AGM_02_F;
	/*arma*/ class B_30mm_HE;
	/*arma*/ class B_40mm_GPR;
	/*extern*/ class Splits_M_ATA_Anaconda_AA;
	/*extern*/ class Splits_M_ANVIL_3_LGM;

	class Ribs_M_Anvil3_LGIR: Splits_M_ANVIL_3_LGM {
		hit = 750;
        indirectHit=80;
        indirectHitRange=8;
		explosive = 1;
		canlock = 2;
		airlock = 1;
		irLock = 1;
		laserLock = 1;
	};
	class BDA_40mm_HE: B_30mm_HE {
		hit = 160;
		typicalSpeed = 1000;
	};
	class BDA_40mm_MP: B_40mm_GPR {
		hit = 210;
		typicalSpeed = 800;
	};
};

class CfgMagazines {
	/*arma*/ class VehicleMagazine;
	/*arma*/ class 12Rnd_PG_missiles;
	/*extern*/ class OPTRE_100Rnd_95x40_Box;
	/*extern*/ class OPTRE_500Rnd_762x51_Box_Tracer;
	/*extern*/ class Splits_PylonMissile_AA_Pelican_x2;
	/*extern*/ class Splits_PylonMissile_AGM_Pelican_x2;
	/*extern*/ class Splits_PylonMissile_AGM_Bottom_Pelican_x3;

	class BDA_PylonMissile_AGM_Pelican_x2: Splits_PylonMissile_AGM_Pelican_x2 {
		dlc = "BDA";
		scope = 2;
		displayName = "2x AGM-2560B AT Guided Missiles";
		displayNameShort = "2560-B ATGM";
		descriptionShort = "Laser-Wire-Guided Anti-Tank Guided Missile";
		hardpoints[] = {"BDA_T_Missiles"};
		pylonWeapon = "BDA_weapon_Guided_AGM_Launcher";
	};
	class BDA_PylonMissile_AGM_Pelican_x3: Splits_PylonMissile_AGM_Bottom_Pelican_x3 {
		dlc = "BDA";
		scope = 2;
		displayName = "3x AGM-2560B AT Guided Missiles";
		displayNameShort = "2560-B ATGM";
		descriptionShort = "Laser-Wire-Guided Anti-Tank Guided Missile";
		hardpoints[] = {"BDA_B_Missiles"};
		pylonWeapon = "BDA_weapon_Guided_AGM_Bottom_Launcher";
	};
	class BDA_PylonMissile_AA_Pelican_x2: Splits_PylonMissile_AA_Pelican_x2 {
		dlc = "BDA";
		scope = 2;
		displayName = "2x AAM-3000B Guided AA Missiles";
		displayNameShort = "3-K-B Guided AAM";
		descriptionShort = "Medium to Long Range Radar Anti-Air Guided Missile";
		maxLeadSpeed = 400;
		hardpoints[] = {"BDA_T_Missiles"};
		pylonWeapon = "BDA_weapon_Guided_AA_Launcher";
	};
	class BDA_PylonMissile_AA_Pelican_x4: VehicleMagazine {
		dlc = "BDA";
		scope = 2;
		displayName = "4x AAM-3000B Guided AA Missiles";
		displayNameShort = "3-K-B Guided AAM";
		descriptionShort = "Medium to Long Range Radar Anti-Air Guided Missile";
		model = "Foundries\Splits_Weaponry\Aircraft\pylonpod_Pelican_Top_AA_01";
		count = 4;
		ammo = "Splits_M_ATA_Anaconda_AA";
		initSpeed = 350;
		maxLeadSpeed = 400;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2", 1.258930, 1, 1000};
		weaponSoundEffect = "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2", 0.501187, 1.300000, 400};
		soundHit[] = {"", 1.258930, 1, 1};
		reloadSound[] = {"", 0.000316, 1, 20};
		nameSound = "missiles";
		muzzlePos = "machinegun_beg";
		muzzleEnd = "machinegun_end";
		hardpoints[] = {"BDA_B_Missiles"};
		pylonWeapon = "BDA_weapon_Guided_AA_Bottom_Launcher";
	};
	class BDA_missiles_LGIR_Anvil3_x60: 12Rnd_PG_missiles {
		dlc = "BDA";
		scope = 2;
		displayName = "60Rnd ANVIL III LG Missile Pods";
		descriptionShort = "60rnd LG Missiles";
		count = 60;
		initSpeed = 150;
		maxLeadSpeed = 900;
		ammo = "Ribs_M_Anvil3_LGIR";
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect = "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		reloadSound[] = {"",0.000316228,1,20};
		nameSound = "missiles";
	};
	class BDA_95x40_400rnd_Box: OPTRE_100Rnd_95x40_Box {
		dlc = "BDA";
		scope = 2;
		displayName = "400Rnd 9.5x40mm Box Mag";
		ammo = "OPTRE_B_95x40_Tracer";
		descriptionshort = "400 Round Box Magazine<br/>9.5x40mm<br/>";
		count = 400;
		mass = 95;
	};
	class BDA_95x40_400rnd_Box_Tracer: BDA_95x40_400rnd_Box {
		displayName = "400Rnd 9.5x40mm Box Mag (Tracers)";
		descriptionshort = "400 Round Box Magazine<br/>9.5x40mm<br/>Tracers";
		tracersEvery = 1;
		lastRoundsTracer = 400;
	};
	class BDA_1200rnd_762x51_Box_Tracer: OPTRE_500Rnd_762x51_Box_Tracer {
		dlc = "BDA";
		scope = 2;
		displayName = "1200rnd 7.62x51mm Box Mag";
		descriptionShort = "1200 Round box magazine 7.62mm";
		count = 1200;
		tracersEvery = 1;
		lastRoundsTracer = 1200;
	};
	class BDA_250rnd_40mm_G_HE_Belt: VehicleMagazine {
		author = "Rib";
		scope = 2;
		ammo = "BDA_40mm_HE";
		initSpeed = 1100;
		maxLeadSpeed = 30;
		nameSound = "";
		count = 250;
		displayName = "MG470 40mm Drum HE";
		descriptionShort = "MG470 40mm Drum HE";
		tracersEvery = 2;
		muzzleImpulseFactor[] = {0.1,0.1};
	};
	class BDA_250rnd_40mm_G_MP_Belt: BDA_250rnd_40mm_G_HE_Belt {
		ammo = "BDA_40mm_MP";
		initSpeed = 900;
		displayName = "MG470 40mm Drum MP";
		descriptionShort = "MG470 40mm Drum MP";
	};

};

class cfgMagazineWells {
	class OPTRE_Magwell_M73;

	class BDA_Magwell_M73: OPTRE_Magwell_M73 {
		BDA_95x40_400Rnd[]={
			"BDA_95x40_400rnd_Box",
			"BDA_95x40_400rnd_Box_Tracer"
		};
	};
	
};

class CfgWeapons {
    /*arma*/ class RocketPods;
    /*arma*/ class missiles_ASRAAM;
	/*arma*/ class missiles_titan;
	/*arma*/ class missiles_SCALPEL;
	/*arma*/ class Laserdesignator;
	/*arma*/ class GMG_40mm;
	/*arma*/ class GMG_F;
	/*arma*/ class Missile_AGM_02_Plane_CAS_01_F;
	/*extern*/ class Splits_missiles_Anvil3;
	/*extern*/ class OPTRE_M247T_Coax;

    class BDA_missiles_Guided_Anvil3: Splits_missiles_Anvil3 {
        scope = 2;
        displayName = "ANVIL III LG Missile Pods";
		descriptionShort = "A3 LG Missiles";
        magazines[] = { 
			"BDA_missiles_LGIR_Anvil3_x60" 
		};
        ballisticsComputer = 4;
		showAimCursorInternal = 1;
		reloadTime = 0.4;
		magazineReloadTime = 12;
		weaponLockDelay= 4;
		canLock = 2;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_ANVIL1";
    };

	class BDA_weapon_Guided_AA_Launcher: RocketPods {
		scope = 2;
		displayName ="AAM-3000B";
		descriptionShort = "AA Missiles";
		ballisticsComputer = 8;
		magazines[] = {
			"BDA_PylonMissile_AA_Pelican_x2"
        };
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
	};

    class BDA_weapon_Guided_AA_Bottom_Launcher: RocketPods {
		scope = 2;
		displayName ="AAM-3000B";
		descriptionShort = "AA Missiles";
		ballisticsComputer = 8;
		magazines[] = 
        {
            "BDA_PylonMissile_AA_Pelican_x4",
			"BDA_PylonMissile_AA_Pelican_x2"
        };
		reloadTime = 0.2;
		magazineReloadTime = 0.4;
	};

	class BDA_weapon_Guided_AGM_Launcher: RocketPods {
		displayName = "AGM-2560B";
		ballisticsComputer = 8;
		magazines[] = {
			"BDA_PylonMissile_AGM_Pelican_x2"
		};
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
	};

	class BDA_weapon_Guided_AGM_Bottom_Launcher: RocketPods {
		displayName = "AGM-2560B";
		ballisticsComputer = 8;
		magazines[] = {
			"BDA_PylonMissile_AGM_Pelican_x3"
		};
		reloadTime = 0.2;
		magazineReloadTime = 0.4;
	};

	class BDA_M247T_Coax: OPTRE_M247T_Coax {
		Magazines[] = {
		"BDA_1200rnd_762x51_Box_Tracer"
		};
	};

	class BDA_Smartfinder: Laserdesignator {
		author = "Rib/OPTRE";
		displayName = "H-20 Smartfinder";
		descriptionShort="Smartfinder Laser Designator";
		model="\OPTRE_Weapons\items\smartfinder.p3d";
		modelOptics="\A3\Weapons_F_beta\Binocular\lasermarker_optics";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class WeaponSlotsInfo {
			mass = 5;
		};
	};

	class BDA_MG470_40mm: GMG_40mm {
		author = "Rib";
		displayName = "MG-470 Automatic Grenade Launcher";
		descriptionShort = "MG-470 AGL";
		magazines[] = {
			"BDA_250rnd_40mm_G_MP_Belt",
			"BDA_250rnd_40mm_G_HE_Belt"
		};
		magazineReloadTime = 3;
		showAimCursorInternal = 0;
		modes[] = {
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: GMG_F {
			displayName="40mm explosives";
			sounds[]= {
				"StandardSound"
			};
			class StandardSound {
				begin1[]= {
					"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",
					1.1220185,
					1,
					1200
				};
				begin2[]= {
					"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",
					1.1220185,
					1,
					1200
				};
				begin3[]= {
					"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",
					1.1220185,
					1,
					1200
				};
				soundBegin[]= {
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			soundContinuous=0;
			soundBurst=0;
			dispersion=0.0049999999;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual {
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=16;
			minRangeProbab=0.1;
			midRange=100;
			midRangeProbab=0.5;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close {
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.75;
		};
		class medium: close {
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.75;
		};
		class far: close {
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.76999998;
			midRange=1200;
			midRangeProbab=0.75;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class GunParticles {
			class effect1 {
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="GrenadeLauncherCloud";
			};
		};
	};
};

class CfgFunctions {
	class BDA {
		tag = "BDA";
		class Weapons {
			file = "\BDA_Weapons\functions";
			class isBino {};
			class isSmartfinder {};
			class canUseMarkerOptics {};
			class getCachedSpottedTarget {};
			class setSpottedTargetCache {};
			class getMarkPosition {};
			class resolveSpottedTarget {};
			class getSpottedPosition {};
			class placeMarker {};
			class initMarkerCache { postInit = 1; };
		};
		class Markers {
			file = "\BDA_Weapons\functions\Markers";
			class isLZ {};
			class isFM {};
			class isFrd {};
			class isEnm {};
			class isCM {};
			class advMark {};
			class classifySpottedTarget {};
			class advMarkAuto {};
		};
	};
};

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class BDA_PlaceMarker {
				displayName = "Place Marker";
				condition = "[] call BDA_fnc_isBino";
				#include "\BDA_Weapons\cfg\BDA_MarkerACE.hpp"
			};
		};
	};
};

class cfgMods {
	author="Rib";
	timepacked="144027012026";
};