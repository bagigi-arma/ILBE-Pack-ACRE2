class CBA_Extended_EventHandlers;

class CfgVehicles {

	class Bag_Base;
	class tfw_ilbe_wd: Bag_Base
	{
		author="Raspu";
		scope=2;
		displayName="ILBE AP MARPAT-WD RT-1523G (ASIP)";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="y\tfw_radios_acre\addons\ilbe\data\model\tfw_ilbe.p3d";
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=240;
		mass=40;//mass lowered from original 80 now in line with vanilla (balanced with load) weight of the radio added later
		isbackpack=1;
	};
	class tfw_ilbe_d: tfw_ilbe_wd
	{
		author="Raspu";
		displayName="ILBE AP MARPAT-D RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_d.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_d_co.paa"
		};
	};
	class tfw_ilbe_coy: tfw_ilbe_wd
	{
		author="Raspu";
		displayName="ILBE AP Coyote RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_coy_co.paa"
		};
	};
	class tfw_ilbe_gr: tfw_ilbe_wd
	{
		author="Raspu";
		displayName="ILBE AP Green RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_gr.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_gr_co.paa"
		};
	};
	class tfw_ilbe_ocp: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP OCP RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_ocp_co.paa"
		};
	};
	class tfw_ilbe_alpine: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP Alpine RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_alpine_co.paa"
		};
	};
	class tfw_ilbe_black: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP Black RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Black_co.paa"
		};
	};
	class tfw_ilbe_MCT: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam Tropic RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_MCT_co.paa"
		};
	};
	class tfw_ilbe_wd2: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP WD RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_WD_co.paa"
		};
	};
	class tfw_ilbe_arid: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP Arid RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Arid_co.paa"
		};
	};
	class tfw_ilbe_Multicam: tfw_ilbe_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Multicam_co.paa"
		};
	};
	// ANT Radio ------------------------------------------------------------------------------------------------------------------------------------------------
	class tfw_ilbe_a_wd: Bag_Base
	{
		author="Raspu";
		scope=2;
		displayName="ILBE AP MARPAT-WD ANT RT-1523G (ASIP)";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="y\tfw_radios_acre\addons\ilbe\data\model\antenna\tfw_ilbe_ant.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_co.paa"
		};
		maximumLoad=240;
		mass=40;
		isbackpack=1;
	};
	class tfw_ilbe_a_d: tfw_ilbe_a_wd
	{
		author="Raspu";
		displayName="ILBE AP MARPAT-D ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_d.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_d_co.paa"
		};
	};
	class tfw_ilbe_a_coy: tfw_ilbe_a_wd
	{
		author="Raspu";
		displayName="ILBE AP Coyote ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_coy_co.paa"
		};
	};
	class tfw_ilbe_a_gr: tfw_ilbe_a_wd
	{
		author="Raspu";
		displayName="ILBE AP Green ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_gr.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_gr_co.paa"
		};
	};
	class tfw_ilbe_a_ocp: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP OCP ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_ocp_co.paa"
		};
	};
	class tfw_ilbe_a_alpine: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP Alpine ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_alpine_co.paa"
		};
	};
	class tfw_ilbe_a_black: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP Black ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Black_co.paa"
		};
	};
	class tfw_ilbe_a_MCT: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam Tropic ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_MCT_co.paa"
		};
	};
	class tfw_ilbe_a_wd2: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP WD ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_WD_co.paa"
		};
	};
	class tfw_ilbe_a_arid: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP Arid ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Arid_co.paa"
		};
	};
	class tfw_ilbe_a_Multicam: tfw_ilbe_a_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam ANT RT-1523G (ASIP)";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Multicam_co.paa"
		};
	};
	// VHF Radio ------------------------------------------------------------------------------------------------------------------------------------------------
	class tfw_ilbe_dd_wd: Bag_Base
	{
		author="Raspu";
		scope=2;
		displayName="ILBE AP MARPAT-WD VHF/ UHF Antenna";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="y\tfw_radios_acre\addons\ilbe\data\model\dd\tfw_dd_ilbe.p3d";
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=240;
		mass=40;
		isbackpack=1;
	};
	class tfw_ilbe_dd_d: tfw_ilbe_dd_wd
	{
		author="Raspu";
		displayName="ILBE AP MARPAT-D VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_d.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_d_co.paa"
		};
	};
	class tfw_ilbe_dd_coy: tfw_ilbe_dd_wd
	{
		author="Raspu";
		displayName="ILBE AP Coyote VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_coy_co.paa"
		};
	};
	class tfw_ilbe_dd_gr: tfw_ilbe_dd_wd
	{
		author="Raspu";
		displayName="ILBE AP Green VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_gr.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_gr_co.paa"
		};
	};
	class tfw_ilbe_dd_ocp: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP OCP VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_ocp_co.paa"
		};
	};
	class tfw_ilbe_dd_alpine: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP Alpine VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_alpine_co.paa"
		};
	};
	class tfw_ilbe_dd_black: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP Black VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Black_co.paa"
		};
	};
	class tfw_ilbe_dd_MCT: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam Tropic VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_MCT_co.paa"
		};
	};
	class tfw_ilbe_dd_wd2: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP WD VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_WD_co.paa"
		};
	};
	class tfw_ilbe_dd_arid: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP Arid VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Arid_co.paa"
		};
	};
	class tfw_ilbe_dd_Multicam: tfw_ilbe_dd_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam VHF/ UHF Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Multicam_co.paa"
		};
	};
	// Blade Radio ------------------------------------------------------------------------------------------------------------------------------------------------
	class tfw_ilbe_blade_wd: Bag_Base
	{
		author="Raspu";
		scope=2;
		displayName="ILBE AP MARPAT-WD VHF Blade Antenna";
		descriptionShort="RT-1523G (ASIP) long range radio 20km";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview="";
		model="y\tfw_radios_acre\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		maximumLoad=240;
		mass=40;
		isbackpack=1;
	};
	class tfw_ilbe_blade_d: tfw_ilbe_blade_wd
	{
		displayName="ILBE AP MARPAT-D VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_d.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_d_co.paa"
		};
	};
	class tfw_ilbe_blade_coy: tfw_ilbe_blade_wd
	{
		displayName="ILBE AP Coyote VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_coy_co.paa"
		};
	};
	class tfw_ilbe_blade_gr: tfw_ilbe_blade_wd
	{
		displayName="ILBE AP Green VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_gr.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_gr_co.paa"
		};
	};
	class tfw_ilbe_blade_ocp: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP OCP VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_ocp_co.paa"
		};
	};
	class tfw_ilbe_blade_alpine: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP Alpine VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_alpine_co.paa"
		};
	};
	class tfw_ilbe_blade_black: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP Black VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Black_co.paa"
		};
	};
	class tfw_ilbe_blade_MCT: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam Tropic VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_MCT_co.paa"
		};
	};
	class tfw_ilbe_blade_wd2: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP WD VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_WD_co.paa"
		};
	};
	class tfw_ilbe_blade_arid: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP Arid VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Arid_co.paa"
		};
	};
	class tfw_ilbe_blade_Multicam: tfw_ilbe_blade_wd
	{
		author="Bacon";
		displayName="ILBE AP Multicam VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_Multicam_co.paa"
		};
	};
	//Whip
	class tfw_ilbe_blade_wd: Bag_Base {
		author = "Raspu";
		scope=2;
		displayName="ILBE AP MARPAT-WD VHF Blade Antenna";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon.paa";
		editorPreview = "";
		model="y\tfw_radios_acre\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
		hiddenSelectionsTextures[] = {"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_co.paa"};
		hiddenSelections[] = {"camo"};
		maximumLoad=240;
		mass=80;
		isbackpack=1;
	};
	class tfw_ilbe_blade_d: tfw_ilbe_blade_wd {
		displayName="ILBE AP MARPAT-D VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_d.paa";
		editorPreview = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_d_co.paa"};
	};
	class tfw_ilbe_blade_coy: tfw_ilbe_blade_wd {
		displayName="ILBE AP Coyote VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_coy.paa";
		editorPreview = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_coy_co.paa"};
	};
	class tfw_ilbe_blade_gr: tfw_ilbe_blade_wd {
		displayName="ILBE AP Green VHF Blade Antenna";
		picture="y\tfw_radios_acre\addons\ilbe\data\icons\ilbe_icon_gr.paa";
		editorPreview = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"y\tfw_radios_acre\addons\ilbe\data\model\ilbe_gr_co.paa"};
	};
    class Item_Base_F;
    class tfw_bladeItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "VHF Blade Antenna";
		model = "y\tfw_radios_acre\addons\ilbe\data\model\blade\tfw_blade_item.p3d";
		editorPreview = "";
        vehicleClass = "Items";
        class TransportItems {
			class tfw_blade {
				name= tfw_blade;
				count=1;
			};
		};
    };
    class tfw_ddItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "VHF/UHF Antenna";
		model = "y\tfw_radios_acre\addons\ilbe\data\model\dd\tfw_dd_item.p3d";
		editorPreview = "";
        vehicleClass = "Items";
        class TransportItems {
			class tfw_dd {
				name= tfw_dd;
				count=1;
			};
		};
    };
    class tfw_whipItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "VHF Whip Antenna";
		model = "y\tfw_radios_acre\addons\ilbe\data\model\whip\tfw_whip_item.p3d";
		editorPreview = "";
        vehicleClass = "Items";
        class TransportItems {
			class tfw_whip {
				name= tfw_whip;
				count=1;
			};
		};
    };
};