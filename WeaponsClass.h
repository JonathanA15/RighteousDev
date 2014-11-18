#ifndef _WEAPONSCLASS_H
#define _WEAPONSCLASS_H


#include <iostream>
#include <random>
#include <math.h>
#include <time.h>
#include <string.h>
#include "WeaponTypes.h"
//#include "CombatSystem.h"



class Weapons
{

protected:
	int m_clip;
	int m_accurate;
	int m_damage;
	char m_strWPName[40];

	/* Weapons
	 There are five hand weapon types:
	 Assault Rifles
	 Shotguns
	 Solid Rifles
	 Launchers
	 Melee (in a sub category)
	 Two Shoulder Types: 
	 Missile
	 Cannon
	
	though outlined in the documentation i'll give a brief explaination:

	Assault Rifles are automatic weapons they run the middle ground of weapons
	and have clips that fire at least 5 shots per clip and randomly deal damage to
	each part. Two SubClasses will exist: Machine Guns (have more ammo but less accuracy)
	and Submachine Guns (less ammo per shot but more accurate)

	Shotguns are Pump or Semi-Auto. Pump fire one time and deal damage to every part
	not destroyed. Semi-Auto fire a minimum of three shots and hit two parts at a time.
	no subclasses
	
	Solid Rifles are single shot weapons that hit one part. They will deal massive damage
	to the part they hit and are equivalent to Sniper Rifles. No Subclasses

	Launchers are single shot weapons that fire rockets. Launchers are separate from SRs in
	that they have special damage mods like, say, HEAT or bonus damage to Chobham by def.
	No subclasses

	Shoulder Weapons:
	Missiles fire two missiles at a target. Missiles can do splash attacks (hit adjacent targets)
	or fire at one target. they do big damage at the cost of limited ammo.

	Cannons are artillery. They have a long firing distance and special stats by def.

	Melee:
    Three weapons exist in this category: Fists/Knucklers, Hand (Maces) and Swords.

	Knucklers are one swing weapons. They deal special damage and hit one part
	Knucklers never have special skill.
	
	Hand are one swing weapons like maces or axes. They deal special damage to Chobham. 
	Sometimes posess a special attribute.

	Swords are a special weapon. They can only be used by characters with the special att.
	"Swordsman". Swords can chain hits depending on type and pilot and some have an attribute
	using a sword requires two free hands (no shield) but swords can parry physical hits or
	rifles with special pilot stats.

	*/

public:
	
	Weapons()  {}

	Weapons(int nClip ,int nAccurate, int nDamage, char m_strWPName[40])
	{
		SetStats(nClip, nAccurate, nDamage);
		SetName(m_strWPName);
		PrintNameStats(m_strWPName);
	}
	
	
	void SetStats (int nClip, int nAccurate, int nDamage)
	{
		m_clip = nClip;
		m_accurate = nAccurate;
		m_damage = nDamage;
	}

/*
	void SetFireMode(int nMode)
	{
		nMode = m_mode;
	}
*/

	void SetName (char m_strWPName[40])
	{
		//std::cout << m_strWPName << endl;
	}

	void PrintStats()
	{
		std::cout << "Weapon Name: " << m_strWPName << " Damage Range : " << m_damage << " Clip Size: " << m_clip << std::endl;
	}

	void WeaponsClasses()
	{
	//Function SetStats takes three arguments: 
	//Clip Size (number of rolls in an attack)
	//Accuracy (chance of hit roll per shot)
	//Damage (Damage per a hit in a range)
	Weapons AR;
	AR.SetStats(5, rand() % 10 , rand() % 15 + 2);
	//SetName takes one argument: Name.
	AR.SetName("Assault Rifle");
	
	Weapons SR;
	SR.SetStats(1, rand() % 15 , rand() % 35 + 2);
	SR.SetName("Solid Rifle");

	Weapons SG;
	SG.SetStats(1, rand() % 15, rand() % 10 + 5);
	SG.SetName("Shotgun");

	};

		int GetClipStats()     { return m_clip;}
		int GetAccuracyStats() { return m_accurate;}
		int GetDamageStats()   { return m_damage;}
		//char* GetNameStats()	   { std::cout << m_strWPName; return m_strWPName ;}
		void PrintNameStats(char m_strWPName[40]) { std::cout<< m_strWPName; }
		//~Weapons();
	};


#endif