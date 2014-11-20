#include "RighteousReference.h"
#include "UI.h"
#include "RighteousStateMachine.h"

RSM RRSM;
bool RSSM2 = true;
	int uSelection;

void UserInterface::QuitGame()
	{
		std::cout << "Shutting down The Righteous" << std::endl;
		getchar();
	};

	//SK Skeleton!!
void UserInterface::UserSelect()
	{

		ReWire:
		std::cout <<"Welcome to the Righteous version SK "<< " please make a selection." << std::endl;
		std::cout <<"1.Start 2.Debug 3.Customize VA(TODO) 4.Credits 5.Quit"<< std::endl;
		std::cin >> uSelection;
		m_userSelect = uSelection;

		switch(m_userSelect)
		{
			case 1:
			std::cout << "Starting Demo!"<< std::endl;
			RRSM.StartGame();
			break;
			

			case 2:
			
			RRSM.StartDGame(RSSM2);
			goto ReWire;
			break;

			case 3:
			//RCS.VACustomization
			goto ReWire;
			break;

			case 4:
			std::cout << "Righteous Demo (SK) Version Made 10/29/14" << std::endl;
			std::cout << "Developed by Miles J. Litteral AKA Sasori_Zero" <<std::endl;
			std::cout <<"Righteous Team: Miles J. Litteral, David R. Alvarado, Jonathan Alicea"<< std::endl;
			goto ReWire;
			break;

			case 5:
			QuitGame();
			break;
		}
	};

