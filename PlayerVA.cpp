#include "BasePilot.h"
#include "BaseVAClass.h"
#include "WeaponsClass.h"
#include "DrawFieldHandler.h"


void PlayerVA()
{

BaseVA HeroVA;

	/* SetVAStat is a class that takes a huge amount of arguments (eight to be exact in the following order):
		Right Arm HP.
		Left  Arm HP.
		Body HP.
		Legs HP.
		Chobham Armor HP.
		Action Points (AP).
		Bool Shield.
		Bool Aegis.
		Bool Chobham Armor.
	*/

	//There are four leg types: Bipedal(two legged, ID = 1), Reverse Joint (two ID = 2), Quadrapedal (four ID = 3)
	// and Tread (Tank legs ID = 4). Currently non functioning so set to default (1).

	HeroVA.SetVAStats(50, 50, 100, 100, 0, 5, true, false, false);
	HeroVA.SetLegType(1);

	BasePilot HeroPilot;

        //Sets Name as a char array. It takes up to 25 characters.
		HeroPilot.SetPilotName("Buck");
		//Battle Skills the pilot is capable of having, currently just for show.
		HeroPilot.SetPilotSS(3);
		//Sets one stat, accuracy, which is added bonus during a combat roll.
		HeroPilot.SetPilotStats(5);


		Weapons AR;
		AR.SetName("M-17A1");

		//Generic position setter. Marks VA positions on the Map.
	DrawFieldHandler PlayerPos;
//		PlayerPos.SetPos(0,0);
		PlayerPos.PosToken("X");




}
