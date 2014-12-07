#include "VA.h"
#include "RighteousReference.h"


	//void CustVA();

 
 	void VA::setTorso(int const *sVA){
		nTorso = *sVA;
		delete sVA;
	};

	void VA::setRightArm(int const *sVA){
		nRarm = *sVA;
		delete sVA;
	};

	void VA::setLeftArm(int const  *sVA){
		nLarm = *sVA;
		delete sVA;
	};

	void VA::setRightLeg(int const  *sVA){
		 nRleg = *sVA;
		 delete sVA;
	};

	void VA::setLeftLeg(int const  *sVA){
		nLleg = *sVA;
		delete sVA;
	};

	void VA::setAegis(float const * sVA){
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

	
	