// Stage 3 -> Stage 2: drop from Afterburners back to Boosters (600 km/h)
_veh = _this;
_veh setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_veh setVariable ["OPTRE_Afterburners_EngagedStatus", true, true];
_veh setVariable ["BDA_ThrustMode", 600, true];
hint "DISENGAGING AFTERBURNERS\nCONTINUING BOOST";
sleep 0.5;
if (speed _veh > 700) then {
	_vel = velocity _veh;
	_dir = direction _veh;
	_speed = -10;
	_veh setVelocity [
	(_vel select 0) + (sin _dir * _speed),
	(_vel select 1) + (cos _dir * _speed),
	(_vel select 2)
	];
};
while {((_veh getVariable ["BDA_ThrustMode", 0]) == 600) AND (_veh getVariable ["OPTRE_Afterburners_EngagedStatus", false]) AND (alive _veh)} do
{
	if (speed _veh <= 600) then {
		_vel = velocity _veh;
		_dir = direction _veh;
		_speed = 18;
		_veh setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
	sleep 0.5;
};
