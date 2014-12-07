#ifndef	RIGHTEOUSMARKETSYSTEM_H_
#define RIGHTEOUSMARKETSYSTEM_H_
//market target demo

//STL Headers
#include <iostream>
#include <vector>
#include <string>

// UDT Headers
#include "RighteousMemoryCore.h"
#include "RighteousCurrencySystem.h"

class MarketSystem
{
private:
	std::map<std::string, int> VendorInventory;

public:
	MemoryCore MCU;

	struct MarketItems
	{
		std::string IName;
		int iCost;
	};

//Items Itemlist(Items const& ITM);
	int SearchStock(int *point)
	{
		std::map<std::string, int>::iterator ITR;

		while (ITR != VendorInventory.end())
		{
			std::map<std::string,int>::iterator ITS = VendorInventory.find( " ");
			return 1;
		}

	}
	int PushStock(std::pair<std::string, int>SOR)
	{
		VendorInventory.insert(SOR)	;
		
	};

	int moneyExchange();
	int giveItem();

}

                                           
#endif