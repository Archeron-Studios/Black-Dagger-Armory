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
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>NO SUPPLY PODS ATTACHED TO PELICAN!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
	//hint "NO SUPPLY PODS ATTACHED TO PELICAN.";
};

_podsToRemove = (Splits_PelicanLoadSupplyPods_Menu_PelicanObject getVariable ["Splits_Pelican_AttachedToVehiclesEffect",[]]);

{
	deleteVehicle _x;
} forEach _podsToRemove;


Splits_PelicanLoadSupplyPods_Menu_PelicanObject setVariable ["Splits_Pelican_AttachedToVehiclesEffect",[], true];

{
	((findDisplay 10293) displayCtrl _x) lbSetCurSel 0;
} forEach [10,11,12,13,14,15];
