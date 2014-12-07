#include "RighteousReference.h"



class RighteousCustomizationSystem
{
private:


public:

MemoryCore MC;
BushWall bushWall;
GrayHound grayHound;

RighteousCustomizationSystem(){};
~RighteousCustomizationSystem(){};

void CustomVA() {
//	int selP;

	/*

	*/
	std::cout << "Welcome to the Hanger!" << std::endl;


};

int setParts()
{
	int nPut;
	
	VA GAV;
	grayHound.makeGrayHound(true);
	bushWall.makeBushWall(true);
	std::string tempS = grayHound.GetName();
	std::string tempT = bushWall.GetName();

	beg:
	std::cout << "Select a Vertical Armor" << std::endl;
	
	std::cin >> nPut;
	if(nPut > 2)
	{
		std::cout << "Invalid Input" << std::endl;
		goto beg;
	}
	else
	{
	switch (nPut)
	 {
		
		case 1:
			
			//  display size and capacity of vector
			
			std::cout << tempS << std::endl;
		
			std::cout << "The Vertical Armor has: " << MC.SpawnVAShepard.size() << " parts." << std::endl;
			std::cout << "Capacity of The Vertical Armor is: " << MC.SpawnVAShepard.capacity() << " elements." << std::endl;
	
			//  put some random data into the vector using at()
			for (long index=0; index<(long)MC.SpawnVAShepard.size(); ++index)
			{
				
			 MC.SpawnVAShepard.at(index)= 0;
			}
	
			//  display vector contents
			std::cout << "The VA's Limb health is(T,LA,RA,LLG,RLG): " << std::endl;
			//MCE.MemoryPreparation(10);
			for (long index=0; index<(long)MC.SpawnVAShepard.size(); ++index) {
				
				std::cout << MC.SpawnVAShepard.at(index) << " ";
			}
			std::cout << std::endl;
	
		//GAV.GA->GrayHound();
		//bringHound();
		break;

		case 2:
			//  display size and capacity of vector
	std::cout << tempT << std::endl;
	std::cout << "The Vertical Armor has: " << MC.SpawnVAShepard.size() << " parts." << std::endl;
	std::cout << "Capacity of The Vertical Armor is: " << MC.SpawnVAShepard.capacity() << " elements." << std::endl;
	
	//  put some random data into the vector using at()
	for (long index=0; index<(long)MC.SpawnVAShepard.size(); ++index)
	{
		 MC.SpawnVAShepard.at(index)= 0;//bushWall.Bushwall();
	}
	
	//  display vector contents
	std::cout << "VA contains the following elements:" << std::endl;
	for (long index=0; index<(long)MC.SpawnVAShepard.size(); index++) {
		std::cout << MC.SpawnVAShepard.at(index);
	}
	std::cout << std::endl << std::endl;
			
		break;
		}
	 }
	getchar();

	return 1;
	}

//void UseCustomVA(){}

};