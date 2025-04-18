class CfgPatches {
	class BDA_Helmets_C {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units_Marines",
			"V_FZ_Armor",
			"BDA_Core",
			"BDA_Helmets"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

class cfgWeapons {
	class ItemInfo;
	/*extern*/ class VES_S1ONIR;
	/*extern*/ class VES_S1ONIR_dp;
	/*intern*/ class BDA_CH252D_Helmet;
	/*intern*/ class BDA_CH252D_Helmet_dp;
	/*intern*/ class BDA_VX19_Helmet;
	/*intern*/ class BDA_VX19_Helmet_dp;
	/*intern*/ class BDA_Heli_Pilot_Helmet;


	class BDA_CH252D_Mustang_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (E. Mustang)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Mustang_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Mustang_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Carthwright_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (M. Carthwright)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Carthwright_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Carthwright_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Flowers_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (J. Flowers)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Flowers_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Flowers_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Beefus_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (G. Beefus)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Beefus_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beefus_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Cards_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (H. Cards)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Boston_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Boston_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Cards_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cards_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Chase_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (F. Chase)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Chase_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Chase_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Bouquet_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (A. Zarush)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Bouquet_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bouquet_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_VX19_Rib_Helmet: BDA_VX19_Helmet {
		scope = 2;
		scopeCurator = 2;
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor2_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Rib_Helmet_dp: BDA_VX19_Helmet_dp {
		scope = 2;
		scopeCurator = 2;
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Rib_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (R. Ribbington)";
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Rib_Helmet_dp: BDA_CH252D_Helmet_dp {
		subItems[] = {"Integrated_NVG_TI_1_F"};
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rib_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Karson_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Rib";
		displayName="CH252D Helmet (J. Karson)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Karson_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Karson_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Vel_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (M. Vel)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Vel_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Vel_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Vel_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Vel_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Vel_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Zodiac_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (A. Zodiac)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zodiac_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zodiac_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Zodiac_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zodiac_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zodiac_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Ryder_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		scope = 1;
		displayName="CH252D Helmet (C. Ryder)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Ryder_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		scope = 1;
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ryder_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Arturo_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (L. Arturo)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Arturo_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Arturo_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Arturo_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Arturo_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Boston_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Rib";
		displayName="CH252D Helmet (L. Boston)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Boston_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Boston_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Boston_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boston_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Sullivan_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		scope = 1;
		displayName="CH252D Helmet (D. O'Sullivan)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Sullivan_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		scope = 1;
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sullivan_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Smith_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (F. Smith)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Smith_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Smith_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Knight_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Rib";
		displayName="CH252D Helmet (N. Knight)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Knight_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Knight_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Puma_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Rib";
		displayName="CH252D Helmet (R. Puma)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Puma_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Puma_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Cross_Helmet: BDA_CH252D_Helmet {
		author="Wallace";
		displayName="CH252D Helmet (S. Cross)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Cross_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Wallace";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Cross_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Covell_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (S. Covell)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Covell_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Covell_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Covell_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Covell_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Covell_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Five_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Rib";
		displayName="CH252D Helmet (W. Five)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Five_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Five_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Five_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Five_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Five_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Reynolds_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Rib";
		displayName="CH252D Helmet (F. Reynolds)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reynolds_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Reynolds_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reynolds_CO.paa",
				"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Visor_Reynolds_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Reynolds_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reynolds_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reynolds_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Griffin_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (T. Griffin)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Griffin_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Griffin_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Griffin_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Griffin_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Griffin_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Engel_Helmet: BDA_CH252D_Helmet {
		scope = 0;
		displayName="CH252D Helmet (L. Engel)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Engel_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Engel_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Recon_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Engel_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 0;
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Engel_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Engel_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Conrad_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (A. Conrad)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Conrad_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Conrad_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Conrad_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Conrad_CO.paa",
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
		};
	};

	class BDA_CH252D_Bay_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (V. Bay)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bay_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bay_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Bay_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bay_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bay_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Boo_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (K. Boo)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boo_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boo_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Boo_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boo_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Boo_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Jenkins_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (W. Jenkins)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Jenkins_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Jenkins_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Jenkins_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Jenkins_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Jenkins_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Beavers_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (J. Beavers)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beavers_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beavers_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Beavers_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beavers_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Beavers_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Wolfman_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (J. Wolfman)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolfman_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolfman_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Wolfman_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolfman_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolfman_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Fonza_Helmet: BDA_CH252D_Helmet {
		scope = 1
		displayName="CH252D Helmet (R. Fonza)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Fonza_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Fonza_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Fonza_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Fonza_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Fonza_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Lefferts_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Grif";
		displayName="CH252D Helmet (J. Lefferts)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lefferts_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lefferts_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Lefferts_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lefferts_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lefferts_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_Bomb_Helmet: BDA_CH252D_Helmet {
		displayName="CH252D Helmet (J. Bomb)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bomb_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bomb_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Bomb_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bomb_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Bomb_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Parhau_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (R. Parhau)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Parhau_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Parhau_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Parhau_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Parhau_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Parhau_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Wolsey_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (T. Wolsey)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolsey_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolsey_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Wolsey_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolsey_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Wolsey_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Burkett_Helmet: BDA_CH252D_Helmet {
		scope = 1
		author="Zarush";
		displayName="CH252D Helmet (J. Burkett)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Burkett_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Burkett_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Burkett_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1
		author="Zarush";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Burkett_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Burkett_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_Reaper_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (W. Reaper)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reaper_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reaper_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Reaper_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reaper_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Reaper_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Dusk_Helmet: BDA_CH252D_Helmet {
		scope = 1;
		author="Rib";
		displayName="CH252D Helmet (R. Dusk)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Dusk_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Dusk_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Dusk_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1;
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Dusk_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Dusk_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Tucker_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (L. Tucker)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tucker_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tucker_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Tucker_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tucker_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tucker_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Pal_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (P. Pal)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pey_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pey_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Pal_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pey_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pey_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Hohman_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (G. Hohman)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hohman_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hohman_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Hohman_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hohman_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hohman_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Lockwood_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (A. Lockwood)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lockwood_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lockwood_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Lockwood_Helmet_dp: BDA_CH252D_Helmet_dp {
		
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Lockwood_CO.paa",
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
		};
	};

	class BDA_CH252D_Taylor_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (J. Taylor)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Taylor_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Taylor_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Taylor_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Taylor_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Taylor_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Squirtle_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (R. Squirtle)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Squirtle_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Squirtle_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Squirtle_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Squirtle_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Squirtle_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Sparh_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (N. Sparh)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sparh_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sparh_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Sparh_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sparh_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Sparh_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Ironheart_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (L. Ironheart)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ironheart_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ironheart_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Ironheart_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ironheart_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ironheart_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	
	class BDA_CH252D_Hill_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (B. Hill)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hill_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hill_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Hill_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hill_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hill_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Leviathan_Helmet: BDA_CH252D_Helmet {
		scope = 1;
		author="Grif";
		displayName="CH252D Helmet (S. Leviathan)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Leviathan_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Leviathan_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Leviathan_Helmet_dp: BDA_CH252D_Helmet_dp {
		scope = 1;
		author="Grif";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Leviathan_CO.paa",
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
		};
	};

	class BDA_CH252D_Grif_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (D. Grif)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Grif_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Grif_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Grif_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Grif_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Grif_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Byrne_Helmet: BDA_CH252D_Helmet {
		author="Grif";
		displayName="CH252D Helmet (P. Byrne)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Byrne_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Byrne_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Byrne_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Grif";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Byrne_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Byrne_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Kohl_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (R. Kohl)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kohl_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kohl_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Kohl_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Rib";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kohl_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Kohl_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Hunner_Helmet: BDA_CH252D_Helmet {
		author="Zarush";
		displayName="CH252D Helmet (T. Hunner)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hunner_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hunner_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Hunner_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hunner_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hunner_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Zephyr_Helmet: BDA_CH252D_Helmet {
		author="Zarush";
		displayName="CH252D Helmet (S. Zephyr)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zephyr_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zephyr_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Zephyr_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zephyr_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zephyr_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	//Pilots
	class BDA_Heli_Pilot_Jager_Helmet: BDA_Heli_Pilot_Helmet {
		author = "Rib";
		displayName = "VX15 Pilot Helmet (R. Jager)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helipilot_Jager_Helmet_CO.paa"
		};
	};

	class BDA_Heli_Pilot_Parhau_Helmet: BDA_Heli_Pilot_Helmet {
		author="Grif";
		displayName = "VX15 Pilot Helmet (R. Parhau)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helipilot_Parhau_Helmet_CO.paa"
		};
	};

	class BDA_Heli_Pilot_Frank_Helmet: BDA_Heli_Pilot_Helmet {
		author="Grif/Rib";
		displayName = "VX15 Pilot Helmet (R. Frank)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helipilot_Frank_Helmet_CO.paa"
		};
	};

	//end
};	

class cfgMods {
	author="Rib";
	timepacked="090320251540";
};