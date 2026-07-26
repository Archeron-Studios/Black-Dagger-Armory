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
			"BDA_UNSC_MH145_Falcon",
			"BDA_UNSC_UH145S_Falcon",
			"BDA_AV22_Sparrowhawk"
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
			"BDA_Vehicles_Hornet",
			"BDA_Vehicles_Falcon",
			"BDA_Vehicles_Pelican",
			"BDA_Vehicles_Sparrowhawk",
			"ace_interaction",
			"BDA_Weapons"
		};
	};
};

class CfgFunctions {
	class BDA {
		tag = "BDA";
		class Vehicles {
			file = "\BDA_Vehicles\functions";
			class vehSpawner {};
			class advMark {};
			class chgTex {};
		};
		class AirVehThrust {
			file = "\BDA_Vehicles\functions\AirVehThrust";
			class thruster400Engage {};
			class thruster400Disengage {};
			class afterburners600Engage {};
			class afterburners600Disengage {};
			class afterburners800Engage {};
			class afterburners800Disengage {};
			class airbrakeEngage {};
			class fullAirbrakeEngage {};
			class fullAirbrakeEngageFast {};
			class halfAirbrakeEngage {};
			class halfAirbrakeEngageFast {};
		};
	};
};