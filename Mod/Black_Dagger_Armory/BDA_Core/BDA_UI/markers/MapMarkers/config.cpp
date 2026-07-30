class CfgPatches {
    class BDA_MapMarkers {
		author = "Rib";
		requiredVersion=0.1;
		requiredAddons[]={"BDA_Core", "A3_Data_F"};
		units[]={};
		weapons[]={};
    };
};

class CfgMarkerClasses {
	class BDA_MC_Markers {
		displayName="BDA Markers";
	};
};

class CfgMarkers {
	class b_air;
	class b_antiair;
	class b_armor;
	class b_art;
	class b_hq;
	class b_inf;
	class b_installation;
	class b_maint;
	class b_mech_inf;
	class b_med;
	class b_mortar;
	class b_motor_inf;
	class b_naval;
	class b_Ordnance;
	class b_plane;
	class b_recon;
	class b_service;
	class b_support;
	class b_uav;
	class b_unknown;
	class loc_BusStop;

	class BDA_Dot_Marker: b_armor
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\dot.paa";
		markerClass="BDA_MC_Markers";
		name="Dot";
		size = 35;
		scope = 2;
		scopeCurator = 2;
		shadow = 0;
	};

	//--------------------------------------- Tact Markers --------------------------------------- //


	class BDA_Ambush_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\ambush.paa";
		name="Ambush";
	};

	class BDA_Armor_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\armor.paa";
		name="Armor";
	};

	class BDA_Artillery_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\arty.paa";
		name="Artillery";
	};

	class BDA_AntiTank_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\at.paa";
		name="Anti-Tank";
	};

	class BDA_AA_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\aa.paa";
		name="Anti-Air";
	};

	class BDA_heli_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\heli.paa";
		name="Helicopter";
	};
	
	class BDA_inf_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\inf.paa";
		name="Infantry";
	};

	class BDA_hinf_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\hinf.paa";
		name="Heavy Infantry";
	};

	class BDA_mech_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\mech.paa";
		name="Mechanized";
	};
	class BDA_motor_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\motor.paa";
		name="Motorized";
	};
	class BDA_mort_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\mortar.paa";
		name="Motar";
	};
	class BDA_plane_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\plane.paa";
		name="Plane";
	};

	class BDA_Boat_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\boat.paa";
		name="Boat";
	};

	class BDA_Destroy_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\destroy.paa";
		name="Destroy";
	};

	class BDA_DZ_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\dz.paa";
		name="Drop Zone";
	};

	class BDA_END_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\end.paa";
		name="End";
	};

	class BDA_EXCL_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\exclamation.paa";
		name="Exclamation";
	};
	
	class BDA_Flag_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\flag.paa";
		name="Flag";
	};

	class BDA_CCP_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\ccp.paa";
		name="CCP";
	};

	class BDA_CMD_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\cmd.paa";
		name="Command";
	};

	class BDA_hq_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\hq.paa";
		name="Headquaters";
	};

	class BDA_hq2_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\hq2.paa";
		name="Headquaters 2";
	};

	class BDA_lz_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\lz.paa";
		name="Landing Zone";
	};
	class BDA_maint_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\maint.paa";
		name="Maintainance";
	};
	class BDA_mrk_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\marker.paa";
		name="Marker";
	};
	
	class BDA_med_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\med.paa";
		name="Medical";
	};
	class BDA_obj_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\obj.paa";
		name="Objective";
	};
	class BDA_ord_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\ordnance.paa";
		name="Ordnance";
	};
	class BDA_plain_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\plain.paa";
		name="Plain";
	};
	
	class BDA_poi_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\poi.paa";
		name="POI";
	};
	class BDA_qrf_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\qrf.paa";
		name="QRF";
	};
	class BDA_ques_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\question.paa";
		name="Question";
	};
	class BDA_recon_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\recon.paa";
		name="Recon";
	};
	class BDA_recon2_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\recon2.paa";
		name="Recon 2";
	};
	class BDA_rp_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\rp.paa";
		name="RP";
	};
	class BDA_service_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\service.paa";
		name="Service";
	};
	class BDA_start_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\start.paa";
		name="Start";
	};
	class BDA_support_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\support.paa";
		name="Support";
	};

	//--------------------------------------- Detachment --------------------------------------- //

	class BDA_ENG_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\eng.paa";
		name="Engineer";
	};

	class BDA_AB_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\airborne.paa";
		name="Airborne";
	};

	//--------------------------------------- Squads --------------------------------------- //

	class BDA_1_1_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\1-1.paa";
		name="1-1";
	};

	class BDA_1_2_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\1-2.paa";
		name="1-2";
	};

	class BDA_1_3_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\1-3.paa";
		name="1-3";
	};

	class BDA_2_1_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\2-1.paa";
		name="2-1";
	};

	class BDA_2_2_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\2-2.paa";
		name="2-2";
	};

	class BDA_2_3_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\2-3.paa";
		name="2-3";
	};

	class BDA_Bullfrog_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\3-1.paa";
		name="Bullfrog";
	};

	class BDA_4_1_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\4-1.paa";
		name="4-1";
	};

	class BDA_4_2_Marker: BDA_Dot_Marker
	{
		icon="\BDA_Core\BDA_UI\markers\MapMarkers\4-2.paa";
		name="4-2";
	};

};
