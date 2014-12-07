#ifndef VA_H_
#define VA_H_

class VA
{
private:
	int nTorso;
	int nLarm;
	int nRarm;
	int nLleg;
	int nRleg;
	float nAegis;
	//int nBackpack[5];

	bool CanAegis;
	//bool HasAegis;
	//bool canBackpack;

	size_t sizeVA;

	//The Big Kahuna
	int nAP;

public:

	VA* pVA;
	VA(){};

	VA(int vTorso, int vLarm, int vRarm, int vLleg, int vRleg){

	 nTorso = vTorso;
	 nLarm = vLarm;
	 nRarm = vRarm;
	 nLleg = vLleg;
	 nRleg = vRleg;

	}

	VA(int vTorso, int vLarm, int vRarm, int vLleg, int vRleg, float vAegis, int x){

	nTorso = vTorso;
	 nLarm = vLarm;
	 nRarm = vRarm;
	 nLleg = vLleg;
	 nRleg = vRleg;
	 nAegis = vAegis;
	 //int *vBackpack
	 //*vBackpack = nBackpack[5];
	}
		
	virtual ~VA(){ delete pVA;};
	virtual void neoVA() = 0;
	virtual void neoVA(int &nTorso, int &nLarm, int &Rarm, int &nLleg, int &nRleg, float &nAegis);
	virtual void printStats();
	
	//void CustVA();
	//int setBackpack(int const &vAegis);

	//Setters
	virtual void setTorso(const int *sVA);
	virtual void setRightArm(const int *sVA);
	virtual void setLeftArm(const int *sVA);
	virtual void setRightLeg(const int *sVA);
	virtual void setLeftLeg(const int *sVA);
	virtual void setAegis(const float *sVA);
	virtual void setAP(const int &nAP);
	virtual void setCurrentWeapon(const int &VAWP);
	//virtual int setBackpack();
	//virtual int setHead();

	//Getters
	//Limbs
	int getTorso() {return nTorso;};
	int getLeftArm() {return  nLarm;};
	int getRightArm() {return nRarm;};
	int getLeftLeg() {return  nLleg;};
	int getRightLeg() {return nRleg;};

	//Stats
	float getAegis(){return nAegis;};
	bool  CangetAegis(){return CanAegis;};
	int getAP(){return nAP;};
	int getCurrentWeapon(){int CurrWeap; return CurrWeap;};

};




class HeavyArmor : public VA
{
	private:

	typedef VA Super;

	int *HVPtr;
	int hTorso;
	int hLarm;
	int hRarm;
	//int LegType; Later
	int hLegs;
	//The Big Kahuna
	int nAP;

	std::string HVAName;

	size_t sizeHVA;

	public:

	HeavyArmor* pHVA;

	HeavyArmor(){};
	HeavyArmor(HeavyArmor const& HVA){
		HVPtr = new int;
		*HVPtr = *HVA.HVPtr;
	};

	HeavyArmor(std::string vHVAName, int vHTorso, int vHLarm, int vHRarm, int vLegHP)
	{

	 HVAName = vHVAName;
	 hTorso = vHTorso;
	 hLarm = vHLarm;
	 hRarm = vHRarm;
	 hLegs = vLegHP;
	 
	};
		
	virtual ~HeavyArmor(){ delete HVPtr, pHVA;};

	virtual void neoHVA();
	virtual void neoHVA(int &nTorso, int &nLarm, int &Rarm, int &nLegs);
	virtual void printStats();

	//Setters
	 void setTorso(const int *sVA);
	 void setRightArm(const int *sVA);
	 void setLeftArm(const int *sVA);
	 void setLegs(const int *sVA);
	 void setHVAWeapons(const int WCount);
	
};

#endif