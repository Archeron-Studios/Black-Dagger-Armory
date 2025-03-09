class CfgPatches
{
	class BDA_Helmets
	{
		author="Black Dagger Development Crew";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units_Marines",
			"BDA_Core"
		};
		units[]={};
		weapons[]={"BDA_VX19_Helmet","BDA_CH252D_Helmet",};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class cfgWeapons {
	/*arma*/ class ItemInfo;
	/*extern*/ class OPTRE_UNSC_CH252D_Helmet_Base;
	/*extern*/ class OPTRE_UNSC_CH252D_Helmet_dp;
	/*extern*/ class OPTRE_UNSC_Recon_Helmet;
	/*extern*/ class OPTRE_UNSC_Recon_Helmet_dp;
	/*extern*/ class OPTRE_Helmet_NavyDeckCrew;
	/*extern*/ class OPTRE_PatrolCap_Navy;
	/*extern*/ class OPTRE_FC_VX19_Helmet;
	/*extern*/ class OPTRE_FC_VX19_Helmet_dp;
	/*extern*/ class OPTRE_UNSC_Cap_ODST;
	/*arma*/ class H_Booniehat_oli;
	/*arma*/ class H_MilCap_Blue;
	/*arma*/ class H_PilotHelmetHeli_B;
	/*arma*/ class H_Cap_oli;

	class BDA_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet_Base {
		scope=2;
		author="Schlopp";
		displayName="CH252D Helmet";
		picture="\BDA_Armor\BDA_Helmets\data\icons\BDA_ODST_Helmet";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp {
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Rib";
		displayName="CH252D Helmet";
		picture="\BDA_Armor\BDA_Helmets\data\icons\BDA_ODST_Helmet";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_P1: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (1stPLT)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mammoth_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mammoth_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_P1_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (1stPLT)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mammoth_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mammoth_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S1: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (1-1)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
	};
	class BDA_CH252D_Helmet_S1_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (1-1)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S2: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (1-2)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S2_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (1-2)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S2_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S3: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (1-3)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S3_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (1-3)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S3_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_P2: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (2ndPLT)";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Druid_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Druid_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_P2_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (2ndPLT)";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Druid_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Druid_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S4: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (2-1)";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S4_dp: BDA_CH252D_Helmet_dp {
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S4_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S5: BDA_CH252D_Helmet {
		author = "Rib";
		displayName="CH252D Helmet (2-2)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S5_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S5_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S5_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S5_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S5_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S6: BDA_CH252D_Helmet {
		author = "Rib";
		displayName="CH252D Helmet (2-3)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S6_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S6_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S6_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S6_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S6_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_Recon: BDA_CH252D_Helmet {
		author = "Rib";
		scope = 1;
		displayName="CH252D Helmet (Recon)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_Recon_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		scope = 1;
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Recon_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_Mortar: BDA_CH252D_Helmet {
		author = "Rib";
		displayName="CH252D Helmet (Hangman)";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mortar_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Mortar_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mortar_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Mortar_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_Mortar_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (Hangman)";
		hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mortar_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Mortar_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Helmet_P3: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (3rdPLT)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Outlaw_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Outlaw_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_P3_dp: BDA_CH252D_Helmet_dp {
		displayName="CH252D Helmet (3rdPLT)";
		hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Outlaw_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Outlaw_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S7: BDA_CH252D_Helmet {
		author = "Rib";
		displayName="CH252D Helmet (3-1)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S7_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S7_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S7_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S7_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S7_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S8: BDA_CH252D_Helmet {
		author = "Rib";
		displayName="CH252D Helmet (3-2)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S8_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S8_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S8_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S8_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S8_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Helmet_S9: BDA_CH252D_Helmet {
		author = "Rib";
		displayName="CH252D Helmet (3-3)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S9_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S9_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Helmet_S9_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		model="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S9_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S9_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_VX19_Helmet: OPTRE_FC_VX19_Helmet {
		dlc="BDA";
		scope=2;
		author="Rib";
		displayName="VX19 Flight Helmet";
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]={
				"camo",
				"camo2",
				"camo3",
				"camo4",
				//"H_Collar",
				//"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Helmet_dp: OPTRE_FC_VX19_Helmet_dp {
		dlc="BDA";
		scope=1;
		author="Rib";
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};	
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]={
				"camo",
				"camo2",
				"camo3",
				"camo4",
				//"H_Collar",
				//"H_Neck",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};	
		};
	};

	class BDA_Heli_Pilot_Helmet: H_PilotHelmetHeli_B {
		dlc="BDA";
		scope=2;
		author = "Rib";
		displayName = "VX15 Pilot Helmet - Black (81st Naval Air Squadron)";
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helipilot_Helmet_B_CO.paa"
		};
	};
	class BDA_Heli_Pilot_Helmet_G: BDA_Heli_Pilot_Helmet {
		displayName = "VX15 Pilot Helmet - Green (81st Naval Air Squadron)";
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Helmets\data\BDA_Helipilot_Helmet_G_CO.paa"
		};
	};

	class BDA_PatrolCap_Navy: H_MilCap_Blue {
		author="Schlopp";
		displayname="NAVCOM Patrol Cap";
		hiddenselectionstextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_patrolcap_Navy_co.paa",
		};
	};

	class BDA_FlightDeck_Navy_G: OPTRE_Helmet_NavyDeckCrew {
		author="Rib";
		displayName="Flight Deck Helmet [Maintenance]";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Deckcrew_G_co.paa"
		};
	};
	class BDA_FlightDeck_Navy_P: OPTRE_Helmet_NavyDeckCrew {
		author="Rib";
		displayName="Flight Deck Helmet [Fuel]";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Deckcrew_P_co.paa"
		};
	};
	class BDA_FlightDeck_Navy_R: OPTRE_Helmet_NavyDeckCrew {
		author="Rib";
		displayName="Flight Deck Helmet [Ordnance]";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Deckcrew_R_co.paa"
		};
	};

	class BDA_ShipHat_Base: H_Cap_oli {
		scope = 1;
		scopeAuthor = 1;
		author = "Rib";
	};
	class BDA_ShipHat_AS: BDA_ShipHat_Base { //Cruiser (Halcyon)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Arizona Sword]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_Ari.paa"};
	};
	class BDA_ShipHat_OC: BDA_ShipHat_Base { //Destroyer (Halberd)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Occam's Chainsaw]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_OC.paa"};
	};
	class BDA_ShipHat_MQ: BDA_ShipHat_Base { //Destroyer (Halberd)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Mississippi Queen]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_MQ.paa"};
	};
	class BDA_ShipHat_AC: BDA_ShipHat_Base { //Frigate (Paris)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Alaskan Conquest]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_AC.paa"};
	};
	class BDA_ShipHat_BI: BDA_ShipHat_Base { //Frigate (Charon)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Big Iron]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_BI.paa"};
	};
	class BDA_ShipHat_PAC: BDA_ShipHat_Base { //Destroyer (Halberd)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Pomp and Circumstance]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_PAC.paa"};
	};
	class BDA_ShipHat_AITH: BDA_ShipHat_Base { //Frigate (Charon)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Ace In The Hole]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_AITH.paa"};
	};
	class BDA_ShipHat_LDU: BDA_ShipHat_Base { //Frigate (Charon)
		scope = 2;
		scopeAuthor = 2;
		displayName = "Cap [Land Down Under]";
		hiddenSelectionsTextures[] = {"BDA_Armor\BDA_Helmets\data\BDA_Cap_LDU.paa"};
	};
	
	//end

};


class cfgMods
{
	author="Rib";
	timepacked="090320251540";
};
