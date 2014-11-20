#ifndef ENTITY_H_
#define ENTITY_H_

class Entity
{

private:
	int EType;

public:

	Entity(){};
	virtual ~Entity(){};
	
	virtual void NewEntity() = 0;


}