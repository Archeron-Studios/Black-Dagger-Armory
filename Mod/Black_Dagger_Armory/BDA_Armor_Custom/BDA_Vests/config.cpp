class CfgPatches {
	class BDA_Vests_C {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units_Marines",
			"BDA_Core",
			"BDA_Vests"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons {
	/*arma*/ class ItemInfo;
	/*arma*/ class VestItem;
	/*arma*/ class Uniform_Base;
	/*arma*/ class HitpointsProtectionInfo;
	/*extern*/ class OPTRE_UNSC_M52D_Armor;
	/*intern*/ class BDA_Armor_RF_ONI;
	/*intern*/ class BDA_Armor_SN;
	/*intern*/ class BDA_Armor_DM;
	/*intern*/ class BDA_Armor_MD;
	/*intern*/ class BDA_Armor_RF;
	/*intern*/ class BDA_Armor_AR;
	/*intern*/ class BDA_Armor_RF_Big;
	/*intern*/ class BDA_Armor_RF_P2;
	/*intern*/ class BDA_Armor_Pilot;
	/*intern*/ class BDA_M52B_Pilot_Armor_B;
	/*intern*/ class BDA_Armor_BR;
	class OPTRE_UNSC_M52D_Armor_Stripes;

	class BDA_Armor_Mustang: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		displayName="M52D Body Armor (E. Mustang)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Mustang_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_Knife",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Mustang_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Scythe_CO.paa"
			};
		};
	};
	
	class BDA_Armor_Flowers: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		displayName="M52D Body Armor (J. Flowers)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Flowers_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Flowers_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_Knife",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Flowers_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Flowers_CO.paa"
			};
		};
	};

	class BDA_Armor_Ribbington_v2: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		author = "Rib";
		displayName="M52D Body Armor (R. Ribbington)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",//vest camo
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_CO.paa",//Shoulder camo2
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Rib_CO.paa", //legs camo3
			"optre_unsc_units\army\data\ghillie_woodland_co", //camo4
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Rib_CO.paa"//camo5
		};
		class ItemInfo: ItemInfo {
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
	//			"A_TacPad",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
	//			"AS_ODSTRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallRight",
	//			"AS_SmallLeft",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
	//			"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
	//			"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
	//			"AP_Smoke",
				"APO_AR",
				"APO_BR",
	//			"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",//vest camo
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_2_CO.paa",//Shoulder camo2
				"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Rib_CO.paa", //legs camo3
				"optre_unsc_units\army\data\ghillie_woodland_co", //camo4
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_odst_CO.paa"//camo5
			};
		};
	};

	class BDA_Pilot_Rib: BDA_Armor_Ribbington_v2 {
		displayName = "M52D Body Armor (R. Ribbington)";
		hiddenSelectionsTextures[] = {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",//vest camo
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_CO.paa",//Shoulder camo2
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Rib_Pilot_CO.paa", //legs camo3
			"optre_unsc_units\army\data\ghillie_woodland_co", //camo4
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Rib_pilot_CO.paa"//camo5
		};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",//vest camo
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Rib_CO.paa",//Shoulder camo2
				"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Rib_Pilot_CO.paa", //legs camo3
				"optre_unsc_units\army\data\ghillie_woodland_co", //camo4
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Rib_pilot_CO.paa"//camo5
			};
		};
	};

	class BDA_Armor_Zarush: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		author = "Rib";
		displayName="M52D Body Armor (A. Zarush)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]={
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Zarush_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Zarush_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
	//			"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
	//			"AS_MediumLeft", 
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
	//			"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallRight",
				"AS_SmallLeft",
				"AP_AR",
				"AP_BR", 
				"AP_Canteen",
	//			"AP_GL",
	//			"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
	//			"AP_Thigh",
	//			"AP_Frag",
	//			"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
	//			"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]={
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Zarush_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Zarush_CO.paa"
			};
		};
	};

	class BDA_Armor_Boston: BDA_Armor_RF {
		scope = 1
		author="Rib";
		displayName="M52D Body Armor (L. Boston)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Vest_Boston_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Boston_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Boston4_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[]= {
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Vest_Boston_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Boston_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Boston4_CO.paa"
			};
			hiddenSelections[]={
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
	//			"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
	//			"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
	//			"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
	//			"AP_GL",
	//			"AP_Knife",
	//			"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
	//			"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
	//			"APO_Knife",
				"APO_BR",
	//			"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};

	class BDA_Armor_Cards: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		author="Rib";
		displayName="M52D Body Armor (H. Cards)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Cards_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Cards_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
	//			"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
	//			"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
	//			"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_Knife",
				"APO_BR",
	//			"APO_SMG",
				"APO_Sniper",
	//			"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Cards_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Cards_CO.paa"
			};
		};
	};

	class BDA_Armor_Knight: OPTRE_UNSC_M52D_Armor {
		scope = 1
		dlc="BDA";
		author="Rib + Grif";
		displayName="M52D Body Armor (N. Knight)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Knight_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Knight_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
				"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
	//			"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
	//			"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight", 
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
	//			"APO_Knife",
	//			"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_Knight_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Knight_CO.paa"
			};
		};
	};
	
	class BDA_Armor_Griffin: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		author="Grif";
		displayName="M52D Body Armor (T. Griffin)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Griffin_CO.paa",
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Griffin_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Griffin_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
				"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
	//			"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
	//			"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight", 
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
	//			"APO_Knife",
	//			"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]=
			{
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_Griffin_CO.paa",
				"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Griffin_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor\BDA_Vests\data\BDA_M52D_Armor_Griffin_CO.paa"
			};
		};
	};

	class BDA_Armor_Carthwright: OPTRE_UNSC_M52D_Armor {
		dlc="BDA";
		author="Grif + Rib";
		displayName="M52D Body Armor (M. Carthwright)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Carthwright_CO.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
				"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
	//			"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
	//			"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
	//			"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
	//			"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
	//			"AP_Frag",
				"AP_Smoke",
				"APO_AR",
	//			"APO_Knife",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Carthwright_CO.paa"
			};
		};
	};

	class BDA_Armor_Reynolds: OPTRE_UNSC_M52D_Armor {
		scope = 1
		dlc="BDA";
		author="Grif";
		displayName="M52D Body Armor (F. Reynolds)";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Reynolds_CO.paa"
		};
		class ItemInfo: ItemInfo {
				hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
	//			"A_KneesLeft",
	//			"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
	//			"A_ODST",
	//			"A_TacPad",
	//			"A_ShinArmorLeft",
	//			"A_ShinArmorRight",
	//			"AS_BaseLeft",
	//			"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
	//			"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_ODSTSniperLeft",
				"AS_SmallLeft",
	//			"AS_SmallRight",
	//			"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
	//			"AP_Thigh",
	//			"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			hiddenSelectionsTextures[]= {
				"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
				"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
				"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co",
				"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Reynolds_CO.paa"
			};
		};
	};

	/*class BDA_Armor_Ryder: BDA_Armor_RF {
		author = "Rib";
		displayName = "M52D Body Armor (C. Ryder)";
		hiddenSelectionsTextures[] = {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Ryder.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Ryder_CO.paa"
		};
	};*/

	class BDA_Armor_Pey: BDA_Armor_MD {
		author = "Rib";
		displayName = "M52D Body Armor (P. Pal)";
		hiddenSelectionsTextures[] = {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Pey_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Pey_CO.paa"
		};
	};

	class BDA_Armor_Chase: BDA_Armor_RF {
		author = "Rib";
		displayName = "M52D Body Armor (F. Chase)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Chase_CO.paa"
		};
	};

	class BDA_Armor_Arturo: BDA_Armor_RF_Big {
		author = "Rib";
		displayName = "M52D Body Armor (L. Arturo)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Arturo_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Arturo_CO.paa"
		};
	};

	class BDA_Armor_Beefe: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (G. Beefe)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor_Custom\BDA_Legs\data\BDA_Legs_Beefe_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Beefe_CO.paa"
		};
	};

	class BDA_Armor_Smith: BDA_Armor_MD {
		author = "Grif";
		displayName = "M52D Body Armor (F. Smith)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Smith_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Smith_CO.paa"
		};
	};

	class BDA_Armor_Jager: BDA_M52B_Pilot_Armor_B {
		author = "Rib/Grif";
		displayName="M52B Body Armor (R. Jager)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52B_Armor_Jager_CO.paa" 
		};
	};

	class BDA_Armor_Frank: BDA_M52B_Pilot_Armor_B {
		author = "Grif";
		displayName="M52B Body Armor (R. Frank)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52B_Armor_Frank_CO.paa" 
		};
	};

	class BDA_Armor_Parhau: BDA_Armor_RF {
		scope = 1;
		author = "Grif";
		displayName = "M52D Body Armor (R. Parhau)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Parhau_CO.paa"
		};
	};

	class BDA_Armor_Pilot_Parhau: BDA_M52B_Pilot_Armor_B {
		author = "Grif";
		displayName="M52B Body Armor (R. Parhau)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52B_Armor_Parhau_CO.paa" 
		};
	};

	class BDA_Armor_Kohl: BDA_Armor_RF {
		dlc="BDA";
		author = "Grif";
		picture="\BDA_Armor\BDA_Vests\data\icons\BDA_ODST_Armor";
		displayName="M52D Body Armor (R. Kohl)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Kohl_CO.paa"
		};
	};

	class BDA_Armor_Zodiac: BDA_Armor_MD {
		author = "Rib";
		displayName = "M52D Body Armor (A. Zodiac)";
		hiddenSelectionsTextures[] = {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_Armor_Zodiac_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Zodiac_CO.paa"
		};
	};
	
	class BDA_Armor_Conrad: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (A. Conrad)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Conrad_CO.paa"
		};
	};

	class BDA_Armor_Puma: BDA_Armor_RF {
		scope = 1
		author = "Grif";
		displayName = "M52D Body Armor (R. Puma)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Puma_CO.paa"
		};
	};

	class BDA_Armor_Covell: BDA_Armor_DM {
		author = "Grif";
		displayName = "M52D Body Armor (S. Covell)";
		hiddenSelectionsTextures[] = {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Covell_CO.paa"
		};
	};

	class BDA_Armor_Beavers: BDA_Armor_MD {
		author = "Grif";
		displayName = "M52D Body Armor (J. Beavers)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S6_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Beavers_CO.paa"
		};
	};

	class BDA_Armor_Wolsey: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (T. Wolsey)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Wolsey_CO.paa"
		};
	};

	class BDA_Armor_Jenkins: BDA_Armor_MD {
		author = "Grif";
		displayName = "M52D Body Armor (W. Jenkins)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_Scythe_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Jenkins_CO.paa"
		};
	};

	class BDA_Armor_Bomb: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (J. Bomb)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Bomb_CO.paa"
		};
	};

	class BDA_Armor_Taylor: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (J. Taylor)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Taylor_CO.paa"
		};
	};

	class BDA_Armor_Lockwood: BDA_Armor_MD {
		author = "Grif";
		displayName = "M52D Body Armor (A. Lockwood)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S3_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Lockwood_CO.paa"
		};
	};

	class BDA_Armor_Tucker: BDA_Armor_MD {
		author = "Grif";
		displayName = "M52D Body Armor (L. Tucker)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S4_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Tucker_CO.paa"
		};
	};

	class BDA_Armor_Reaper: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (W. Reaper)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Reaper_CO.paa"
		};
	};

	class BDA_Armor_Hohman: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (G. Hohman)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Hohman_CO.paa"
		};
	};

	class BDA_Armor_Karson: BDA_Armor_RF {
		scope = 1
		author = "Rib";
		displayName = "M52D Body Armor (J. Karson)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Karson_CO.paa"
		};
	};

	class BDA_Armor_Fonza: BDA_Armor_MD {
		scope = 1
		author = "Grif";
		displayName = "M52D Body Armor (R. Fonza)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_Scythe_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Fonza_CO.paa"
		};
	};

	class BDA_Armor_McCoy: BDA_Armor_RF {
		author = "Grif";
		displayName = "M52D Body Armor (C. McCoy)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_McCoy_CO.paa"
		};
	};	

	class BDA_Armor_Dusk: BDA_Armor_MD {
		scope = 1;
		author = "Grif";
		displayName = "M52D Body Armor (R. Dusk)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S7_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Dusk_CO.paa"
		};
	};

	class BDA_Armor_Vel: BDA_Armor_RF {
		author = "Zarush";
		displayName = "M52D Body Armor (M. Vel)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Vel_CO.paa"
		};
	};

	class BDA_Armor_Hunner: BDA_Armor_RF {
		author = "Zarush";
		displayName = "M52D Body Armor (T. Hunner)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Hunner_CO.paa"
		};
	};
	
	class BDA_Armor_Leviathan: BDA_Armor_RF {
		scope = 1;
		author = "Grif";
		displayName = "M52D Body Armor (S. Leviathan)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Leviathan_CO.paa"
		};
	};

	class BDA_Armor_Zephyr: BDA_Armor_MD {
		author = "Grif";
		displayName = "M52D Body Armor (S. Zephyr)";
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Vest_CO.paa",
			"BDA_Armor\BDA_Vests\data\BDA_Armor_S2_Medic_CO.paa",
			"BDA_Armor\BDA_Legs\data\BDA_Legs_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"BDA_Armor_Custom\BDA_Vests\data\BDA_M52D_Armor_Zephyr_CO.paa"
		};
	};
	//end
};

class cfgMods {
	author="Rib";
	timepacked="051020242250";
};