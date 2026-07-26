class CfgPatches {
	class BDA_Vehicles {
		author = "Black Dagger Development Crew";
		units[]= {};
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