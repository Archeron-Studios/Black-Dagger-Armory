/*
 * Stores the latest resolved crosshair target for manual ACE marking.
 */

params [["_obj", objNull, [objNull]]];

player setVariable ["BDA_spottedTargetCache", [_obj, time]];
