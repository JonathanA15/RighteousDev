#include <iostream>
#include "RighteousReference.h"

#include "BattleJunction.h"

	void BattleJunction::InitBattle()
	{
		pAP = 5;
	    emAP = 5;

        eAP = 5;
   
	    bBox = 1; 
	    ubBox = 1;

	int LRCheck = 1;
	std::string rSTR = " ";
		PlayerTurn(5);
	}
	
void BattleJunction::EnemyTurn(int enAP)
{

emAP = enAP;

while (true)
{
	EnemyTurner:

switch(emAP)
{

	case 5:
		std::cout << "Enemy moved one down" << std::endl;
		emAP = enAP - 1;
		//emAP = enAP;
		PlayerTurn(pAP);
		//*pnAP = enAP;
	break;

	case 4:
		std::cout << "Enemy moved one left" << std::endl;
		emAP = enAP - 1;
		//emAP = enAP;
		PlayerTurn(pAP);
		//*pnAP = enAP;
	break;

	case 3:
		if(pAP == 3)
		{
		std::cout << "Enemy Attacking, missed" << std::endl;
		emAP = enAP - 2;
		//emAP = enAP;
		PlayerTurn(pAP);
		}
		else
		{
			std::cout << "Enemy moved 1 up" << std::endl;
			emAP = enAP - 1;
			//emAP = enAP;
			PlayerTurn(pAP);
		}
		//*pnAP = enAP;
	break;

	case 2:
		std::cout << "Enemy moving forward" << std::endl;
		enAP = enAP - 1;
		emAP = enAP;
		PlayerTurn(pAP);
		//*pnAP = enAP;
	break;

	case 0:
		std::cout << "Enemy out of turns" << std::endl;
		PlayerTurn(pAP);
		//*pnAP = enAP;
	break;
}

if(pAP == 0)
	{
		goto EnemyTurner;
	}
}
}

