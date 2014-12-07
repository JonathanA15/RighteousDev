#ifndef RIGHTEOUSLOADSYSTEM_H_
#define RIGHTEOUSLOADSYSTEM_H_

#include <vector>
#include <iostream>
#include "VA.h"
#include "RighteousReference.h"

class RLS
{

private:
std::vector<VA>::iterator RLS_SPAWNITERATOR; 
std::vector<VA> RLS_SPAWNLIST;
public:

RLS(){};

//int *xSpawn
RLS(std::vector<VA>::iterator vSpawn)
{

RLS_SPAWNITERATOR = vSpawn;	//RLS_SPAWNITERATOR = xSpawn;
};

~RLS(){};

void PushData(VA const& VA)
{

RLS_SPAWNLIST.push_back(VA);

if(RLS_SPAWNLIST.size() <= 0)
	{

throw "Data not pushed to the system, is the data corrupted?";

	}

	else
	{

		std::cout << "Vertical Armor Added to database." << std::endl;

	}

};

void ReadData()
{

for(RLS_SPAWNITERATOR = RLS_SPAWNLIST.begin(); RLS_SPAWNITERATOR != RLS_SPAWNLIST.end(); RLS_SPAWNITERATOR++)	
	{
	int RX;
		std::cout << RLS_SPAWNLIST[RX++] << std::endl;
	}
	};
}
#endif