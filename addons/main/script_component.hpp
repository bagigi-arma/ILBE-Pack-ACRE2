#define COMPONENT ilbe
#include "script_mod.hpp"

//#define DEBUG_MODE_FULL
//#define DISABLE_COMPILE_CACHE
//#define CBA_DEBUG_SYNCHRONOUS
//#define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ilbe
	#define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ilbe
	#define DEBUG_SETTINGS DEBUG_SETTINGS_TRIPOD
#endif

#include "\z\ace\addons\main\script_macros.hpp"
//#include "\ace_main\script_macros.hpp"