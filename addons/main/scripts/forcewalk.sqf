if ((backpack player == _x select 0) then {
	player forceWalk true;
	hint "Antenna is extend. You can't run."
	}
	else {
	player forceWalk false;
	exitWith (_this select 1) call CBA_fnc_removePerFrameHandler;
	};
}, 10] call CBA_fnc_addPerframeHandler;