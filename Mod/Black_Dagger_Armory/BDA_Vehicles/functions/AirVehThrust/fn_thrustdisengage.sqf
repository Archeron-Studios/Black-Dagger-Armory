// All thrust off — stops forward thrusters and afterburners from any stage
_veh = _this;
_veh setVariable ["OPTRE_Thruster_EngagedStatus", false, true];
_veh setVariable ["OPTRE_Afterburners_EngagedStatus", false, true];
_veh setVariable ["BDA_ThrustMode", 0, true];
hint "DISENGAGING ALL THRUST";
sleep 0.5;
if (speed _veh > 350) then {
	_vel = velocity _veh;
	_dir = direction _veh;
	_speed = -10;
	_veh setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
	];
};
