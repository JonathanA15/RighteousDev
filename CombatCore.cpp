#include "Combat.h"
#include "RighteousReference.h"
#include <random>

//PlayerVA[rand() % 5]  Weapon::MaxDmg;
	//Go! Dice roll!

VA *cVA;
VA ecVA;
int xAmm;
int xDmg;
Weapon Wp;
int PlayerDealt;
int EnemyDealt;

void RighteousCombat::startCombat()
{
	std::cout << "The following choices are viable: " << cVA->getCurrentWeapon() << std::endl;
	
	std::cout << cVA << std::endl; 

	for(int xAmm = 0; Wp.getAmmo() > 0;  Wp.setAmmo(xAmm--))
	{
		

		if(ecVA.CangetAegis() == true)
		{
			std::cout <<"You have dealt " << rand() % Wp.getMaxDamage()  << "in damage" <<std::endl;
			EnemyDealt = rand() % Wp.getMaxDamage();
		}
		else
		{
			std::cout <<"You have dealt " <<  rand() % Wp.getMaxDamage()    << "in damage" <<std::endl;
			PlayerDealt = rand() % Wp.getMaxDamage();
		}

	}


	for (int yAmm = 10; Wp.getAmmo() > 0;  Wp.setAmmo(yAmm--))
	{
		int EnemyRoll = rand() % 2;
			if(EnemyRoll == 1)
		    {
				enCounterAttack = true;

			};

	}
	endCombat();
};

void RighteousCombat::endCombat()
{
	std::cout <<"You have dealt " << "0"   << "in damage" <<std::endl;

	if(enCounterAttack == true)
	{
		std::cout <<"You have recieved " <<  "0"   << "in damage" <<std::endl;
		enCounterAttack = false;
	}
};