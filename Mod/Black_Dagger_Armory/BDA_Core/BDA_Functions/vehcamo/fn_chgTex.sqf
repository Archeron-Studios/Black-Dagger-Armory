// Author = Rib
// Works using defined texture paths here to change textures on the fly through actions

systemChat "Working Textures";
_vehCamo = _this select 0;
_vehClass = _this select 1;

//this really doesn't work ;)
_tarVeh = objectParent player;

switch (_vehCamo) do {
	//pelcain
	case "BDA_Pelican_Green": {
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\pelican\BDA_G_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\BDA_G_wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_G_weaponry_co.paa"];
		};
		systemChat "Applying green texture";
	};
	case "BDA_Pelican_Winter": 
	{
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\pelican\BDA_Wi_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\BDA_Wi_wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_Wi_weaponry_co.paa"];
		};
		systemChat "Applying winter texture";
	};
	case "BDA_Pelican_Black": {
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\pelican\BDA_B_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\pelican\BDA_B_wings_and_gear_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"];
		};
		systemChat "Applying blackout texture";
	};
		case "BDA_Pelican_W610": {
		if(_vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican_Single" or _vehClass isEqualTo "BDA_UNSC_D77_TC_Pelican") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\customs\Pelican\BDA_610_body_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\customs\Pelican\BDA_wings_and_gear_W_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\pelican\BDA_B_weaponry_co.paa"];
		};
		systemChat "Applying Whiskey-610 texture";
	};
	//hornet 
	case "BDA_Hornet_Standard": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Marine.paa"];
		};
		systemChat "Applying Marine texture";
	};
	case "BDA_Hornet_Blackout": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Black.paa"];
		};
		systemChat "Applying Black texture";
	};
	case "BDA_Hornet_Dark": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Dark.paa"];
		};
		systemChat "Applying Dark texture";
	};
	case "BDA_Hornet_Desert": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Desert.paa"];
		};
		systemChat "Applying Desert texture";
	};
	case "BDA_Hornet_Grey": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Grey.paa"];
		};
		systemChat "Applying Grey texture";
	};
	case "BDA_Hornet_Jungle": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Jungle.paa"];
		};
		systemChat "Applying Jungle texture";
	};
	case "BDA_Hornet_Olive": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Olive.paa"];
		};
		systemChat "Applying Olive texture";
	};
	case "BDA_Hornet_Woodland": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Woodland.paa"];
		};
		systemChat "Applying Woodland texture";
	};
	case "BDA_Hornet_Winter": {
		if(_vehClass isEqualTo "BDA_UNSC_Hornet_Lite" or _vehClass isEqualTo "BDA_UNSC_Hornet_VTOL" or _vehClass isEqualTo "BDA_UNSC_Hornet") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\hornet\BDA_Hornet_Winter.paa"];
		};
		systemChat "Applying Winter texture";
	};
	//Falcon
	case "BDA_Falcon_Classic": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Olive texture";
	};
	case "BDA_Falcon_Marine": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Marine texture";
	};
	case "BDA_Falcon_Jungle": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Jungle texture";
	};
	case "BDA_Falcon_BJ7": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying BJ7 texture";
	};
	case "BDA_Falcon_Woodland": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Woodland texture";
	};
	case "BDA_Falcon_Black": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Black texture";
	};
	case "BDA_Falcon_Urban": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Urban texture";
	};
	case "BDA_Falcon_Desert": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Desert texture";
	};
	case "BDA_Falcon_Arab": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Arabian texture";
	};
	case "BDA_Falcon_Dune": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Dune texture";
	};
	case "BDA_Falcon_Frost": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Frost texture";
	};
	case "BDA_Falcon_Tundra": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\decals\falcon_decal_var1_ca.paa"];
		};
		systemChat "Applying Tundra texture";
	};
	case "BDA_Falcon_Romeo610": {
		if(_vehClass isEqualTo "BDA_UNSC_UH145A_Falcon2" or _vehClass isEqualTo "BDA_UNSC_UH145S_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\customs\BDA_Falc_610_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\customs\BDA_Falc_610_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\BDA_Vehicles\data\falcon\customs\falcon_610_var1_ca.paa"];
		};
		systemChat "Applying Romeo610 texture";
	};

	//Falcon (Medical)
	case "BDA_FalconM_Classic": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_cla_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Classic texture";
	};
	case "BDA_FalconM_Marine": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_mar_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Marine texture";
	};
	case "BDA_FalconM_Jungle": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_jun_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Jungle texture";
	};
	case "BDA_FalconM_BJ7": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_bj7_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical BJ7 texture";
	};
	case "BDA_FalconM_Woodland": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Temperate\BDA_Falc_wdl_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Woodland texture";
	};
	case "BDA_FalconM_Black": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Black texture";
	};
	case "BDA_FalconM_Urban": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_urb_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Urban texture";
	};
	case "BDA_FalconM_Arab": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_ara_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Arabian texture";
	};
	case "BDA_FalconM_Desert": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_des_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Desert texture";
	};
	case "BDA_FalconM_Dune": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Arid\BDA_Falc_dun_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Dune texture";
	};
	case "BDA_FalconM_Frost": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_fro_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Frost texture";
	};
	case "BDA_FalconM_Tundra": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Winter\BDA_Falc_tun_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Tundra texture";
	};
	case "BDA_FalconM_Romeo610": {
		if(_vehClass isEqualTo "BDA_UNSC_MH145_Falcon") then 
		{
			_tarVeh setObjectTextureGlobal [0, "\BDA_Vehicles\data\falcon\customs\BDA_Falc_610_m_co.paa"];
			_tarVeh setObjectTextureGlobal [1, "\BDA_Vehicles\data\falcon\customs\BDA_Falc_610_a_co.paa"];
			_tarVeh setObjectTextureGlobal [2, "\BDA_Vehicles\data\falcon\Night\BDA_Falc_blk_i_co.paa"];
			_tarVeh setObjectTextureGlobal [3, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [4, "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa"];
			_tarVeh setObjectTextureGlobal [5, "\optre_vehicles_air\falcon\data\medical\camomedical_co.paa"];
			_tarVeh setObjectTextureGlobal [6, "\BDA_Vehicles\data\falcon\decals\falcon_decal_medical_ca.paa"];
		};
		systemChat "Applying Medical Romeo610 texture";
	};

	default { };
};