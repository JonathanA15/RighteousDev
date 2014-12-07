#include "RighteousMarketSystem.h"
#include "RighteousCurrencySystem.h"
#include "RighteousMemoryCore.h"

MarketSystem::MarketSystem(){}

int Cost;
MarketSystem MS;


int moneyExchange()
{
	RCurrency RCU;
	RCU.RCU->setPlayerWallet(RCU.RCU->PlayerWallet[1] - Cost);


}

int giveItem()
{
	MemoryCore RCU;
	RCU.PushItem(/*TODO*/);
	
}