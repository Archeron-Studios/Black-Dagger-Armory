/*
 * Keeps spotted-target cache fresh while using Smartfinder or vehicle optics.
 */

if (!hasInterface) exitWith {};

[] spawn {
	waitUntil { !isNull player };

	while { true } do {
		if ([] call BDA_fnc_canUseMarkerOptics) then {
			private _target = call BDA_fnc_resolveSpottedTarget;
			[_target] call BDA_fnc_setSpottedTargetCache;
		} else {
			[objNull] call BDA_fnc_setSpottedTargetCache;
		};

		sleep 0.2;
	};
};
