//OS Specific header
#include <iostream>

//local headers

#include "RighteousStateMachine.h" //Can cause strange compile errors.
#include "DrawFieldHandler.h"
#include "MenuSelectClass.h"
//#include "CombatSystem.h" Unfinished
#include "BaseVAClass.h"
#include "WeaponsClass.h"

using namespace std;

int main(int argc, char argv[])
{
	/*

		void GenericWeapon()
	{
			//map<string, Weapons ,int>WeaponsDB;
		//WeaponsDB["Assault Rifle", AR] = AR;
		
		//Function SetStats takes three arguments: 
			//Clip Size (number of rolls in an attack)
		//Accuracy (chance of hit roll per shot)
		//Damage (Damage per a hit in a range)
	Weapons AR;
	AR.SetStats(5, rand() % 10 , rand() % 15 + 2);
	//SetName takes one argument: Name. It's carried by a char pointer.
	AR.SetName("Assault Rifle");
	
	Weapons SR;
	SR.SetStats(1, rand() % 15 , rand() % 35 + 2);
	SR.SetName("Solid Rifle");

	Weapons SG;
	SG.SetStats(1, rand() % 15, rand() % 10 + 5);
	SG.SetName("Shotgun");


	}
		*/

	//Main Menu startup
	 MenuSelect NewMenu;
	 NewMenu.UserSelection();
	 //Engine startup
	 GameStateMachine NewGame;
	 NewGame.RFSM();	

	system("PAUSE");
	return 0;
};