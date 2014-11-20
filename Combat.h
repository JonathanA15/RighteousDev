#ifndef COMBAT_H_
#define COMBAT_H_

#include "RighteousReference.h"

class RighteousCombat
{
private:
	bool isAlive;
	bool enCounterAttack;

public:

	RighteousCombat(){};
	~RighteousCombat(){};

	void startCombat();
	void endCombat();

};

#endif