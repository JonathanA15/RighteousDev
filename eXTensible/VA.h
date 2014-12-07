



/*
template<class Ty>
int PushInfo(HANDLE XR, int A, int B, int ID, const Ty& ty)
{
    Ty* va = reinterpret_cast<VA*>(XR)
	return va->makeGrayHound(true)

}
*/

/*
class HandleVA
{

private:
	VA* sva

	public:
		HandleVA(int nTorso):sva(new VA(nTorso)){}

		VA operator->() {return sva}


}
*/

#ifndef VA_H_
#define VA_H_

#include "RighteousReference.h"
#include "MemoryCore.h"

class VA;
class BushWall;
class GrayHound;

typedef void* HANDLE;

class VA
{
protected:
	int nTorso;
	int nLarm;
	int nRarm;
	int nLleg;
	int nRleg;
	float nAegis;
	std::string VAName;
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
	VA(int sTorso) : nTorso(sTorso) {}
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
		
	 virtual ~VA(){};
	 //virtual void neoVA(int nTorso, int nLarm, int Rarm, int nLleg, int nRleg, float nAegis);
	 virtual void printStats();
	
	//void CustVA();
	//int setBackpack(int const &vAegis);

	//Setters
	virtual void setTorso(const int *sVA);
	virtual void setRightArm(const int *sVA);
	virtual void setLeftArm(const int *sVA);
	virtual void setRightLeg(const int *sVA);
	virtual void setLeftLeg(const int *sVA);
	virtual void setAegis(float const  *sVA);
	//virtual void setAP(const int& nAP);
	//virtual void setVAName(const std::string VAN);
	//virtual void setCurrentWeapon(const int &VAWP);
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
	bool  CanGAegis(){return CanAegis;};
	int getAP(){return nAP;};
	
};

class GrayHound : public VA
{
private:
	int nTorso;
	int nLarm;
	int nRarm;
	int nLleg;
	int nRleg;
	float nAegis;
	std::string GrayHoundName;

public:

	GrayHound(){};
	~GrayHound(){};

	int makeGrayHound(bool isMake)
	{
		MemoryCore MCE;
	nTorso = 800;
	nLarm = 750;
	nRarm = 500;
	nLleg = 500;
	nRleg = 600;
    nAegis = 55.5;

	MCE.MemoryPreparation(10);
	MCE.PushVAData(nTorso);
	MCE.PushVAData(nLarm);
	MCE.PushVAData(nRarm);
	MCE.PushVAData(nLleg);
	MCE.PushVAData(nRleg);
	MCE.PushVAData(nAegis);
	return nTorso;
	}

	int PushInfo(HANDLE XR, int A, int B)//int ID
{
    GrayHound* va = reinterpret_cast<GrayHound*>(XR);
	return va->makeGrayHound(true);

};

    std::string GetName()
	{
		GrayHoundName = "GrayHound";
		return GrayHoundName;
	}
};






class BushWall : public VA
{
private:
	int nTorso;
	int nLarm;
	int nRarm;
	int nLleg;
	int nRleg;
	float nAegis;
	std::string BushWallName;

public:

	BushWall(){};
	~BushWall(){};

	std::string GetName()
	{
		BushWallName = "BushWall";
		return BushWallName;
	}

		void makeBushWall(bool isMake)
	{
		nTorso;
	nLarm = 750;
	nRarm = 500;
	nLleg = 500;
	nRleg = 600;
    nAegis = 55.5;
	}
};

	/*
	void makeBushWall()
	{
	 nTorso = 650;
	 nLarm = 550;
	 nRarm = 550;
	 nLleg = 600;
	 nRleg = 600;
	 nAegis = 0;
	}
	*/


class HeavyArmor
{
	private:

	int *HVPtr;
	int hTorso;
	int hLarm;
	int hRarm;
	//int LegType; Later
	int hLegs;
	int nAP;
	std::string HVAName;
	size_t sizeHVA;

	public:

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
		
	virtual ~HeavyArmor(){};

	virtual void neoHVA();
	virtual void neoHVA(int &nTorso, int &nLarm, int &Rarm, int &nLegs);
	virtual void printStats();

	typedef HeavyArmor Super;
	HeavyArmor* pHVA;

	//Setters
	 void setTorso(const int *sVA);
	 void setRightArm(const int *sVA);
	 void setLeftArm(const int *sVA);
	 void setLegs(const int *sVA);
	 void setHVAWeapons(const int WCount);
	
};

#endif