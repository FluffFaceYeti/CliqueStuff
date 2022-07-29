class CfgPatches
{
	class CliqueFood
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Data",
			"DZ_Gear_Food",
			"DZ_Gear_Drinks",
			"DZ_Gear_Containers",
			"DZ_Characters",
            "DZ_Characters_Backpacks"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class BakedBeansCan;
	class BakedBeansCan_Opened;
	class SardinesCan;
	class SardinesCan_Opened;
	class BoxCerealCrunchin;
	class Rice;
	class PowderedMilk;
	class Marmalade;
	class MushroomBase;
	class Apple;
	class Pear;
	class Bottle_Base;
	class WaterBottle;
	class Vodka;
	class SodaCan_ColorBase;
	class SodaCan_Pipsi;
	class Canteen;
	class Container_Base;
	class WorldContainer_Base;
	class Barrel_ColorBase;
	class FirstAidKit;
	class TaloonBag_ColorBase;
	class SmallProtectorCase;
	class TunaCan;
	class TunaCan_Opened;
	class Snack_ColorBase;

	class Beyond_SR: Marmalade
	{
		scope=2;
		displayName="Beyond Space Rocks";
		descriptionShort="Out Of This World";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_SR.paa",
			"CliqueStuff\Food\Beyond_SR.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_AC: Marmalade
	{
		scope=2;
		displayName="Beyond Athena Colada";
		descriptionShort="Stealing Booty while you Shooty";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_AC.paa",
			"CliqueStuff\Food\Beyond_AC.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_BRL: Marmalade
	{
		scope=2;
		displayName="Beyond Blue Rasberry lemonade";
		descriptionShort="Sweet and Fruity";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_BRL.paa",
			"CliqueStuff\Food\Beyond_BRL.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_BB: Marmalade
	{
		scope=2;
		displayName="Beyond BloodBerry";
		descriptionShort="Made from real Zombies";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_BB.paa",
			"CliqueStuff\Food\Beyond_BB.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_CT: Marmalade
	{
		scope=2;
		displayName="Beyond Cherry twist";
		descriptionShort="Cherry nice";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_CT.paa",
			"CliqueStuff\Food\Beyond_CT.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_HMG: Marmalade
	{
		scope=2;
		displayName="Beyond Honeydew Melon and Grape";
		descriptionShort="Such a Grape flavor";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_HMG.paa",
			"CliqueStuff\Food\Beyond_HMG.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_LS: Marmalade
	{
		scope=2;
		displayName="Beyond Lemon Sherbet";
		descriptionShort="When life gives you lemons!";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_LS.paa",
			"CliqueStuff\Food\Beyond_LS.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_MPB: Marmalade
	{
		scope=2;
		displayName="Beyond Mango Pineapple and Blood Orange";
		descriptionShort="All the citris!";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_MPB.paa",
			"CliqueStuff\Food\Beyond_MPB.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_PD: Marmalade
	{
		scope=2;
		displayName="Beyond Pear Drops";
		descriptionShort="BehavingBeardly!";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_PD.paa",
			"CliqueStuff\Food\Beyond_PD.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_SWL: Marmalade
	{
		scope=2;
		displayName="Beyond Strawberry Watermelon and Lime";
		descriptionShort="Fruity!";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_SWL.paa",
			"CliqueStuff\Food\Beyond_SWL.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Beyond_WFF: Marmalade
	{
		scope=2;
		displayName="Beyond Wild Forest fruits";
		descriptionShort="Fuel For the Wild";
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\Beyond_WFF.paa",
			"CliqueStuff\Food\Beyond_WFF.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=50;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class CandyBag: Snack_ColorBase
	{
		model="\DZ\gear\food\salty_chips.p3d";
		scope=2;
		displayName="Sweet Cabin Candy bag";
		descriptionShort="CANDY";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"CliqueStuff\Food\CandyBag.paa"
		};
		class Nutrition
		{
			fullnessIndex=3;
			energy=50;
			water=10;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};

