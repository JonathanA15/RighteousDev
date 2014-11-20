//Memory test

#include <string>
#include <iostream>
#include <vector>

int *ptr;
int stp;

using namespace std;
//class Entity

/*{


private:

Entity(Entity const& RHS);

public:

virtual void Entity::entity() = 0;

virtual void Entity::MaxHP() = 0;


}

*/

//MyClass::MyClass(MyClass& const CCS); Copy Constructor;


//Error Check



template<typename T>
T CatchCheck(T Ty)
{
	if (Ty > 5 )
	{
	  throw "Illegal input";
	}

};



//void spawnEngine()




	//Coming after break:



/*
std::cout << "Set parts" << std::endl;

for (std::vector<int>::iterator kt; kt != SpawnShepard.end(); kt++)
{
	VAPart VAP;
	std::cin >> nPut;

}

std::cin >> nPut;
CatchCheck(nPut);

*/


/*
int checkReady()
{


}
*/




void PushNameElement(std::string const& VANPush)
{
	sts = 0;
	while(sts < sts + 1)
	{
		
		NameLibrary.at(sts)= VANPush;
		sts++;
	}
};

void PushVAData (int const& VAData)
{
	stv = 0;
	while(stv < stv + 1)
	{
		SpawnVAShepard.at(stv)= VAData;
		stv++;
	}

}