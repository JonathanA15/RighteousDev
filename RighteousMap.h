#ifndef MAP_H_
#define MAP_H_


class Tile
{

private:
	int TileType;

public:

	enum Tiles
	{
		NULLTILE,
		GRASSTILE,
		MOUNTAINTILE,
		FORESTTILE
	};
	Tile(){};
	~Tile(){};

	void Tiles (int &TileType);
};

class RighteousMap
{
private:
	int CoordX;
	int CoordY;
	int PlayerPos;
	int EnemyPos;
	int npRighteousMap[10][10];

public:

	RighteousMap(){};
	RighteousMap(int vPlayerPos, int vEnemyPos,int vCoordX, int vCoordY){
	PlayerPos = npRighteousMap[2][2];
	EnemyPos =  npRighteousMap[7][6];
	CoordX = vCoordX;
	CoordY = vCoordY;
	PlayerPos = vPlayerPos;
	EnemyPos = vEnemyPos;
	};

	~RighteousMap(){};

	void neoMap(int &CoordX, int &CoordY);

	int getPlayerPos() {return PlayerPos;};
	int getEnemyPos() {return EnemyPos;};
	void setPlayerPos(int &PlayerPos);
	void setEnemyPos(int &EnemyPos);

	template<typename T>
	int FetchMap(T t1, T t2)
	{
		npRighteousMap[t1][t2]

		return npRighteousMap[t1][t2];
	}

};

#endif