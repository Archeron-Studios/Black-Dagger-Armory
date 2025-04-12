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

class CfgVehicles {
	class B_Helipilot_F;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class C_scientist_F;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B_UNSC: OPTRE_UNSC_Army_Soldier_WDL {
		dlc = "BDA";
		author="Schlopp/Rib";
		model="\OPTRE_UNSC_Units\Army\uniform.p3d";
		uniformClass="BDA_Uniform_B";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_B_CO.paa"
		};
		items[]={};
		respawnItems[]={};
		hiddenSelections[]= {
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};

	class BDA_Uniform_B_SL_UNSC: BDA_Uniform_B_UNSC {
		dlc = "BDA";
		author="Schlopp/Rib";
		uniformClass="BDA_Uniform_B_SL";
	};

	class BDA_Uniform_ONI_UNSC: BDA_Uniform_B_UNSC {
		dlc = "BDA";
		author="Schlopp/Rib";
		uniformClass="BDA_Uniform_ONI_SL";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_ONI_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_ONI_CO.paa"
		};
	};

	class BDA_Uniform_TEST_UNSC: BDA_Uniform_B_UNSC {
		dlc = "BDA";
		author="Rib";
		uniformClass="BDA_Uniform_TEST";
		model="\OPTRE_UNSC_Units\Army\uniform_rolled.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST_CO.paa"
		};
	};
	class BDA_Uniform_TEST2_UNSC: BDA_Uniform_B_UNSC {
		dlc = "BDA";
		author="Rib";
		uniformClass="BDA_Uniform_TEST2";
		model="\OPTRE_UNSC_Units\Army\uniform_rolled.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST2_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST2_CO.paa"
		};
	};
	class BDA_Uniform_TEST3_UNSC: BDA_Uniform_B_UNSC {
		dlc = "BDA";
		author="Rib";
		uniformClass="BDA_Uniform_TEST3";
		model="\OPTRE_UNSC_Units\Army\uniform_rolled.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST3_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST3_CO.paa"
		};
	};
	class BDA_Uniform_TEST4_UNSC: BDA_Uniform_B_UNSC {
		dlc = "BDA";
		author="Rib";
		uniformClass="BDA_Uniform_TEST4";
		model="\OPTRE_UNSC_Units\Army\uniform_rolled.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST2_CO.paa",
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_TEST3_CO.paa"
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

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class cfgWeapons {
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class ItemInfo;
	class U_B_HeliPilotCoveralls;
	class OPTRE_UNSC_Army_Uniform_WDL;
	class U_C_Scientist;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Uniform - Black.

    class BDA_Uniform_B: OPTRE_UNSC_Army_Uniform_WDL {
		dlc = "BDA";
		scope=2;
		author="Schlopp";
		displayName="Cross-Branch BDU (Black)";
		picture="\BDA_Armor\BDA_Uniforms\data\icons\BDA_ODST_Uniform.paa";
		class ItemInfo: ItemInfo {
			uniformModel="-";
			uniformClass="BDA_Uniform_B_UNSC";
			containerClass="Supply120";
			mass=40;
			modelSides[]={6};
		};
	};

    class BDA_Uniform_B_SL: BDA_Uniform_B {
		displayName="Cross-Branch BDU (Black, Slim Legs)";
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Uniform_B_SL_UNSC";
		};
	};

	class BDA_Uniform_ONI_SL: BDA_Uniform_B {
		displayName="Cross-Branch BDU (ONI)";
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Uniform_ONI_UNSC";
		};
	};

	class BDA_Uniform_TEST: BDA_Uniform_B {
		displayName="Cross-Branch BDU (TEST)";
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Uniform_TEST_UNSC";
		};
	};
	class BDA_Uniform_TEST2: BDA_Uniform_B {
		displayName="Cross-Branch BDU (TEST2)";
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Uniform_TEST2_UNSC";
		};
	};
	class BDA_Uniform_TEST3: BDA_Uniform_B {
		displayName="Cross-Branch BDU (TEST3)";
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Uniform_TEST3_UNSC";
		};
	};
	class BDA_Uniform_TEST4: BDA_Uniform_B {
		displayName="Cross-Branch BDU (TEST4)";
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Uniform_TEST4_UNSC";
		};
	};

//------------------------------------------------------------------// Naval Uniforms

	class BDA_Base_Navy_Uniform: U_C_Scientist {
		dlc = "BDA";
		author = "Black Dagger Development Group";
		scope = 1;
		scopeCurator = 1;
		hiddenSelections[]= {
			"camo"
		};
		class ItemInfo: ItemInfo {
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
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Navy_Uniform_Avi2_F";
		};
	};

	class BDA_Navy_Uniform_G: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (Maintenance)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_G_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Navy_Uniform_G_F";
		};
	};
	class BDA_Navy_Uniform_R: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (Ordnance)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_R_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Navy_Uniform_R_F";
		};
	};
	class BDA_Navy_Uniform_P: BDA_Base_Navy_Uniform {
		scope=2;
		displayName="Naval BDU (Fuel)";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Uniforms\data\BDA_Uniform_Deckcrew_P_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass="BDA_Navy_Uniform_P_F";
		};
	};

};

