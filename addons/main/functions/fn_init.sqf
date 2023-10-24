if (!local player) exitWith {};

fn_tfw_ilbe_classnames = compile preprocessFile "y\tfw_radios_acre\addons\ilbe\functions\fn_classnames.sqf";

if (!isClass(configFile/'CfgPatches'/'ace_interact_menu')) exitWith {};

fn_tfw_ilbe_alle_items = compile preprocessFile "y\tfw_radios_acre\addons\ilbe\functions\fn_alle_items.sqf";

nul = [] execVM "y\tfw_radios_acre\addons\ilbe\scripts\init.sqf";
