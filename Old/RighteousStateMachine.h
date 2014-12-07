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
		vASpent = ActionSpent;
		vSpent = TurnSpent;
	}

	~RSM(){};

	/*
	template<typename T>
	void neoWeapon(T MaxDmg,  MinimumDmg, T nAmmo, T WeaponName, T ElmntType)
	{
		Weapon::WeaponName = " ";
		Weapon::MaxDmg = 0;
		Weapon::MinimumDmg = 0;
		Weapon::nAmmo = 0;
		Weapon::ElmntType = " ";
	};
	*/

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