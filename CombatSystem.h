
#include <iostream>
#include "WeaponsClass.h"
#include "BaseVAClass.h"


class CombatSystem : public Weapons, BaseVA
{

private:

	bool mDoA;
	bool mCanAttack;

public:

CombatSystem(){}

CombatSystem(bool nDoA, bool CanAttack)
{
	SetDoA(nDoA);
	CommenceBattle();
	TestLife(nDoA);
	//TestDistance(CanAttack); Needs the coordinate system. Will research tonight.
	SetCanAttack(CanAttack);

}

void SetDoA(bool nDoA)
{
	nDoA = mDoA;

}

void SetCanAttack(bool CanAttack)
{
	CanAttack = mCanAttack;

}
//Variables changed to protected, problem solved and appropriate for weapons and VAs. gain variables via Inheritence
void CommenceBattle()
	{
		while (m_clip != 0)
		{

		if (mAgility >= m_accurate)
		{
			std::cout << "Attack Missed, Damage is null" << std::endl;
			std::cout << "Your Armor health is :" << mChobHP << std::endl;
			std::cout << "Your health is :" << m_Body << std::endl;
		}
		else
		{
			if(m_shield = true) 
		{    
			int dmgRed = 10;
			std::cout << "Shield reduced damage. Damage inflicted will be " << m_damage - dmgRed << std::endl;
		}
		}

		if(m_aegis = true)
		{

		}

		if (mChobHP > 0)
		{
		std::cout << "Attack hit, Damage is: " << m_damage  << std::endl;
		mChobHP = mChobHP - m_damage;
		std::cout << "Your Armor health is :" << mChobHP << std::endl;
		std::cout << "Your body health is :"  << m_Body << std::endl;
		std::cout << "Your Left Arm health is :" << m_Larm << std::endl;
		std::cout << "Your Right Am health is :" << m_Rarm << std::endl;
		std::cout << "Your Leg health is :" << m_Legs << std::endl;
		}
		else
		{
			int temp = rand() % 3;
			VAPartsArray[temp] = VAPartsArray[temp] - m_damage;
			std::cout << "Your body health is :" << m_Body << std::endl;
			std::cout << "Your Left Arm health is :" << m_Larm  << std::endl;
			std::cout << "Your Right Am health is :" << m_Rarm << std::endl;
			std::cout << "Your Leg health is :" << m_Legs << std::endl;
		}

	 }
		m_clip--;
}
		


	
	//Currently only tests if the VA is alive. Extra function required to delete from map
   void TestLife(int nDoA)
		{
			if(m_Body = 0)
			{
				nDoA = true;
				std::cout <<"Your VA has been destroyed" << std::endl;
			}
			else
			{
				nDoA = false;
			}
		 }
	};
	  //Connected to Coordinate System. Non-functional
   /*
      void TestDistance(bool CanAttack)
		{
			if(Dist = 0)
			{
				CanAttack = true;
			}
			else
			{
				CanAttack = false;
			}
		}

	}
*/
		

