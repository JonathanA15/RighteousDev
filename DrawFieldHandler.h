#ifndef DRAWFIELDHANDLER_H
#define DRAWFIELDHANDLER_H

#include <iostream>
#include <vector>
#include <map>


class DrawFieldHandler
{

private:

	//Small 5x5 Map
	static const int m_MAPWD = 5;
	static const int m_MAPHT = 5;
	int m_X ; 
	int m_Y;
	char* m_Token;
	int fMap[m_MAPWD * m_MAPHT];
	bool m_Wall;


public:

	//Default constructor
	DrawFieldHandler() {}

	//Constructor
	DrawFieldHandler(int nMAPWD, int nMAPHT, int CoordX, int CoordY, int nX , int nY, int nPosX, int nPosY, char* mapToken, bool bWall)
	{
		SetMapSize(nMAPWD, nMAPHT);
		PosToken(mapToken);
		SetXY (nX,nY);
		SetWall (bWall);
		DrawField(nMAPWD, nMAPHT, bWall); 
		


	}
	//Sets the values of the public variables outside our trusty wall boolean
	void SetMapSize(int nMAPWD, int nMAPHT)
	{
		nMAPWD = m_MAPWD;
		nMAPHT = m_MAPHT;
	}


	void PosToken(char* mapToken)
	{
		mapToken = m_Token;
	}

	void SetXY (int nX, int nY)
	{
		nX = m_X;
		nY = m_Y;
	}

	//Sets the bool
	void SetWall (bool bWall)
	{
		bWall = m_Wall;
	}

	
	//Draws the ingame map. 0s represent walls (|) while 1s are open spaces (#)
	void DrawField(int m_MAPWD, int m_MAPHT,bool m_Wall)
	{
		

	//next chunck of work: a functioning coordinate system!  
		//Array implementation
	//int nMap[m_PosX][m_PosY] = {0,1,1,0,1,1,0,1,1,0,1,1,0,1,1
	//,0,1,1,0,1,1,0,1,1,0};

		//STL Container Implementation (MAP Container)
		//std::map<std::string, int> map;

		//map["Test"] = 2;
		//map["Test2"] = 3;
	

	for(m_Y = 0; m_Y <= m_MAPHT; m_Y++)
		{
			std::cout<< "|";
			m_Wall = true;
		
		 for (m_X = 0; m_X <= m_MAPWD; m_X++)
		  {
			  std::cout<< "#";
			  m_Wall = false;

		  }
				 if(m_X > m_MAPWD)
				  {
					  std::cout<< "|";
					  m_Wall = true;
				  }
				  if(m_X = m_MAPWD)
				  {
					 std::cout << std::endl;
				  }
				
		}
			
	}

};                         


	  //Returns the properties of tiles, non functioning within the bigger picture atm.
	/*const int GetTile(int x, int y, int map[y*nMAPHT + x])
	{
	
		return map[(y*nMAPHT + x)] ]);
	}
	*/

	




#endif