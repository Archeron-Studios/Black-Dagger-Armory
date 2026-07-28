// Stage 2 of 3: Boosters - sustains up to 600 km/h
_veh = _this;
_veh setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_veh setVariable ["OPTRE_Afterburners_EngagedStatus", true, true];
_veh setVariable ["BDA_ThrustMode", 600, true];
hint "ENGAGING BOOSTERS";
sleep 0.5;
if (speed _veh <= 450) then {
	_vel = velocity _veh;
	_dir = direction _veh;
	_speed = 30;
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
