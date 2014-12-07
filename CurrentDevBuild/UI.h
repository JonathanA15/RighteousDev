#ifndef UI_H_
#define UI_H_

#include "RighteousReference.h"


class UserInterface
{

private:

	int m_userSelect;

public:

	UserInterface(){};
	UserInterface(bool DB);

	void UserSelect();
	void QuitGame();

};



#endif