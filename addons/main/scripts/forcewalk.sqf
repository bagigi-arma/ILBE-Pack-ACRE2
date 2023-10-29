[
	{
		params ["_antennas"];
		{
			if (backpack player == (_x select 1)) exitWith {
				player forceWalk true;
				hint "Antenna is extended. You can't run.";
			};

			player forceWalk false;
			hint "";
		} forEach _antennas;
	},
	5,
	["assemble_antenna"] call fn_tfw_ilbe_classnames
] call CBA_fnc_addPerframeHandler;
