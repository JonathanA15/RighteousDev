#include "RighteousStateMachine.h"
#include "RighteousReference.h"

#include "UI.h"
VA CurrVA;

int IterRight = 2;

//The State Machine and it's wonderful turns

void RSM::StartGame()
{
	//RDH::neoMap();
	RSM::PlayerTurn();

}


void RSM::StartDGame(bool &DebugMode)
{
	if(DebugMode == true)
	{
		std::cout << "Starting in Debug Mode!" << std::endl;
		//ob for Observe, will output player and enemy unit count info on screen along with-
		//other desired stats/information

		//obActiveEntities(true);
		//obDeadEntities(true);
		//obAP(true);

	}
	else if(DebugMode == false)
	{
		std::cout << "Starting in Normal Mode" << std::endl;

	}
};

void RSM::PlayerTurn()
{
	int pChoice;
	std::cout << "It's Your Turn, choose an action to perform: " << std::endl;
	std::cout << "1. Move 2.Attack 3.Shift Party Member 4.Examine Stats 5.Quit" << std::endl;
	std::cin >> pChoice;

	switch(pChoice)
	{
	case 1:
	int movePlayer;
	char moveDirection;

	std::cout << "How Many tiles would you like to move?" << std::endl;
	std::cout << "Your current AP is: " << CurrVA.getAP() << std::endl;
	std::cin >> movePlayer;

	std::cout << "In which direction would you like to move?" << std::endl;
	std::cout << "Your current AP is: " << CurrVA.getAP() << std::endl;
	std::cin >> moveDirection;

	switch(moveDirection)
	{
		case 'N':

		RSM::ActionSpent = true;
		//PlParty->ShiftPartyMember();
		break;

		case 'E':

		RSM::ActionSpent = true;
		//PlParty->ShiftPartyMember();
		break;

		case 'S':

		RSM::ActionSpent = true;
		//PlParty->ShiftPartyMember();
		break;

		case 'W':

		RSM::ActionSpent = true;
		//PlParty->ShiftPartyMember();
		break;
	}
	break;
	
	case 2:
	    //if(Map::PlayerPos - Map::EnemyPos != 0 || Map::PlayerPos - Map::EnemyPos <= 1)
		//{
		//CBTC.StartCombat
		//}
		//else
		//{
		//	std::cout <<"Invalid action, you are out of range." << std::endl;
		//}
	break;

	case 3:
	
	for(int playerCharacter = 1; playerCharacter < IterRight; playerCharacter++)
	{
		
		if(IterRight >= 6)
		{
		//pCharacter = PlayerParty.getPartySize();
		//PlayerParty.PartyMembers[pCharacter]
		}
		else
		{
		//continue;
		//pCharacter = PlayerParty.getPartySize();
		//PlayerParty.PartyMembers[pCharacter]
		}
		IterRight++;
	}
	break;

	case 4:
	CurrVA.printStats();
	break;

	case 5:
	RSM::EndGame();
	break;
	}
};

	void RSM::AllyTurn()
	{


	};

	void RSM::EnemyTurn()
	{


	};

	void RSM::EndTurn()
	{
		std::cout << "Ending Turn" << std::endl;
		TurnSpent = true;
	};

	void RSM::EndGame()
	{
		UserInterface vU;
		vU.QuitGame();
	};




