private ["_backpacks", "_items", "_mags"];

_backpacks = nil;
_mags = backpackMagazines player;
_insignia = [player] call BIS_fnc_getUnitInsignia;

_assemble_blade_antenna = ["assemble_blade_antenna"] call fn_tfw_ilbe_classnames;

{
	if (backpack player == _x select 0) then {
		_backpacks = _x select 3;
	};
} forEach _assemble_blade_antenna;

{
	if (backpack player == _x select 0) then {
		player addItemToBackpack "tfw_whip";
	};
} forEach _assemble_blade_antenna;

{
	if (backpack player == _x select 1) then {
		_backpacks = _x select 3;
	};
} forEach _assemble_blade_antenna;

{
if (backpack player == _x select 1) then {
	player addItemToBackpack "tfw_whip";
};
} forEach _assemble_blade_antenna;

{
	if (backpack player == _x select 2) then {
		_backpacks = _x select 3;
	};
} forEach _assemble_blade_antenna;

{
	if (backpack player == _x select 2) then {
		player addItemToBackpack "tfw_dd";
	};
} forEach _assemble_blade_antenna;

_items = backpackItems player;

removeBackpack player;
player addbackpack _backpacks;

{
	player addItemToBackpack _x;
} forEach _items;
player removeItem "tfw_blade";
{
	player addMagazine _x;
} forEach _mags;

[player, _insignia] call BIS_fnc_setUnitInsignia;

player playAction "medicStop";
