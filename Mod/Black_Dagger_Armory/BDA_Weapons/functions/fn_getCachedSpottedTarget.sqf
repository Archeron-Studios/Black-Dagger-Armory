/*
 * Returns a recently cached spotted target, or objNull if stale / invalid.
 */

private _cache = player getVariable ["BDA_spottedTargetCache", []];

if (_cache isEqualTo [] || {count _cache < 2}) exitWith { objNull };

private _obj = _cache select 0;
private _cachedAt = _cache select 1;

if (time - _cachedAt > 5) exitWith { objNull };
if (isNull _obj) exitWith { objNull };
if (player distance _obj > 2500) exitWith { objNull };

_obj
