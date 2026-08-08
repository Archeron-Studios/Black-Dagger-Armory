/*
 * Author: Rib / BDA
 * ASL spawn position at the crew seat (slight forward/up clearance from hull).
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * Position ASL <ARRAY>
 */

params ["_vehicle", "_unit"];

private _modelBase = [0, 4, 2];

private _fnc_firstSelection = {
	params ["_veh", "_names"];
	private _found = [0, 0, 0];
	{
		private _pos = _veh selectionPosition _x;
		if !(_pos isEqualTo [0, 0, 0]) exitWith {
			_found = _pos;
		};
	} forEach _names;
	_found
};

private _role = assignedVehicleRole _unit;
if (_role isNotEqualTo []) then {
	private _roleName = toLower (_role select 0);

	switch (true) do {
		case (_roleName isEqualTo "driver"): {
			private _driverPos = [_vehicle, ["pos driver", "Pos Driver", "Pos_Driver", "pos_driver"]] call _fnc_firstSelection;
			if !(_driverPos isEqualTo [0, 0, 0]) then {
				_modelBase = _driverPos;
			};
		};
		case (_roleName in ["gunner", "commander", "turret"]): {
			private _gunnerPos = [_vehicle, ["Pos Gunner", "Pos_Gunner", "pos gunner", "pos_gunner"]] call _fnc_firstSelection;
			if !(_gunnerPos isEqualTo [0, 0, 0]) then {
				_modelBase = _gunnerPos;
			};
		};
		case (_roleName isEqualTo "cargo"): {
			_modelBase = [0, -2, 1];
		};
	};
};

// Small clearance so the seat does not clip the fuselage before impulse.
private _modelOffset = _modelBase vectorAdd [0, 1, 1];

(getPosASL _vehicle) vectorAdd (_vehicle vectorModelToWorld _modelOffset)
