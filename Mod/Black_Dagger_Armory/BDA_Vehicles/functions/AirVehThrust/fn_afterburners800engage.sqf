// Stage 3 of 3: Afterburners - sustains up to 800 km/h
_veh = _this;
_veh setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_veh setVariable ["OPTRE_Afterburners_EngagedStatus", true, true];
_veh setVariable ["BDA_ThrustMode", 800, true];
hint "ENGAGING AFTERBURNERS";
sleep 0.5;
if (speed _veh <= 650) then {
	_vel = velocity _veh;
	_dir = direction _veh;
	_speed = 40;
	_veh setVelocity [
	(_vel select 0) + (sin _dir * _speed),
	(_vel select 1) + (cos _dir * _speed),
	(_vel select 2)
	];
};
while {((_veh getVariable ["BDA_ThrustMode", 0]) == 800) AND (_veh getVariable ["OPTRE_Afterburners_EngagedStatus", false]) AND (alive _veh)} do
{
	if (speed _veh <= 800) then {
		_vel = velocity _veh;
		_dir = direction _veh;
		_speed = 20;
		_veh setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
	sleep 0.5;
};
