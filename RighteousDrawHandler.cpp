#include "RighteousDrawHandler.h"


void RDH::RDHLoader()
{

int RDHX = 0;
int RDHY = 0;
int Xx = 0;
int Yy = 0;
int DrawCounter = 0;

RighteousMap RMap;
RMap.neoMap(Xx,Yy);

for(RDHX = 0; RDHX < 10; RDHX++)
  {
	for(RDHY = 0; RDHY < 10; RDHY++)
	{

		switch(RMap.FetchMap(RDHX,RDHY))
		{
		case 0:
			std::cout << "X";
		break;

		case 1:
			std::cout << "#";
		break;
		}

		if(RMap.FetchMap(RDHX,RDHY) == 9)
		{
		std::cout << "V" << std::endl;
		}
		else if(RMap.FetchMap(RDHX,RDHY) == 8)
		{
			std::cout <<"E" <<std::endl;
		}
		else if (RMap.FetchMap(RDHX,RDHY) != 9 && RMap.FetchMap(RDHX,RDHY) != 8)
		{
			std::cout <<"#" << std::endl;
		}

		DrawCounter++;

		if(DrawCounter == 10)
		{
			std::cout << std::endl;
		}

	 }

  }
};
