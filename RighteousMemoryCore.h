#ifndef RIGHTEOUSMEMORYCORE_H_
#define RIGHTEOUSMEMORYCORE_H_

#include <vector>
#include <map>

#include "RighteousReference.h"

class MemoryCore
{
protected:
	int sts;
	int stv;

public:
//Special
std::vector<std::string>::iterator Iter2;
std::vector<std::string>NameLibrary;


//Player Specific
std::vector<Item> PlayerInventory;
std::vector<int>PlayerWallet;

//Vertical Armor Specific
std::vector<int>::iterator Iter1;
std::vector<VA> SpawnVAShepard(int);


//Vehicle Specific
std::vector<int>::iterator Iter3;
std::vector<int> SpawnVehicleShepard(int);

//Store Specific
std::map<std::string, int> ItemStore;
std::vector<int> SpawnItemShepard(int);

//Functions
	MemoryCore(){}; 
	MemoryCore(MemoryCore const& MAC);
	~MemoryCore(){};


	void PushNameElement(std::string const& VANPush){};
	void PushItem(Item const& ITMPush){PlayerInventory.push_back(ITMPush);};
	void PushVAData (int const& VAData){};
	void PushItemData (int const& ITData){};
	void PushVehicleData(int const& VEHData){};


};

#endif