class CfgPatches {
	class BDA_Uniforms {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"BDA_Core"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class cfgWeapons {
	class UniformItem;
	class U_B_HeliPilotCoveralls;
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_Navy_Uniform;
	class U_C_Scientist;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B: OPTRE_UNSC_Army_Uniform_WDL {
		scope=2;
		author="Schlopp";
		displayName="Cross-Branch BDU (Black)";
		class ItemInfo: UniformItem
		{
			uniformClass="BDA_Uniform_B_UNSC";
		};
	};

    class BDA_Uniform_B_SL: BDA_Uniform_B {
		displayName="Cross-Branch BDU (Black, Slim Legs)";
		class ItemInfo: UniformItem
		{
			uniformClass="BDA_Uniform_B_SL_UNSC";
		};
	};

	class BDA_Uniform_ONI_SL: BDA_Uniform_B {
		displayName="Cross-Branch BDU (ONI)";
		class ItemInfo: UniformItem
		{
			uniformClass="BDA_Uniform_ONI_UNSC";
		};
	};

//------------------------------------------------------------------// Naval Uniforms

	class BDA_Base_Navy_Uniform: U_C_Scientist {
		dlc = "BDA";
		author = "Black Dagger Development Group";
		scope = 1;
		scopeCurator = 2;
		hiddenSelections[]= {
			"camo"
		};
		class ItemInfo: UniformItem {
			uniformModel="-";
			containerClass="Supply120";
			mass=10;
		};
	};

	class BDA_Navy_Uniform_ONI: U_B_HeliPilotCoveralls {
		scope=2;
		author="Schlopp";
		displayName="Naval BDU (ONI)";
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_ONI_F";
		};
	};

	class BDA_Navy_Uniform_B: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_B_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Navy_Uniform_B_F";
		};
	};

	class BDA_Navy_Uniform_Avi1: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (81st Naval Air Squadron - Gray)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi1_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Navy_Uniform_Avi1_F";
		};
	};

	class BDA_Navy_Uniform_Avi2: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (81st Naval Air Squadron - Green)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi2_CO.paa"
		};
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_Avi2_F";
		};
	};

	class BDA_Navy_Uniform_G: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (Maintenance)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_G_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_G_F";
		};
	};
	class BDA_Navy_Uniform_R: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (Ordnance)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_R_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_R_F";
		};
	};
	class BDA_Navy_Uniform_P: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (Fuel)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_P_co.paa"
		};
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_P_F";
		};
	};


};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class CfgVehicles {
	class B_Helipilot_F;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class OPTRE_UNSC_Navy_Soldier;
	class C_scientist_F;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B_UNSC: OPTRE_UNSC_Army_Soldier_WDL {
		scope=2;
		scopeCurator=2;
		author="Schlopp";
		uniformClass="BDA_Uniform_B";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa"
		};
	};

	class BDA_Uniform_B_SL_UNSC: BDA_Uniform_B_UNSC {
		uniformClass="BDA_Uniform_B_SL";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};

	class BDA_Uniform_ONI_UNSC: BDA_Uniform_B_UNSC {
		uniformClass="BDA_Uniform_ONI_SL";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_ONI_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_ONI_CO.paa"
		};
		hiddenSelections[]= {
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};

	//------------------------------------------------------------------// Naval Uniform

	class BDA_Base_Naval_Uniform: C_scientist_F {
		dlc = "BDA";
		author = "Rib";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		modelSides[]={3};
	};

	class BDA_Navy_Uniform_B_F: BDA_Base_Naval_Uniform {
		author="Schlopp";
		uniformClass="BDA_Navy_Uniform_B";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_B_CO.paa"
		};
	};

	class BDA_Navy_Uniform_G_F: BDA_Base_Naval_Uniform {
		uniformClass="BDA_Navy_Uniform_G";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_G_co.paa"
		};
	};
	class BDA_Navy_Uniform_R_F: BDA_Base_Naval_Uniform {
		uniformClass="BDA_Navy_Uniform_R";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_R_co.paa"
		};
	};
	class BDA_Navy_Uniform_P_F: BDA_Base_Naval_Uniform {
		uniformClass="BDA_Navy_Uniform_P";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_P_co.paa"
		};
	};

	class BDA_Navy_Uniform_Avi1_F: BDA_Base_Naval_Uniform {
		uniformClass="BDA_Navy_Uniform_Avi1";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi1_CO.paa"
		};
	};

	class BDA_Navy_Uniform_Avi2_F: BDA_Base_Naval_Uniform {
		uniformClass="BDA_Navy_Uniform_Avi2";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_Avi2_CO.paa"
		};
	};

	class BDA_Navy_Uniform_ONI_F: B_Helipilot_F {
		scope=2;
		scopeCurator=2;
		author="Rib";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		uniformClass="BDA_Navy_Uniform_ONI";
		hiddenSelections[]= {
			"Camo"
		};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Navy_Uniform_ONI_CO.paa"
		};
	};

};