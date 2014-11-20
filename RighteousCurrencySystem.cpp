#include "RighteousCurrencySystem.h"
#include "RighteousMemoryCore.h"

RCurrency RCA;

void MakeWallet(int wx)
{
	if(wx == 0)
	{
		RCA.RCU->PlayerWallet[1] = RCA.RCU->setPlayerWallet(0);
	}
	else if(wx == 1)
	{
		RCA.RCU->setOWallet(100);
	};
};

void TransferWallet(int PlayerMu, int OtherMu)
{
	RCA.RCU->PlayerWallet[1] = PlayerMu + OtherMu;
};
/*
		{
			RCurrency::PlayerWallet(nRC);
			for(nRC = 0 nRC < PW.end(); PW++)
			{
			PW.at(CC);             
			}
		};
*/