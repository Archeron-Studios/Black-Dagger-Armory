class CfgPatches {
	class BDA_Core_functions {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"cba_main",
			"cba_keybinding",
			"OPTRE_Core",
			"BDA_Core",
			"BDA_Vehicles"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

class CfgFunctions {
    class BDA_Scripts {
        tag = "BDA";
        class Core_Func {
            file = "\BDA_Core\BDA_Functions";
			class vehSupply {};
			class medicCheck {};
			class notify {};
        };
		class BDA_vehsupply {
			file = "\BDA_Core\BDA_Functions\vehsupply";
			class vehRearm {};
			class vehRepair {};
			class vehRefuel {};
			class vehCleanup {};
		};
		class BDA_Loadouts {
			file = "\BDA_Core\BDA_Functions\loadouts";
			class menuInit {};
			class openLoadouts {};
			class loadLoadout {};
			class updateLoadLB {};
			class getScopes {};
		};
		class BDA_Transf {
			file = "\BDA_Core\BDA_Functions\transf_scipts";
		};
		class BDA_Keybinds {
			file = "\BDA_Core\BDA_Functions\Keybinds";
			class initKeybinds { postInit = 1; };
			class setThrustMode {};
			class thrustUp {};
			class thrustDown {};
			class thrustOff {};
			class airbrakeKey {};
		};
    };
};

#include "\BDA_Core\BDA_Functions\loadouts\BDA_LoadoutDiag.hpp"

class CfgWallaceLoad {
	class BDA_Rifleman 
	{
		name = "Rifleman Kit";
	};
	class BDA_AutoRifleman 
	{
		name = "AutoRifleman Kit";
	};
	class BDA_Sniper 
	{
		name = "Sniper Kit";
	};
	class BDA_EOD
	{
		name = "EOD Kit";
	};
	class BDA_Demolitions 
	{
		name = "Demolitions Kit";
	};
	class BDA_Grenadier 
	{
		name = "Grenadier Kit";
	};
	class BDA_RktJky 
	{
		name = "Rocket Jockey Kit";
	};
	class BDA_Breacher
	{
		name = "Breacher Kit";
	};
};

enableDebugConsole[] = { "76561198805462515", "76561198249403686", "76561198066703139" }; //wallace, rib, pey

class cfgMods {
	author="Rib";
	timepacked="120820251740";
};