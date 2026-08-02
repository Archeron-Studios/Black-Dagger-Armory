// basic script to initilize the script, this also make it so peeps dont have to fuck around with add actions.
private _pri = -900;

this addAction ["Open Loadout Menu", "_this call BDA_fnc_menuInit", nil, _pri, false, true, "", ""];