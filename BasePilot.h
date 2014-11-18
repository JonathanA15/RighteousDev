#ifndef _BASEPILOT_H
#define _BASEPILOT_H

#include <iostream>
#include <string.h>



class BasePilot
{
	private:

	int m_PilotAccuracy;
	int m_SkillSlots;
	char m_PilotName[30];

public:
	BasePilot(){};

	BasePilot(int nSkillSlots, char sPilotName[30],int nPilotAccuracy)
	{
		SetPilotName(sPilotName);
		SetPilotSS(nSkillSlots);
		SetPilotStats(nPilotAccuracy);
	}

		void SetPilotName(char sPilotName[30])
		{
			strncpy_s(m_PilotName, sPilotName, 30);
		}

		void SetPilotSS(int nSkillSlots)
		{
			m_SkillSlots = nSkillSlots;
		}

		void SetPilotStats(int nPilotAccuracy)
		{
			m_PilotAccuracy = nPilotAccuracy;
		}
	
		void PrintPilotInfo(int nSkillSlots, int nPilotAccuracy) 
		{
			std::cout << "Pilot's stats: " << nSkillSlots << nPilotAccuracy << std::endl; 
		}

		void PrintPilotName(char sPilotName[30] )
		{
			std::cout << "Pilot Name: " << sPilotName << std::endl;
		}

		char GetPilotName() {return m_PilotName[30];};
		int GetPilotSS(){return  m_SkillSlots;};
		int GetPilotAcc(){return m_PilotAccuracy;};
};

#endif