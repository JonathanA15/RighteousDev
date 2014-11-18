#ifndef _RIGHTEOUSSTATEMACHINE_H
#define _RIGHTEOUSSTATEMACHINE_H

#include "BaseVAClass.h"
#include "WeaponsClass.h"
#include "CombatSystem.h"
#include "DrawFieldHandler.h"

#include <iostream>
#include <Windows.h>

class GameStateMachine
{
	private:
		int mState;
		int m_TurnCount;
		bool mNextPhase;
		bool mEndPlayerTurn;
		template<class T>
		 operator T () const;

	public:


		GameStateMachine(){}
		GameStateMachine(int _state ,int nTurnCount, bool bNextPhase, bool bEndPlayerTurn){

			SetTurnCount(nTurnCount);
			SetNextPhase(bNextPhase);
			SetEndPlayerTurn(bEndPlayerTurn);
			SetState(_state);
			RFSM();
			BeginTurn();
			SetupPhase();
			NextPhase();
			CombatPhase();
			RecoverPhase();

		}


void SetState(int _state)
{
	_state = mState;

}
void SetTurnCount (int nTurnCount)
	{
		nTurnCount = m_TurnCount;
	}

void SetNextPhase (bool bNextPhase)
	{
		bNextPhase = mNextPhase; 
	}

void SetEndPlayerTurn(bool bEndPlayerTurn)
{
	bEndPlayerTurn = mEndPlayerTurn;
}

/*Game's primitive, Finite State Machine (FSM). Though functional it's rough around the edges:
Can't End turn on setup phase but can end phase *FIXED*
State Machine doesn't redraw the map (simple class call required)
State Machine takes no consideration for Player position (Coordinate System required, class calls)
Always prompts user for a weapons choice (conditional is required. Curren

*/
void RFSM()
{


while(true)
{
mState = 0;

enum  gState
{
	IDLE = 0,
	NEWTURN = 1,
	SETUP = 2,
	COMBAT = 3,
	PLANNING = 4,
	END = 5

};


BeginTurn();



switch (mState)
{
	case(1):
	SetupPhase();
	


	case(2):
	 CombatPhase();

	
	case(3):
	RecoverPhase();

	

	case(4):
	 mState = 1;


	}

}

    }

void BeginTurn()
	{
	std::cout << "It's Your Turn!\n" << std::endl;
	mState++;
	}


void SetupPhase()
	{

		int ActionChoice;

		std::cout << "Choose an Action: 1)Move 2)Use Item2 3) Check Stats 4) End Phase 5) End Turn" << std::endl;
		std::cin >> ActionChoice;
		//if (ActionChoice = 5)
		//{
			//std::cout << "Ending Turn! \n" << std::endl;
			//SetupPhase();

		//}
		NextPhase();

	}


	void CombatPhase()
	{
		Weapons AR;
		AR.SetName("Assault Rifle"); //AR.PrintStats is picking up a pointer instead of an actual char array, odd. should be converted to string, then transfered
		int CombatChoice;
		do
		{
		std::cout << "Combat Action: Which weapon do you want to use?\n" << std::endl;
		std::cout << AR.PrintNameStats(m_strWPName) << "Choice 1" << std::endl;
		std::cin >> CombatChoice;
		}while(CombatChoice != 1 && CombatChoice != 2 && CombatChoice != 3 && CombatChoice!= 4 && CombatChoice != 5);
		CombatSystem();

		NextPhase();
		 

	}

	
void RecoverPhase()
	{
		int ActionChoice2;
		//DrawFieldHandler NewField;

		//NewField.RefreshField;
		std::cout << "Choose a Recovery Action: 2) Use Item 3) Check Stats 4) End Phase 5) End Turn" << std::endl;
		std::cin >> ActionChoice2;
		if (ActionChoice2 = 5)
		{
			std::cout << "Ending Turn! \n" << std::endl;
			mState = 1;
		}
		else
		{
		NextPhase();
		}
	}


	int NextPhase()
	{
		//DrawFieldHandler NewField;
		//NewField.RefreshField();
		std::cout << "Next Phase!\n" << std::endl;
		mState++;
		return 0;
	}

  };


#endif