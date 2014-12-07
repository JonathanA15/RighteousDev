#ifndef WEAPON_H_
#define WEAPON_H_

#include "RighteousReference.h"

class Weapon : public Item
{
private:
	int MaxDmg;
	int MinimumDmg;
	int nAmmo;


	std::string WeaponName;
	std::string ElmntType;

public:

	enum ELEMENTTYPES
	{
		//2 - 4 are gun types, 0 & 1 are debug types
		VOIDTYPE,  //Has no Type, for Debug Purposes.
		BASICTYPE, //Special Debug Type.
		STANDARD,  //Most MGs, Shotguns and rifles.
		ANTIARMOR, //Majority of Busters, twenty five percent of Rifles, handful of MGs.
		HIGHEXPLOSIVE,//All Bazookas, Rockets, and Grenades. 

		//5 & 6 are melee
		BLUNT,//Hands, one handed bars
		CUT, //Two handed swords, one handed swords

		//7 - 12 are special types
		SOLDIERFIRE, //Damage type of Infantry support.
		TANKFIRE, //The Default damage type of Tanks, remember that tanks can change ammunition during battle
		AIRCRAFTFIRE, //Default damage of planes and Helicoptors.
		ARTILLERYFIRE, //Default damage of artillery
		OMEGA, //Super special ability of the the Grayhound D and other "Type-S" suits ingame
		DECIMATE // Super special ability of some Bosses.
	};

	Weapon(){};

	Weapon(int MaxDmg, int MinimumDmg, int nAmmo, std::string WeaponName, std::string ElmntType){};

	~Weapon(){};

	int getMaxDamage()
	{
		return MaxDmg;
	};

	int getMinimumDamage()
	{
		return MaxDmg;
	};

	int getAmmo()
	{
		return nAmmo;
	};

	std::string getElementType()
	{
		return ElmntType;
	};

	void setMaxDmg(const int &){};
	void setMinDmg(const int &){};
	void setAmmo(const int &){};
	void setElement(const std::string &){};

	void neoWeapon(int &MaxDmg, int &MinimumDmg, int &nAmmo, std::string &WeaponName, std::string &ElmntType);
};

#endif