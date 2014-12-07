#ifndef MEMORYCORE_H_
#define MEMORYCORE_H_

#include "RighteousReference.h"
#include <string>
#include <map>
#include <list>

class MemoryCore
{

private:

public:
//Functions
	MemoryCore(){}; 
	MemoryCore(MemoryCore const& MAC);
	~MemoryCore(){};

	std::vector<std::string>::iterator Iter2;
std::vector<std::string>NameLibrary;


//Player Specific
//std::vector<Item> PlayerInventory;

//Vertical Armor Specific
std::vector<int>::iterator Iter1;
std::vector<int>SpawnVAShepard;

//Vehicle Specific
std::vector<int>::iterator Iter3;
std::vector<int>SpawnVehicleShepard;

//Store Specific
std::map<std::string, int> ItemStore;
std::vector<int>SpawnItemShepard;

void MemoryPreparation(int zx)
	{
		SpawnVehicleShepard.reserve(zx);
		SpawnVAShepard.reserve(zx);
	}
	
	void PushNameElement(std::string const& VANPush)
	{
	int stv = 0;
	while(stv < stv + 1)
		{
		
		NameLibrary.at(stv)= VANPush;
		stv++;
		}
	}

	//void PushItem(Item const& ITMPush)
	//{
	//	PlayerInventory.push_back(ITMPush);
	//};

	void PushVAData (int const& VAData)
	{	
	int stv = 0;
	while(stv < stv + 1)
	{

		SpawnVAShepard.at(stv)= VAData;
		stv++;

	}

	}

	void PushItemData (int const& ITData)
	{
	int stv = 0;
	while(stv < stv + 1)
	{

		SpawnVAShepard.at(stv)= ITData;
		stv++;

	}
	}

	void PushVehicleData(int const& VEHData)
	{
	int stv = 0;
	while(stv < 5)
	{
		SpawnVAShepard.at(stv)= VEHData;
		stv++;

	}

	}
};

#endif