void BattleJunction::PlayerTurn(int nAP)
{
	int cAP = nAP;
int pACT;

while(cAP != 0)
	{
		// Up & Right select
	if(bBox == 1 && ubBox == 1)
		 {
std::cout << "You currently have: " << cAP << " Action Points" << std::endl;

std::cout << "Your enemy has: " << emAP << " AP" << std::endl;
std::cout << "Select an action (cost in parenthesis)"<< std::endl;
std::cout << "1)Move(1) 2)Dash(2) 3)Attack(2)" << std::endl;
std::cin >> pACT;

switch (pACT)
{
case 1:
std::cout << "Available directions: Up (U), Right(R) " << std::endl;
std::cin >> rSTR;

if (rSTR == "U")
{
	std::cout << "Moved up 1 " << std::endl;
	ubBox++;
}
else if (rSTR == "R")
{
	std::cout << "Moved right 1 " << std::endl;
	bBox++;
}

cAP = cAP  - 1;
pAP = cAP;
std::cout << "You currently have: " << cAP << " AP" << std::endl;
 EnemyTurn(emAP);
break;


case 2:
std::cout << "Moved up diagonally " << std::endl;
cAP = cAP  - 2;
pAP = cAP;
bBox = bBox + 1;
ubBox = ubBox + 1;

std::cout << "You currently have: " << cAP  << " AP" << std::endl;
 EnemyTurn(emAP); 
break;

case 3:
	std::cout << "Weapon fired " << std::endl;
	cAP = cAP  - 2;
	pAP = cAP;
	std::cout << "You currently have: " << cAP << " AP" << std::endl;
	EnemyTurn(emAP);
	break;
}

}
	// Up & Left select
	else if (bBox == 2 && ubBox == 1)
{
	std::cout << "You currently have: " << cAP << "Action Points" << std::endl;

	std::cout << "Your enemy has: " << emAP << " AP" << std::endl;
	std::cout << "Select an action (cost in parenthesis)"<< std::endl;
	std::cout << "1)Move(1) 2)Dash(2) 3)Attack(2)" << std::endl;
	std::cin >> pACT;

switch (pACT)
{
case 1:
std::cout << "Available directions: Up (U), Left(L) " << std::endl;
std::cin >> rSTR;

if (rSTR == "U")
{
	std::cout << "Moved up 1 " << std::endl;
	ubBox = ubBox + 1;
}
else if (rSTR == "L")
{
	std::cout << "Moved right 1 " << std::endl;
	bBox = bBox - 1;
}

cAP = cAP  - 1;
pAP = cAP;
std::cout << "You currently have: " << cAP  << " AP" << std::endl;
EnemyTurn(emAP);
break;


case 2:
std::cout << "Moved up diagonally " << std::endl;
cAP = cAP  - 2;
pAP = cAP;
bBox = bBox - 1;
ubBox = ubBox + 1;
std::cout << "You currently have: " << cAP << " AP" << std::endl;
EnemyTurn(emAP);
break;

case 3:
	std::cout << "Weapon fired " << std::endl;
	cAP = cAP  - 2;
	pAP = cAP;
	std::cout << "You currently have: " << cAP << " AP" << std::endl;
	EnemyTurn(emAP);
	break;

		}
}
// Down & Right select
else if (bBox == 1 && ubBox == 2)
{
	std::cout << "You currently have: " << cAP << "Action Points" << std::endl;

	std::cout << "Your enemy has: " << emAP << " AP" << std::endl;
	std::cout << "Select an action (cost in parenthesis)"<< std::endl;
	std::cout << "1)Move(1) 2)Dash(2) 3)Attack(2)" << std::endl;
	std::cin >> pACT;

switch (pACT)
{
case 1:
std::cout << "Available directions: Down (D), Right(R) " << std::endl;
std::cin >> rSTR;

if (rSTR == "D")
{
	std::cout << "Moved down 1 " << std::endl;
	ubBox = ubBox - 1;
}
else if (rSTR == "R")
{
	std::cout << "Moved right 1 " << std::endl;
	bBox = bBox + 1;
}

cAP = cAP  - 1;
pAP = cAP;
std::cout << "You currently have: " << cAP << " AP" << std::endl;
EnemyTurn(emAP);
break;


case 2:
std::cout << "Moved up diagonally " << std::endl;
cAP = cAP  - 2;
bBox = bBox + 1;
ubBox = ubBox - 1;
std::cout << "You currently have: " << cAP << " AP" << std::endl;

 EnemyTurn(emAP);
break;

case 3:
	std::cout << "Weapon fired " << std::endl;
	cAP = cAP  - 2;
	std::cout << "You currently have: " << cAP << " AP" << std::endl;
	EnemyTurn(emAP);
break;
		}
}

	//Down, Left)
else if (bBox == 2 && ubBox == 2)
{
	std::cout << "You currently have: " << cAP << "Action Points" << std::endl;

	std::cout << "Your enemy has: " << emAP << " AP" << std::endl;
	std::cout << "Select an action (cost in parenthesis)"<< std::endl;
	std::cout << "1)Move(1) 2)Dash(2) 3)Attack(2)" << std::endl;
	std::cin >> pACT;

switch (pACT)
{
case 1:
std::cout << "Available directions: Down (D), Left(L) " << std::endl;
std::cin >> rSTR;

if (rSTR == "D")
{
	std::cout << "Moved down 1 " << std::endl;
	ubBox = ubBox - 1;
}
else if (rSTR == "L")
{
	std::cout << "Moved left 1 " << std::endl;
	bBox = bBox - 1;
}
cAP = cAP  - 1;
pAP = cAP;
std::cout << "You currently have: " << cAP << " AP" << std::endl;
EnemyTurn(emAP);
break;


case 2:
std::cout << "Moved up diagonally " << std::endl;
cAP = cAP  - 2;
bBox = bBox - 1;
ubBox = ubBox - 1;
std::cout << "You currently have: " << cAP << " AP" << std::endl;
EnemyTurn(emAP);
break;

case 3:
	std::cout << "Weapon fired " << std::endl;
	cAP = cAP  - 2;
	std::cout << "You currently have: " << cAP << " AP" << std::endl;
	EnemyTurn(emAP);
	break;

		}
	}

if (cAP <= 0 || emAP <= 0)
	{
		int ult;

	std::cout << "Ending battle" << std::endl;
	std::cin >> ult;
   getchar();
   break;

	}
 else
 {
	 continue;
 }

 }

};