#include "RighteousCustomizationSystem.h"

void CustomVA() {
	int selP;

	/*

	*/
	std::cout << "Welcome to the Hanger!" << std::endl;


};

int setParts()
{
	VerticalArmor PTR;
	int nPut;
	
	VerticalArmor GAV;

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
			
			std::cout << PTR.GrayHoundName() << std::endl;
		
			std::cout << "The Vertical Armor has: " << SpawnShepard.size() << " parts." << std::endl;
			std::cout << "Capacity of The Vertical Armor is: " << SpawnShepard.capacity() << " elements." << std::endl;
	
			//  put some random data into the vector using at()
			for (long index=0; index<(long)SpawnShepard.size(); ++index)
			{
				
			 SpawnShepard.at(index)=GAV.GA->GrayHound();
			}
	
			//  display vector contents
			std::cout << "The VA's Limb health is(T,LA,RA,LLG,RLG): " << std::endl;
			for (long index=0; index<(long)SpawnShepard.size(); ++index) {
				
				std::cout << SpawnShepard.at(index) << " ";
			}
			std::cout << std::endl << std::endl;
	
		//GAV.GA->GrayHound();
		//bringHound();
		break;

		case 2:
			//  display size and capacity of vector
	std::cout << PTR.BushWallName() << std::endl;
	std::cout << "The Vertical Armor has: " << SpawnShepard.size() << " parts." << std::endl;
	std::cout << "Capacity of The Vertical Armor is: " << SpawnShepard.capacity() << " elements." << std::endl;
	
	//  put some random data into the vector using at()
	for (long index=0; index<(long)SpawnShepard.size(); ++index)
	{
		 SpawnShepard.at(index)=GAV.GA->Bushwall();
	}
	
	//  display vector contents
	std::cout << "VA contains the following elements:" << std::endl;
	for (long index=0; index<(long)SpawnShepard.size(); ++index) {
		std::cout << SpawnShepard.at(index) << " ";
	}
	std::cout << std::endl << std::endl;
	
		;
		
		break;
		}
	 }
	getchar();
	return 1;
	}

void UseCustomVA(){




}