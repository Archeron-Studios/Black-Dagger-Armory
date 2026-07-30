class MarkLZ {
	displayName = "Mark LZ";
	statement = "[] call BDA_fnc_isLZ";
};
class MarkFM {
	displayName = "Mark Firemission";
	statement = "[] call BDA_fnc_isFM";
};
class MarkFRND {
	displayName = "Mark Friendly";
	statement = "[] call BDA_fnc_isFrd";
};
class MarkENMY {
	displayName = "Mark Enemy";
	statement = "[] call BDA_fnc_isEnm";
};
class MarkCM {
	displayName = "Mark CAS Mission";
	statement = "[] call BDA_fnc_isCM";
};
class MarkSpottedThreat {
	displayName = "Mark Spotted Threat";
	condition = "[] call BDA_fnc_isSmartfinder";
	statement = "[] call BDA_fnc_advMarkAuto";
};
class MarkThreat {
	displayName = "Mark Threat Intel";
	class MarkCar {
		displayName = "Car";
		statement = "['Car'] call BDA_fnc_advMark";
	};
	class MarkTruck {
		displayName = "Truck";
		statement = "['Truck'] call BDA_fnc_advMark";
	};
	class MarkTank {
		displayName = "Tank";
		statement = "['Tank'] call BDA_fnc_advMark";
	};
	class MarkAPC {
		displayName = "APC";
		statement = "['APC'] call BDA_fnc_advMark";
	};
	class MarkBoat {
		displayName = "Boat";
		statement = "['Boat'] call BDA_fnc_advMark";
	};
	class MarkHelicopter {
		displayName = "Helicopter";
		statement = "['Helicopter'] call BDA_fnc_advMark";
	};
	class MarkJet {
		displayName = "Jet";
		statement = "['Jet'] call BDA_fnc_advMark";
	};
	class MarkSquad {
		displayName = "Infantry / Squad";
		statement = "['Squad'] call BDA_fnc_advMark";
	};
	class MarkUnknown {
		displayName = "Unknown";
		statement = "['Unknown'] call BDA_fnc_advMark";
	};
};
