#include "RighteousReference.h"
#include "VA.h"
//VA(int vTorso, int vLarm, int vRarm, int vLleg, int vRleg, int vAegis, int vBackpack[5]);


Weapon *VAWeapon;

void VA::neoVA(int &nTorso, int &nLarm, int &Rarm, int &nLleg, int &nRleg, float &nAegis)
	{
		 pVA->setTorso(&nTorso);
		 pVA->setLeftArm(&nLarm);
		 pVA->setLeftLeg(&nLleg);
		 pVA->setRightArm(&Rarm);
		 pVA->setRightLeg(&nRleg);
		 pVA->setAegis(&nAegis);

    };
	//void CustVA();

 
 	void VA::setTorso(const int *sVA){
		nTorso = *sVA;
		delete sVA;
	};

	void VA::setRightArm(const int *sVA){
		nRarm = *sVA;
		delete sVA;
	};

	void VA::setLeftArm(const int *sVA){
		nLarm = *sVA;
		delete sVA;
	};

	void VA::setRightLeg(const int *sVA){
		 nRleg = *sVA;
		 delete sVA;
	};

	void VA::setLeftLeg(const int *sVA){
		nLleg = *sVA;
		delete sVA;
	};

	void VA::setAegis(const float* sVA){
		nAegis = *sVA;
		delete sVA;
	};

	//int setBackpack();
	//int setHead();
	void VA::printStats()
	{
		std::cout << pVA->getTorso() << std::endl;
		std::cout << pVA->getRightArm() << std::endl;
		std::cout << pVA->getLeftArm() << std::endl;
		std::cout << pVA->getLeftLeg() << std::endl;
		std::cout << pVA->getRightLeg() << std::endl;
	}

	
	