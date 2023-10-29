private ["_action_ILBEAP", "_action_assemble_antenna", "_action_disassemble_antenna"];

sleep 5;

[] execVM "y\tfw_radios_acre\addons\ilbe\scripts\forcewalk.sqf";

_action_assemble_antenna = [
	"tfw_ilbe_assemble_antenna",
	"Extend whip antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{
		nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_antenna.sqf";
	},
	{
		backpack player == "tfw_ilbe_wd" || 
		backpack player == "tfw_ilbe_d" || 
		backpack player == "tfw_ilbe_coy" || 
		backpack player == "tfw_ilbe_gr"
	}
] call ace_interact_menu_fnc_createAction;

[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_antenna] call ace_interact_menu_fnc_addActionToClass;

_action_disassemble_antenna = [
	"tfw_ilbe_disassemble_antenna",
	"Disassemble whip antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{
		nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\disassemble_antenna.sqf";
	},
	{
		backpack player == "tfw_ilbe_a_wd" || 
		backpack player == "tfw_ilbe_a_d" || 
		backpack player == "tfw_ilbe_a_coy" || 
		backpack player == "tfw_ilbe_a_gr"
	}
] call ace_interact_menu_fnc_createAction;

[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_disassemble_antenna] call ace_interact_menu_fnc_addActionToClass;

_action_assemble_dd = [
	"tfw_ilbe_assemble_dd_antenna",
	"Assemble DD antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{
		nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_dd_ant.sqf";
	},
	{
		(
			backpack player == "tfw_ilbe_wd" ||
			backpack player == "tfw_ilbe_d" ||
			backpack player == "tfw_ilbe_coy" ||
			backpack player == "tfw_ilbe_gr" ||
			backpack player == "tfw_ilbe_a_wd" ||
			backpack player == "tfw_ilbe_a_d" ||
			backpack player == "tfw_ilbe_a_coy" ||
			backpack player == "tfw_ilbe_a_gr" ||
			backpack player == "tfw_ilbe_blade_wd" ||
			backpack player == "tfw_ilbe_blade_d" ||
			backpack player == "tfw_ilbe_blade_coy" ||
			backpack player == "tfw_ilbe_blade_gr"
		) && "tfw_dd" in (items player + assignedItems player);
	}
] call ace_interact_menu_fnc_createAction;

[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_dd] call ace_interact_menu_fnc_addActionToClass;

_action_assemble_blade = [
	"tfw_ilbe_assemble_blade_antenna",
	"Assemble Blade antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{
		nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_blade_ant.sqf";
	},
	{
		(
			backpack player == "tfw_ilbe_wd" ||
			backpack player == "tfw_ilbe_d" ||
			backpack player == "tfw_ilbe_coy" ||
			backpack player == "tfw_ilbe_gr" ||
			backpack player == "tfw_ilbe_a_wd" ||
			backpack player == "tfw_ilbe_a_d" ||
			backpack player == "tfw_ilbe_a_coy" ||
			backpack player == "tfw_ilbe_a_gr" ||
			backpack player == "tfw_ilbe_dd_wd" ||
			backpack player == "tfw_ilbe_dd_d" ||
			backpack player == "tfw_ilbe_dd_coy" ||
			backpack player == "tfw_ilbe_dd_gr"
		) && "tfw_blade" in (items player + assignedItems player);
	}
] call ace_interact_menu_fnc_createAction;

[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_blade] call ace_interact_menu_fnc_addActionToClass;

_action_assemble_whip = [
	"tfw_ilbe_assemble_whip_antenna",
	"Assemble Whip antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{
		nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_whip_ant.sqf";
	},
	{
		(
			backpack player == "tfw_ilbe_blade_wd" ||
			backpack player == "tfw_ilbe_blade_d" ||
			backpack player == "tfw_ilbe_blade_coy" ||
			backpack player == "tfw_ilbe_blade_gr" ||
			backpack player == "tfw_ilbe_dd_wd" ||
			backpack player == "tfw_ilbe_dd_d" ||
			backpack player == "tfw_ilbe_dd_coy" ||
			backpack player == "tfw_ilbe_dd_gr"
		) && "tfw_whip" in (items player + assignedItems player);
	}
] call ace_interact_menu_fnc_createAction;

[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_whip] call ace_interact_menu_fnc_addActionToClass;
