/**
 * config.cpp
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

class CfgPatches
{
    class CliqueLoadingScreen_ExpansionLoadingScreen
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Scripts"
		};
	};
};
///////////////////////////////////////////////
class CfgMods
{
	class CliqueLoadingScreen
	{
	    dir = "CliqueLoadingScreen"; //! Name of the mod
		picture = "";
	    action = "";
	    hideName = 0;
	    hidePicture = 0;
		name = "CliqueLoadingScreen";
		credits = "Clique Technical Team";
	    author = "FluffFaceYeti";
		overview="Clique Heads Dayz Custom Loading Screen";
	    authorID = "FluffFaceYeti";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

		dependencies[]= 
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"CliqueLoadingScreen/Scripts/3_Game"
					//! Mod name/Scripts/3_Game
				};
			};
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"CliqueLoadingScreen\scripts\5_Mission"
				};
			};
		};
    };
};