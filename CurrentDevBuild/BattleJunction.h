#ifndef BATTLEJUNCTION_H_
#define BATTLEJUNCTION_H_
#include "RighteousReference.h"
class BattleJunction
{
private:

public:
	 int pAP;
	int emAP;
    int eAP; 
	int bBox;
	int ubBox;
	int *pnAP;
	int LRCheck;
	std::string rSTR;

	void InitBattle();


void PlayerTurn(int nAP);
void EnemyTurn(int enAP);

};

#endif