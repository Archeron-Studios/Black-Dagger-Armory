class CfgPatches {
	class BDA_Core {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_Data_F_Enoch_Loadorder",
			"A3_Map_Altis",
			"A3_Map_Altis_Scenes",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"A3_UI_F",
			"OPTRE_Core",
			"19th_Fleet_Armor",
			"OPTRE_Installation04"
			
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//------main menu--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
class CAWorld;
class RscPicture;
class RscStandardDisplay;
class RscText;
class RscActiveText;
class RscActivePicture: RscActiveText {};
class RscButton;
class RscButtonMenu;
class RscButtonMenuMain;
class RscControlsGroupNoScrollbars;

// Black Dagger dropdown rows. Positions and server labels are set by
// BDA_Functions\fn_mainMenu.sqf; links must be config url entries because
// a url on a script-created button does not open.
class BDA_MenuItem: RscButtonMenuMain {
	idc=-1;
	x=0;
	y=0;
	w="10 * (pixelW * pixelGrid * 2)";
	h="1.5 * (pixelH * pixelGrid * 2) - pixelH";
};
class BDA_MenuSubGroup: RscControlsGroupNoScrollbars {
	idc=-1;
	x=0;
	y=0;
	w="10 * (pixelW * pixelGrid * 2)";
	h=0;
};
//attempt of custom world - not in use
/*class CfgWorlds {
	class CAWorld;
	class OPTRE_Installation04: CAWorld {
		cutscenes[] = {"BDAWorld"};
		initWorld="OPTRE_Installation04";
		demoWorld="OPTRE_Installation04";
	};
};

class CfgMissions {
	class Cutscenes {
		class BDAWorld {
			directory = "BDA_Core\BDA_MM\BDAWorld\BDCMainMenu.OPTRE_Installation04";
		};
	};
};*/

//part of the background
class RscTitles {
	class SplashNoise {
			class BackgroundNoise: RscPicture {
				text = "";
			};
		};
	class brokenhud: SplashNoise {
			duration=100; //originally 10000
			class BackgroundNoise: RscPicture {
				text = "";
			};
		};
};	

class RscDisplayMain: RscStandardDisplay {
	// Vanilla onLoad first, then the Black Dagger dropdown.
	onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); private _bda = uiNamespace getVariable 'BDA_fnc_mainMenu'; if (isNil '_bda') then {_bda = compile preprocessFileLineNumbers '\BDA_Core\BDA_Functions\fn_mainMenu.sqf'; uiNamespace setVariable ['BDA_fnc_mainMenu', _bda]}; ['init', _this select 0] call _bda;";
	class Controls {
		class Spotlight1 {};
		class Spotlight2 {};
		class Spotlight3 {};
		class BackgroundSpotlightRight {};
		class BackgroundSpotlightLeft {};
		class BackgroundSpotlight {};

		// Top-bar tab between Multiplayer and Tutorials, with its dropdown group
		// below. BDA_Functions\fn_mainMenu.sqf drives both. The onLoad here is a
		// fallback for when another mod replaces the display onLoad above.
		class BDA_MenuTitle: RscButtonMenu {
			idc=67100;
			text="Black Dagger";
			tooltip="";
			onLoad="[ctrlParent (_this select 0)] spawn {disableSerialization; uiSleep 0.1; private _bda = uiNamespace getVariable 'BDA_fnc_mainMenu'; if (isNil '_bda') then {_bda = compile preprocessFileLineNumbers '\BDA_Core\BDA_Functions\fn_mainMenu.sqf'; uiNamespace setVariable ['BDA_fnc_mainMenu', _bda]}; ['init', _this select 0] call _bda;};";
			size="1.25 * (pixelH * pixelGrid * 2)";
			style="0x02 + 0xC0";
			colorBackground[]={0,0,0,0};
			colorBackground2[]={1,1,1,1};
			class Attributes {
				align="center";
				color="#ffffff";
				font="PuristaLight";
				shadow=0;
				size=1;
			};
			class TextPos {
				left="0.1 * 2 * (pixelW * pixelGrid * 2)";
				top="0.18 * 2 * (pixelH * pixelGrid * 2)";
				right="0.1 * 2 * (pixelW * pixelGrid * 2)";
				bottom="0.18 * 2 * (pixelH * pixelGrid * 2)";
			};
			x="0.5 - 5 * (pixelW * pixelGrid * 2)";
			y="safezoneY + 2 * (pixelH * pixelGrid * 2)";
			w="10 * (pixelW * pixelGrid * 2)";
			h="2 * (pixelH * pixelGrid * 2)";
		};
		class BDA_MenuGroup: RscControlsGroupNoScrollbars {
			idc=67090;
			x="0.5 - 5 * (pixelW * pixelGrid * 2)";
			y="safezoneY + 4 * (pixelH * pixelGrid * 2)";
			w="10 * (pixelW * pixelGrid * 2)";
			h=0;
			class Controls {
				class BDA_JoinNA: BDA_MenuItem {
					idc=67101;
					text="Join NA";
					tooltip="Alpha Company servers";
				};
				class BDA_ServersNA: BDA_MenuSubGroup {
					idc=67110;
					class Controls {
						class Server1: BDA_MenuItem { idc=67111; };
						class Server2: BDA_MenuItem { idc=67112; };
						class Server3: BDA_MenuItem { idc=67113; };
						class Server4: BDA_MenuItem { idc=67114; };
					};
				};
				class BDA_JoinEU: BDA_MenuItem {
					idc=67102;
					text="Join EU";
					tooltip="Bravo Company servers";
				};
				class BDA_ServersEU: BDA_MenuSubGroup {
					idc=67120;
					class Controls {
						class Server1: BDA_MenuItem { idc=67121; };
						class Server2: BDA_MenuItem { idc=67122; };
						class Server3: BDA_MenuItem { idc=67123; };
						class Server4: BDA_MenuItem { idc=67124; };
					};
				};
				class BDA_JoinTS: BDA_MenuItem {
					idc=67103;
					text="Join TS";
					tooltip="main.blackdagger.org:9987";
					url="ts3server://main.blackdagger.org?port=9987&password=21STBD";
				};
				class BDA_Discord: BDA_MenuItem {
					idc=67104;
					text="Discord";
					tooltip="Join the Black Dagger Discord";
					url="https://discord.gg/faxU2ty9eQ";
				};
				class BDA_Website: BDA_MenuItem {
					idc=67105;
					text="Website";
					tooltip="blackdagger.org";
					url="https://blackdagger.org";
				};
			};
		};

		class Logo: RscActivePicture {
			idc=1;
			text = "BDA_Core\BlackDaggerArmory_Logo.paa";
		};
	};
	class RscActiveText;
	class RscActivePicture : RscActiveText {
			style = 48;
			color[] = {
					1, 1, 1, 0.500000
			};
			colorActive[] = {
					1, 1, 1, 1
			};
	};

	class controlsBackground {
		class BDAMainMenuPicture: RscPicture {
			idc = 7010;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "BDA_Core\BDA_MM\longpatrol.paa";
		};
	};
};

class RscDisplayLoading {
	class Variants {
		class LoadingBackground_BDA_1 {
			idd = 7120;
			class controls {
				class LoadingPicture_bda_2: RscPicture {
				idc = 7020;
				x="SafeZoneX";
				y="SafeZoneY";
				h="SafeZoneH";
				w="SafeZoneW";
				text="BDA_Core\BDA_MM\bda_mm_2.paa";
				};
			};
		};
		class Loading_West1: LoadingBackground_BDA_1 {
			class controls {
				class LoadingPicture_bda_3: RscPicture {
				idc = 7220;
				x="SafeZoneX";
				y="SafeZoneY";
				h="SafeZoneH";
				w="SafeZoneW";
				text="BDA_Core\BDA_MM\1-2breach.paa";
				};
			};
		};
		class Loading_West3: LoadingBackground_BDA_1 {
			class controls {
				class LoadingPicture_bda_6: RscPicture {
				idc = 7320;
				x="SafeZoneX";
				y="SafeZoneY";
				h="SafeZoneH";
				w="SafeZoneW";
				text="BDA_Core\BDA_MM\bda_mm_6.paa";
				};
			};
		};
		class Loading_West4: LoadingBackground_BDA_1 {
			class controls {
				class LoadingPicture_bda_4: RscPicture {
				idc = 7420;
				x="SafeZoneX";
				y="SafeZoneY";
				h="SafeZoneH";
				w="SafeZoneW";
				text="BDA_Core\BDA_MM\bda_mm_4.paa";
				};
			};
		};
		class Loading_West5: LoadingBackground_BDA_1 {
			class controls {
				class LoadingPicture_bda_1: RscPicture {
				idc = 7520;
				x="SafeZoneX";
				y="SafeZoneY";
				h="SafeZoneH";
				w="SafeZoneW";
				text="BDA_Core\BDA_MM\2-1patrol.paa";
				};
			};
		};
		class Loading_West6: LoadingBackground_BDA_1 {
			class controls {
				class LoadingPicture_bda_1: RscPicture {
				idc = 7620;
				x="SafeZoneX";
				y="SafeZoneY";
				h="SafeZoneH";
				w="SafeZoneW";
				text="BDA_Core\BDA_MM\bda_mm_7.paa";
				};
			};
		};
	};
};

class RscDisplayLoadMission: RscStandardDisplay {
	class controlsBackground {
		class LoadingPicture_bda_m: RscPicture {
			idc = 7720;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text="BDA_Core\BDA_MM\pilot.paa";
		};
	};
};

class RscDisplayStart: RscStandardDisplay {
	class controls {
		class LoadingPicture_bda_s: RscPicture {
			idc=1245;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "BDA_Core\BDA_MM\bda_mm_1.paa";
		};
	};
};

class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers {
	class LoadingPicture_bda_mp: RscPicture {
		idc = 7820;
		x = SafeZoneX;
		y = SafeZoneY;
		h = SafeZoneH;
		w = SafeZoneW;
		text = "BDA_Core\BDA_MM\cardselite.paa";
	};
};

class RscDisplayClient: RscStandardDisplay {
	class controlsBackground {
		idc = 7920;
		colorText[]={1,1,1,1};
		x = SafeZoneX;
		y = SafeZoneY;
		h = SafeZoneH;
		w = SafeZoneW;
		text = "BDA_Core\BDA_MM\bda_mm_4.paa";
	};
};
class RscDisplayConfigure {
	enableDisplay = 1;
};

//Additional Years
class ctrlCombo;
class Cfg3den {
	class Attributes {
		class Default;
		class Title : Default {
			class Controls;
		};
		class Date : Title {
			class Controls : Controls {
				class ValueYear : ctrlCombo {
					onLoad = "_ctrlYear = _this select 0; for '_y' from 2400 to 2600 do {_lbadd = _ctrlYear lbadd str _y; _ctrlYear lbsetvalue [_lbadd,_y];}; _ctrlYear lbsetcursel 53;";
				};
			};
		};
	};
};

class CfgFunctions {
	class BDA {
		tag="BDA";
		class Menu {
			file="\BDA_Core\BDA_Functions";
			class mainMenu {};
		};
	};
};

class cfgMods {
	author="Rib";
	timepacked="090320251545";
};