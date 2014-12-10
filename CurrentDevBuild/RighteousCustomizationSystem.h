#include "RighteousReference.h"

class RighteousCustomizationSystem
{
	
public:
RighteousCustomizationSystem(){};
~RighteousCustomizationSystem(){};
MemoryCore MC;
BushWall bushWall;
GrayHound grayHound;
VA VAR;
void CustomizeVA();
void CustomizeWeapon();
void UpgradeVA();
void UpgradeWeapon();
void ShiftMaterial();
void CustomVA() {
int selfHelp;
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
}
void CustomizeVA()
{
char LimbSelect;
char ModSelect;
int SelectOrder;
std::cin >> ModSelect;
std::cout << "Customize (E)xternal or (I)nternal" << std::endl;
if(ModSelect == "E")
{
std::cout << "Select limb: " << std::endl;
std::cout << "(H)ead (T)orso (R)ight Arm (L)eft Arm (RI)ght Leg (LE)ft Leg (B)ackpack " std::endl;
std::cin >> LimbSelect;
//std::cin >> SelectOrder;
if(LimbSelect == H)
{
//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
else if(LimbSelect == "T")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
else if(LimbSelect == "R")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;" 
}
else if(LimbSelect == "L")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
else if(LimbSelect == "RI")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
else if(LimbSelect == "LE")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
else if(LimbSelect == "B")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
}
else if(ModSelect == "I")
{
	//std::cout << "Head Stats:" <<  VAR.head<< std::endl;"
}
}
void CustomizeWeapon()
{
	std::vector GunArray<int>;
	std::vector<int>::iterator GA;
	
	GunArray.reserve(3)
	std::cout << "Current Weapon stats are: " << std::endl;
	for(int i = 0; i < )
		{
		GunArray(GA);
		GA++;
		}
	}
	
