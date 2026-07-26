_spelican = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {

	case (_veh isKindOf "OPTRE_M808B_base" or _veh isKindOf "OPTRE_M808B2" or _veh isKindOf "OPTRE_M808BM_Base" or _veh isKindOf "OPTRE_M808B_Arty_Base") : {
		_veh attachTo [_spelican,[0,-9.5, -1.3]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M808S" or _veh isKindOf "OPTRE_M808L") :
	{
		_veh attachTo [_spelican,[0,-9.5, -1.75]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12A1_LRV" or _veh isKindOf "OPTRE_M12_LRV" or _veh isKindOf "OPTRE_M12G1_LRV" or _veh isKindOf "OPTRE_M12R_AA" or _veh isKindOf "OPTRE_M813_TT" or _veh isKindOf "OPTRE_M12_FAV_APC" or _veh isKindOf "OPTRE_M12_FAV_MED" or _veh isKindOf "OPTRE_M194_RV") : {
		_veh attachTo [_spelican,[0,-6.5,-1.0]]; // left right // back forward // up down
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_Bulldog_LRV_MG" or _veh isKindOf "DMNS_Bulldog_LRV_AGL") : {
		_veh attachTo [_spelican,[0,-5.0,-0.75]]; // left right // back forward // up down
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_Bulldog_FAV") : {
		_veh attachTo [_spelican,[0,-5.0,-0.5]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV" or _veh isKindOf "OPTRE_M914_RV") : {
		_veh attachTo [_spelican,[0,-6.5,-0.25]];
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_M511_Springbok_APC") : {
		_veh attachTo [_spelican,[0,-8.5,-1.25]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_M511_Springbok_MGS" or _veh isKindOf "DMNS_M511_Springbok_AA" or _veh isKindOf "DMNS_M511_Springbok_IFV") : {
		_veh attachTo [_spelican,[0,-8.5,-1.55]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M494") : {
		_veh attachTo [_spelican,[0,-8,-1.55]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_ferret_01") : {
		_veh attachTo [_spelican,[0,-8,-1.0]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M412_IFV_UNSC" or _veh isKindOf "OPTRE_M413_MGS_UNSC") : {
		_veh attachTo [_spelican,[0,-8,-1.0]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "B_AFV_Wheeled_01_cannon_f" or _veh isKindOf "B_AFV_Wheeled_01_up_cannon_f" or _veh isKindOf "B_T_AFV_Wheeled_01_cannon_f" or _veh isKindOf "B_T_AFV_Wheeled_01_up_cannon_f") : {
		_veh attachTo [_spelican,[0,-8,-1.25]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "optre_catfish_unarmed_f" or _veh isKindOf "optre_catfish_mg_f" or _veh isKindOf "optre_catfish_aa_f") : {
		_veh attachTo [_spelican,[-0.27,-6.5,-0.75]];
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_M808B_F") : {
		_veh attachTo [_spelican,[0,-9.5, -1.80]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "DMNS_M808B") : {
		_veh attachTo [_spelican,[0,-9.5, -1.80]];
		_veh setDir 180;
		_loaded = true;
	};

};

if (_loaded) then {
	_spelican setVariable ["Splits_Pelican_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag-lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the pelican operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
