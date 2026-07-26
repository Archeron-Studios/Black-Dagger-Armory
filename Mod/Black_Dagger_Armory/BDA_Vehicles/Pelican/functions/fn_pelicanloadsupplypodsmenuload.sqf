_podArray = (Splits_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["Splits_Pelican_AttachedToVehiclesEffect",[]]);

if (
	(
		{
			["SupplyPod", (typeOf _x)] call BIS_fnc_inString
		} count _podArray < 1
	) AND (
		count _podArray > 0
	)
) exitWith {
	hint "YOU MUST UNLOAD THE ATTACHED VEHICLE BEFORE TRYING TO LOAD SUPPLY PODS.";
};

// Clear Current Pods Attached
{
	deleteVehicle _x;
} forEach (Splits_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["Splits_Pelican_AttachedToVehiclesEffect",[]]);
Splits_PelicanLoadSupplyPods_Menu_PelicanObject setVariable ["Splits_Pelican_AttachedToVehiclesEffect",[],true];

// Add New pods / Create Array Containing Pods
_podArray = [];

for "_i" from 10 to 15 do {

	_control = ((findDisplay 10293) displayCtrl _i);
	_index = if ((lbCurSel _control) == 1) then {(round (2 + (random 9)));} else {lbCurSel _control;};
	_podClassname = _control lbData _index;

	if (_podClassname != "none") then {

		_pod = _podClassname createVehicle [0,0,0];
		_pod disableCollisionWith Splits_PelicanLoadSupplyPods_Menu_PelicanObject;
		Splits_PelicanLoadSupplyPods_Menu_PelicanObject disableCollisionWith _pod;

		_pod attachTo [

			Splits_PelicanLoadSupplyPods_Menu_PelicanObject,
			(
				switch _i do {
					case 10: { [-0.9,-7.5,-1.15] };
					case 11: { [ 0.9,-7.5,-1.15] };
					case 12: { [-0.9,-6.5,-1.15] };
					case 13: { [ 0.9,-6.5,-1.15] };
					case 14: { [-0.9,-5.5,-1.15] };
					case 15: { [ 0.9,-5.5,-1.15] };
				}
			)
		];

		_podArray pushback _pod;

	};

};

// Add New Pods to Global Variable
Splits_PelicanLoadSupplyPods_Menu_PelicanObject setVariable ["Splits_Pelican_AttachedToVehiclesEffect",_podArray,true];

true
