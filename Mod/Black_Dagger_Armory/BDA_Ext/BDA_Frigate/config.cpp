class CfgPatches {
	class BDA_Frigate {
		author = "Black Dagger Development Crew";
		units[]=
		{
			"BDA_Frigate"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Frigate",
			"Dmns_Structures_Halberd_Skybox"
			"BDA_Core",
			"B_BDCUNSC"
		};
	};
};

class CfgVehicles {
	class OPTRE_Frigate_UNSC;

	class BDA_Frigate: OPTRE_Frigate_UNSC {
		DLC="BDA";
		author="Rib";
		displayName="Frigate (Alaskan Conquest)";
		faction = "B_BDCUNSC";
		editorCategory="BDA_EC_BlackDagger";
		editorSubcategory="BDA_ESC_AerospaceShip";
		hiddenSelectionsTextures[]=
		{
			"BDA_Ext\BDA_Frigate\data\decals_aq_ca.paa",
			"OPTRE_Frigate\data\Paris_back_co.paa",
			"OPTRE_Frigate\data\Paris_front_co.paa",
			"OPTRE_Frigate\data\Armament_co.paa"
		};
		class SimpleObject
		{
			eden=1;
		};
	};
	class BDA_Frigate_AITH: BDA_Frigate {
		displayName = "Frigate (Ace In The Hole)";
		hiddenSelectionsTexture[]= {
			"BDA_Ext\BDA_Frigate\data\decals_aith_ca.paa",
			"OPTRE_Frigate\data\Paris_back_co.paa",
			"OPTRE_Frigate\data\Paris_front_co.paa",
			"OPTRE_Frigate\data\Armament_co.paa"
		};
	};
	class BDA_Frigate_BI: BDA_Frigate {
		displayName = "Frigate (Big Iron)";
		hiddenSelectionsTexture[]= {
			"BDA_Ext\BDA_Frigate\data\decals_bi_ca.paa",
			"OPTRE_Frigate\data\Paris_back_co.paa",
			"OPTRE_Frigate\data\Paris_front_co.paa",
			"OPTRE_Frigate\data\Armament_co.paa"
		};
	};
	class BDA_Frigate_LDU: BDA_Frigate {
		displayName = "Frigate (Land Down Under)";
		hiddenSelectionsTexture[]= {
			"BDA_Ext\BDA_Frigate\data\decals_ldu_ca.paa",
			"OPTRE_Frigate\data\Paris_back_co.paa",
			"OPTRE_Frigate\data\Paris_front_co.paa",
			"OPTRE_Frigate\data\Armament_co.paa"
		};
	};


};

class cfgMods {
	author="Rib";
	timepacked="051020242250";
};