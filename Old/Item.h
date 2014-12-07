#ifndef ITEM_H_
#define ITEM_H_


class Item
{
private:
	int nItemType;
	int HpReg;
	std::string iItemName;

public:

	Item(){};
	~Item(){};

	void neoItem();
	int getType(){return nItemType;};
	int getRegain(){return HpReg;};


};

#endif