class CfgPatches
{
	class BasiliskFace
	{
		author = "Soldner";
		hideName = 0;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFaces
{
	class Man_A3
	{
		class WhiteHead_01;
		class PHRP_SoldnerHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Soldner";
			texture = "BasiliskFace\Data\soldner_co.paa";
			material = "BasiliskFace\Data\soldner.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "BasiliskFace\Data\soldner_tat_co.paa";
			textureHL2 = "BasiliskFace\Data\soldner_tat_co.paa";
		};
		class WhiteHead_10;
		class PHRP_BlackburnHead : WhiteHead_10
		{
			disabled = 0;
			displayname = "Blackburn";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			texture = "A3\Characters_F\Heads\data\m_White_10.paa";
			material = "A3\Characters_F\Heads\data\m_White_10.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\data\m_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\data\m_White_10_injury.rvmat";
			textureHL = "BasiliskFace\Data\blackburn_tat_co.paa";
			textureHL2 = "BasiliskFace\Data\blackburn_tat_co.paa";
		};
	};
};
