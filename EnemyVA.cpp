#include "BasePilot.h"
#include "BaseVAClass.h"
#include "WeaponsClass.h"
#include "DrawFieldHandler.h"

void EnemyVA()
{
	BaseVA EnemyVA;
	EnemyVA.SetVAStats(50,50,95,50,0,5,false,false,false);
	EnemyVA.SetLegType(1);

		BasePilot EnemyPilot;
		EnemyPilot.SetPilotName("Senshi");
		EnemyPilot.SetPilotSS(1);
		EnemyPilot.SetPilotStats(2);

		Weapons AR;
		AR.SetName("AK-74R");

		DrawFieldHandler PlayerPos;
//		PlayerPos.SetPos(0,5);
		PlayerPos.PosToken("E");
}