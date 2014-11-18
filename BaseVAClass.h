#ifndef _BASEVACLASS_H
#define _BASEVACLASS_H

/*
	VA FAQ

	Q)What is the significance of VA body parts?
	A)VAs are separated into four damagable parts: legs, two arms, and a torso
	destroying arms renders the weapons and shields on that arm inoperable
	destroying legs gives a significant movement, Action Point(AP), and defence penalty.
	destroying legs also voids any special abilities the legs possess or special traits
	destroying the torso destroys the VA, erasing it from the map.

	Q)What are the Shield, Aegis and Chobham Armor? What do they mean/do?
	A) Shields are arm mounted defense tools, they add some extra HP to the Arm.
	They also give all VAs the ability to make the shield soak damage from an attack
	at the cost of the arm taking all damage from the attack. Aegis are shoulder mounted Shields
	they reduce damage from an attack and later Aegis make a damage wall and/or reduce damage
	based on element/type. Chobham is full body armor. It adds a separate bar of HP and
	reduces damage. Chobham, regardless of part, soaks damage.

	Q)Action Points?
	A)AP determine two things: Movement per space and if you can attack. AP is almost
	exclusively governed by Legs, though later game you can put internal parts in a VA
	that will effect AP.

*/
#include <iostream>
#include <random>
#include <math.h>
#include <time.h>
#include <string.h>

class BaseVA
{

protected:
		int m_Rarm; 
		int m_Larm;
		int m_Body; 
		int m_Legs; 
		int m_LegType;
		int m_agility;
		int m_AP;
		int mChobHP;
		int mAgility;
		int VAPartsArray[4];
		bool m_shield;
		bool mChob;
		bool m_aegis;
		bool mAlive;
		char m_StrBodyName[30];
		char m_StrLarmName[30];
		char m_StrRarmName[30];
		char m_StrLegsName[30];
		char m_VAname[40];

public:

	//friend CustomizeVA; This comes later

	BaseVA() {};
	BaseVA(int nRarm, int nLarm, int nBody, int nLegs ,int nAP, int nChobHP,bool bShield, bool bAegis, bool bChob, char cStrBodyName[30], char cStrLarmName[30], char cStrRarmName[30], char cStrLegsName[30])
	{ 
		SetVAStats(nRarm, nLarm, nBody, nLegs, nAP ,nChobHP, bChob, bShield, bAegis);
		SetPartName(cStrBodyName, cStrLarmName , cStrRarmName , cStrLegsName);

	}
	
	void SetVAStats(int nRarmHP, int nLarmHP, int nBody, int nLegs, int nChobHP, int nAP, bool bShield, bool bAegis, bool bChob)
	{
		 nRarmHP = m_Rarm;  
		 nLarmHP = m_Larm;
		 nBody 	  =	m_Body;
		 nLegs    =	m_Legs; 
		 bShield = m_shield; 
		 bAegis = m_aegis;
		 bChob = mChob;
		 nChobHP = mChobHP;
		 nAP = m_AP;
	}

		void SetAgility(int nAgility)
	{
		mAgility = nAgility;
	}

	void SetPartName (char cStrBodyName[30], char cStrLarmName[30], char cStrRarmName[30], char cStrLegsName[30])
	{
		strncpy_s (m_StrBodyName , cStrBodyName, 30);
		strncpy_s (m_StrLarmName , cStrLarmName, 30);
		strncpy_s (m_StrRarmName , cStrRarmName, 30);
		strncpy_s (m_StrLegsName , cStrLegsName, 30);
	}

	void SetLegType(int nLegType)
	{
		m_LegType = nLegType;
	}

	void SetVAParts()
	{
	int VAPartsArray[4] = {m_Body, m_Larm, m_Rarm, m_Legs};
	}

	int GetVAStats() {return m_aegis, m_Rarm, m_Larm, m_Body, m_Legs, m_shield, mChob, mChobHP, m_AP;};
	int GetLegType() { return m_LegType;};
	
		
};
#endif