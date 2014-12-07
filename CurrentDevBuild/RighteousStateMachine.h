#ifndef RIGHTEOUSSTATEMACHINE_H_
#define RIGHTEOUSSTATEMACHINE_H_

class RSM
{
private:
	int lastTurn;
	int currentTurn;
	int NextTurn;
	int TurnCount;

	//Is it my turn yet?
	bool ActionSpent;
	bool TurnSpent;

public:

	RSM(){};
	RSM(int vCurrent, int vNext, int vTurn, bool vASpent, bool vSpent)
	{
		currentTurn = vCurrent;
		NextTurn = vNext;
		TurnCount = vTurn;
		ActionSpent = vASpent;
		vSpent = TurnSpent;
	}

	~RSM(){};

	//Alpha -> Omega
	void StartGame();
	void StartDGame(bool &DebugMode);
	void EndGame();

	//Turn Starter
	void PlayerTurn();
	void AllyTurn();
	void EnemyTurn();
	void EndTurn();

	//void CustVA();

};

#endif