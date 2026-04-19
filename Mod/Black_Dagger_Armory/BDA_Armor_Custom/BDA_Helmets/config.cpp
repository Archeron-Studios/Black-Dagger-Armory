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
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"BDA_Armor_Custom\BDA_Helmets\data\visors\BDA_Pilot_Rib_Visor2_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
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
		author="Rib";
		displayName="VX19 Flight Helmet (R. Ribbington)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Rib_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
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

	class BDA_VX19_Arturo_Helmet: BDA_VX19_Helmet {
		author="Byrne";
		displayName="VX19 Flight Helmet (L. Arturo)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Arturo_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Arturo_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Arturo_Helmet_dp: BDA_VX19_Helmet_dp {
		author="Byrne";
		displayName="VX19 Flight Helmet (L. Arturo)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Arturo_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Arturo_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
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

	class BDA_CH252D_Griffin_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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

	class BDA_CH252D_Boo_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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
		author="Griffin";
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

	class BDA_CH252D_Reaper_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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
		author="Griffin";
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

	class BDA_CH252D_Tucker_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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
		author="Griffin";
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

	class BDA_CH252D_Hohman_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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

	class BDA_CH252D_Taylor_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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

	class BDA_CH252D_Caboose_Helmet: BDA_CH252D_Helmet {
		author="Rib";
		displayName="CH252D Helmet (R. Caboose)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Caboose_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Caboose_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Caboose_Helmet_dp: BDA_CH252D_Helmet_dp {
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Caboose_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Caboose_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Sparh_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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
	
	class BDA_CH252D_Hill_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
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
		author="Griffin";
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

	class BDA_CH252D_Magnum_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (C. Magnum)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Magnum_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Magnum_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Magnum_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Magnum_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Magnum_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Grif_Helmet: BDA_CH252D_Helmet {
		author="Byrne";
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
		author="Byrne";
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
		author="Byrne";
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
		author="Griffin";
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Zephyr_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_DFrost_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (D. Frost)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_DFrost_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_DFrost_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_DFrost_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_DFrost_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_DFrost_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Nurse_Helmet: BDA_CH252D_Helmet {
		author="Byrne";
		displayName="CH252D Helmet (Mrs. Nurse)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Nurse_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Nurse_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Nurse_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Byrne";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Nurse_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Nurse_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Hamilton_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (A. Hamilton)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hamilton_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hamilton_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Hamilton_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hamilton_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Hamilton_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Blood_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (S. Blood)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Blood_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Blood_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Blood_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Blood_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Blood_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Pike_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (W. Pike)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pike_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pike_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Pike_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pike_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Pike_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_David_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (S. David)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_David_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_David_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_David_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_David_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_David_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_CH252D_Ackerson_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (J. Ackerson)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ackerson_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ackerson_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Ackerson_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ackerson_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Ackerson_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_Weevil_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (L. Weevil)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Weevil_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Weevil_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Weevil_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Weevil_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Weevil_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_Rye_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (A. Rye)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rye_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rye_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Rye_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rye_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Rye_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_BFrost_Helmet: BDA_CH252D_Helmet {
		author="Griffin";
		displayName="CH252D Helmet (B. Frost)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_BFrost_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_BFrost_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_BFrost_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Griffin";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_BFrost_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_BFrost_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_Tom_Helmet: BDA_CH252D_Helmet {
		author="Byrne";
		displayName="CH252D Helmet (T. Tom)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tom_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tom_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Tom_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Byrne";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tom_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Tom_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	
	class BDA_CH252D_Capper_Helmet: BDA_CH252D_Helmet {
		author="Byrne";
		displayName="CH252D Helmet (G. Capper)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Capper_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Capper_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Capper_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Byrne";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Capper_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Capper_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	
class BDA_CH252D_Legion_Helmet: BDA_CH252D_Helmet {
		author="Byrne";
		displayName="CH252D Helmet (D. Legion)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Legion_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Legion_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Legion_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Byrne";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Legion_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_legion_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	

	class BDA_CH252D_Koartz_Helmet: BDA_CH252D_Helmet {
		author="Byrne";
		displayName="CH252D Helmet (O. Koartz)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Koartz_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Koartz_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_Command_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_CH252D_Koartz_Helmet_dp: BDA_CH252D_Helmet_dp {
		author="Byrne";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Koartz_CO.paa",
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
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helmet_Koartz_CO.paa",
				"optre_fc_units\marines\data\h3_pilothelmet_visor_ca.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};	
	//Pilots
	class BDA_Heli_Pilot_Parhau_Helmet: BDA_Heli_Pilot_Helmet {
		author="Griffin";
		displayName = "VX15 Pilot Helmet (R. Parhau)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Helipilot_Parhau_Helmet_CO.paa"
		};
	};

	class BDA_VX19_Griffin_Helmet: BDA_VX19_Helmet {
		author="Griffin";
		displayName="VX19 Flight Helmet (T. Griffin)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Griffin_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Griffin_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Griffin_Helmet_dp: BDA_VX19_Helmet_dp {
		displayName="VX19 Flight Helmet (T. Griffin)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Griffin_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Griffin_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_VX19_Apollo_Helmet: BDA_VX19_Helmet {
		author="Rib";
		displayName="VX19 Flight Helmet (J. Apollo)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Apollo_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Apollo_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Apollo_Helmet_dp: BDA_VX19_Helmet_dp {
		author="Rib";
		displayName="VX19 Flight Helmet (J. Apollo)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Apollo_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Apollo_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	class BDA_VX19_Wolfwood_Helmet: BDA_VX19_Helmet {
		author="Griffin";
		displayName="VX19 Flight Helmet (N. Wolfwood)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Wolfwood_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Wolfwood_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Wolfwood_Helmet_dp: BDA_VX19_Helmet_dp {
		displayName="VX19 Flight Helmet (N. Wolfwood)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Wolfwood_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Wolfwood_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Byrne_Helmet: BDA_VX19_Helmet {
		author="Byrne";
		displayName="VX19 Flight Helmet (P. Byrne)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Byrne_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Byrne_CO.paa",
				"BDA_Armor\BDA_Helmets\data\visors\BDA_Pilot_Visor_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};
	class BDA_VX19_Byrne_Helmet_dp: BDA_VX19_Helmet_dp {
		displayName="VX19 Flight Helmet (P. Byrne)";
		hiddenSelectionsTextures[]={
			"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Byrne_CO.paa",
			"",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelectionsTextures[]={
				"BDA_Armor_Custom\BDA_Helmets\data\BDA_Pilot_Byrne_CO.paa",
				"",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"BDA_Armor\BDA_Helmets\data\BDA_Soft_Packs_co.paa"
			};
		};
	};

	//end
};	

class cfgMods {
	author="Rib";
	timepacked="010029012026";
};