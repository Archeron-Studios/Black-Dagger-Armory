/*
 * Author: Rib / BDA
 * Deep-copy stash of harness backpack slot for post-landing restore.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 */

params ["_unit"];

private _class = backpack _unit;
if (_class isNotEqualTo "BDA_Naval_Pilot_Harness") exitWith {};

// getUnitLoadout indices: 5 = backpack, 6 = headgear
private _bp = (getUnitLoadout _unit) param [5, []];

switch (true) do {
	case (_bp isEqualType ""): { _bp = [_bp, [], [], []]; };
	case (!(_bp isEqualType [])): { _bp = [_class, [], [], []]; };
	case (_bp isEqualTo []): { _bp = [_class, [], [], []]; };
};

private _items = +(_bp param [1, []]);
private _mags = +(_bp param [2, []]);
private _bin = +(_bp param [3, []]);

if (_items isEqualTo [] && {_mags isEqualTo []} && {_bin isEqualTo []}) then {
	private _container = backpackContainer _unit;

	if (!isNull _container) then {
		{
			_x params ["_type", "_count"];

			if (isClass (configFile >> "CfgMagazines" >> _type)) then {
				_mags pushBack [_type, _count];
			} else {
				_items pushBack [_type, _count];
			};
		} forEach (everyContainer _container);
	};
};

_unit setVariable ["BDA_harness_backpack", [
	_class,
	_items,
	_mags,
	_bin
], true];

_unit setVariable ["BDA_harness_headgear", headgear _unit, true];
