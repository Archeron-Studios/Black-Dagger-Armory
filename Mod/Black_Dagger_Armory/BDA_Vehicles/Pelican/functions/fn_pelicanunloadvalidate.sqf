private _varName = format["%1_Pelican_AttachedToVehiclesEffect", "Splits"];
private _pelican = (_this select 0);
private _vehicles = _pelican getVariable [_varName, []];
private _chuteAttachMinimumAlt = 100;
private _chuteDeployMaximumAlt = 200;

//Abort empty.
if ((count _vehicles) isEqualTo 0) exitWith { Nil; };

//Abort and run the supply pods if no non-pod vehicles are present.
private _hasSupplyPod = false;
private _vicCount = {
	!(["SupplyPod", (typeOf _x)] call BIS_fnc_inString);
} count _vehicles;
if (_vicCount isEqualTo 0) exitWith {
	_pelican spawn Splits_fnc_PelicanLoad_UnloadAllSupplyPods;
};

//Abort nonclears.
if (((getPos _pelican) select 2) < 2) exitWith {
	titleText ["Cannot drop below 2 meters! PULL UP!", "PLAIN DOWN", -1, true, true];
	playSound "FD_CP_Not_Clear_F";
};

//_pelican allowDamage false;
player action ["LandGearUp", _pelican];
sleep 3.4;

//Drop the damn thing(s).
{
	//Detach the thing and begin a check for the 'chute system.
	detach _x;
	playSound "FD_Finish_F";
	private _Altitude = getPos _pelican select 2;
	if (_Altitude > _chuteAttachMinimumAlt ) then {
		titleText ["Dropping the payload with a parachute!", "PLAIN DOWN", -1, true, true];
		
		//Schedule the chute script on the dropped payload so that we can drop the next sucker.
		[_x, _chuteAttachMinimumAlt, _chuteDeployMaximumAlt] spawn {
			params [
				"_payload",
				"_chuteAttachMinimumAlt",
				"_chuteDeployMaximumAlt"
			];
			
			//Wait until we hit max deploy altitude.
			waitUntil {(getPos _payload) select 2 < _chuteDeployMaximumAlt;};
			
			//Make and attach the chute.
			_chute = createVehicle ["O_Parachute_02_F", _payload modelToWorld [0,0,0], [], 0, "CAN_COLLIDE"];
			_chute setVelocity velocity _payload;
			_chute setDir getDir _payload;
			_payload attachTo [_chute,[0,0,0]];
			
			//Wait until we hit cut altitude and detach.
			waitUntil {(getPos _payload) select 2 < 2};
			detach _payload;
		}
	} else {
		titleText ["Dropping the payload!", "PLAIN DOWN", -1, true, true];
	};
	sleep 0.34;
} forEach _vehicles;

//Void the array.
_pelican setVariable [_varName, [], true];

//Return nothing.
Nil;