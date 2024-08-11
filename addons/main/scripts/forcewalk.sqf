[
	{
		params ["_antennas"];
		{
			if (!tfw_ilbe_antennaExtended && {backpack player == (_x select 1)}) then {
				tfw_ilbe_antennaExtended = true;
				player forceWalk true;
				[["Antenna is extended. You can't run.", 1.2], true] call CBA_fnc_notify;
			} else {
				if (tfw_ilbe_antennaExtended) then {
					player forceWalk false;
					tfw_ilbe_antennaExtended = false;
				};
			};
		} forEach _antennas;
	},
	5,
	["assemble_antenna"] call fn_tfw_ilbe_classnames
] call CBA_fnc_addPerframeHandler;
