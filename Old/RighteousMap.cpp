#include "RighteousReference.h"
#include "RighteousMap.h"

void RighteousMap::neoMap(int &CoordX, int &CoordY)
{
	for(CoordX = 0; CoordX <10; CoordX++)
	{
		for(CoordY = 0; CoordY < 10; CoordY++)
		{

			if(npRighteousMap[CoordX][CoordY] == RighteousMap::PlayerPos)
			{
				npRighteousMap[CoordX][CoordY] = 9;
			}
			
			if(npRighteousMap[CoordX][CoordY] == RighteousMap::EnemyPos)
			{
				npRighteousMap[CoordX][CoordY] = 8;
			}
			npRighteousMap[CoordX][CoordY] =  0,0,0,0,0,0,0,0,0,0,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  1,1,1,1,1,1,1,1,1,1,
											  0,0,0,0,0,0,0,0,0,0;

		}

	}


};