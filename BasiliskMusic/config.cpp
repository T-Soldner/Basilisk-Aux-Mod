class CfgPatches //class desc.
{
	class Project_Harvest_Music
	{
		name = "Basilisk Music Pack";
		author = "Basilisk Mod Team"; //name of author
		units[] = //attached units (leave blank)
		{
			
		};
		weapons[] = //attached weapons (leave blank)
		{
			
		};
		requiredVersion = 0.1; //artefact of arma, no clue what it is but has to stay 0.1
		requiredAddons[] =
		{
			
		};
	};
};
class CfgMusic
{
	#include "BasiliskMusicTracks.hpp"
};
class CfgMusicClasses
{
	class BasiliskMusic
	{
		displayName = "Basilisk - Music Pack";
	};
	class BasiliskClip
	{
		displayName = "Basilisk - Short Audio Clips";
	};
	class BasiliskGoofy
	{
		displayName = "Basilisk - Goofy";
	};
};