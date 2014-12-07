#ifndef RIGHTEOUSDRAWHANDLER_H_
#define RIGHTEOUSDRAWHANDLER_H_

#include "RighteousMap.h"
#include "RighteousReference.h"

class RDH
{
	private:
		RDH *nMap;

    public:

		RDH::RDH(){};
		RDH::RDH(RighteousMap *RDMap){};
		RDH::~RDH(){delete nMap, delete RDMap;};

		void RDH::RDHLoader(){};

}
#endif