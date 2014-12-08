#include "RighteousReference.h"

class RighteousCustomizationSystem
{
private:


public:

RighteousCustomizationSystem(){};
~RighteousCustomizationSystem(){};

MemoryCore MC;
BushWall bushWall;
GrayHound grayHound;
VA VAR;

void CustomVA() {
	int selfHelp;

	/*

	*/
	std::cout << "Welcome to the Hanger!" << std::endl;
	std::cout << "1)Customize VA 2)Customize Weapons 3)Upgrade VA 4)Upgrade Weapon 5)Change Material 6)View Stats."<< std::endl;

	switch(selfHelp)
	{
		case 1:
		//VAR.CustomizeVA();
		break;

		case 2:
		//VAR.CustomizeWeapon();
		break;

		case 3:
		//VAR.UpgradeVA();
		break;

		case 4:
		//VAR.UpgradeWeapon();
		break;

		case 5:
		//VAR.ShiftMaterial();
		break;

		case 6:
		//VAR.GetStats();
		break;
	}
};



//void UseCustomVA(){}

};