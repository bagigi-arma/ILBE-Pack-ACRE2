private ["_backpacks", "_items", "_mags"];

_backpacks = nil;
_items = backpackItems player;
_mags = backpackMagazines player;
_insignia = [player] call BIS_fnc_getUnitInsignia;

_assemble_antenna = ["assemble_antenna"] call fn_tfw_ilbe_classnames;

{
	if (backpack player == _x select 0) then {
		_backpacks = _x select 1;
	};
} forEach _assemble_antenna;

removeBackpack player;
player addbackpack _backpacks;

{
	player addItemToBackpack _x;
} forEach _items;

{
	player addMagazine _x;
} forEach _mags;

[player, _insignia] call BIS_fnc_setUnitInsignia;

player playAction "medicStop";
