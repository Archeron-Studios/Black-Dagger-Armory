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
	class Controls {
		class Spotlight1 {};
		class Spotlight2 {};
		class Spotlight3 {};
		class BackgroundSpotlightRight {};
		class BackgroundSpotlightLeft {};
		class BackgroundSpotlight {};

		class ConnectServer: RscButton {
			idc=-1;
			text="Join BDC Server";
			tooltip="Click to Join the Black Dagger Company Server";
			style=2;
			onbuttonclick="connectToServer ['74.208.86.92', 2302, '']"; //games.blackdagger.org OR 74.208.86.92
			colorBackground[]={0,0,0,0.40000001};
			colorBackgroundActive[]={1,0,0,0.2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + safeZoneW - 0.8";
			y="safeZoneY + 0.2 * safeZoneH";
			w="0.25";
			h="0.05";
		};
		class ConnectDiscord: RscButton {
			idc=-1;
			text="Join BDC Discord";
			tooltip="Click to join the Black Dagger Discord";
			url="https://discord.gg/faxU2ty9eQ";
			colorBackground[]={0,0,0,0.69999999};
			colorBackgroundActive[]={1,0,0,0.2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.2 * safeZoneW";
			y="safeZoneY + 0.2 * safeZoneH";
			w="0.25";
			h="0.05";
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

class cfgMods {
	author="Rib";
	timepacked="090320251545";
};