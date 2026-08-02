// Stage 2 -> Stage 1: drop from Boosters back to Forward Thrusters (400 km/h)
_veh = _this;
_veh setVariable ["OPTRE_Thruster_EngagedStatus", true, true];
_veh setVariable ["OPTRE_Afterburners_EngagedStatus", false, true];
_veh setVariable ["BDA_ThrustMode", 400, true];
hint "DISENGAGING BOOSTERS\nCONTINUING FORWARD THRUST";
sleep 0.5;
if (speed _veh > 500) then {
	_vel = velocity _veh;
	_dir = direction _veh;
	_speed = -10;
	_veh setVelocity [
	(_vel select 0) + (sin _dir * _speed),
	(_vel select 1) + (cos _dir * _speed),
	(_vel select 2)
	];
};
while {((_veh getVariable ["BDA_ThrustMode", 0]) == 400) AND (_veh getVariable ["OPTRE_Thruster_EngagedStatus", false]) AND (alive _veh)} do
{
	if (speed _veh <= 400) then {
		_vel = velocity _veh;
		_dir = direction _veh;
		_speed = 16;
		_veh setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
	sleep 0.5;
};
