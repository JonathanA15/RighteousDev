#ifndef _MENUSELECTCLASS_H
#define	_MENUSELECTCLASS_H

#include "DrawFieldHandler.h"
#include <iostream>
#include <stdlib.h>


class MenuSelect
{
private:

	int m_userSelect;
	bool mEscapeScanner;

public:


	MenuSelect() {}

	MenuSelect(int nUserSelect, bool EscapeScanner)
	{
		SetUserSelection(nUserSelect);
		SetEscapeScanner(EscapeScanner);
		UserSelection();
		//NewDraw(DrawfieldHandler);
	}

	void SetUserSelection(int nUserSelect)
	{
		 nUserSelect = m_userSelect;
	}

	void SetEscapeScanner(bool EscapeScanner)
	{
		EscapeScanner = mEscapeScanner;
	}

	//void NewDraw(DrawfieldHandler NewDraw)
	//{
		//DrawfieldHandler NewDraw;
	//}


	void UserSelection()
	{
		DrawFieldHandler NewField; 
		int nUserSelect;
		
		Begin:
		do{
		std::cout << "Welcome to The Righteous Dev Build v0.2! \n \n" << std::endl;
		std::cout << "1. Start Demo	  \n" << std::endl;
		std::cout << "2. Start Debug mode \n" << std::endl;
		std::cout << "3. Show Credits \n" << std::endl;
		std::cin >> nUserSelect;
		}while (nUserSelect != 1 && nUserSelect != 2 && nUserSelect != 3);


		switch (nUserSelect) 
		{
			case(1) :
			NewField.DrawField(10,10, true);
			break;

			case(2) :
			std::cout << "Welcome to Debug mode. Highlight areas of the Map to return coordinates" << std::endl;
			NewField.DrawField(10,10, true);
			break;
		
			case(3) :
			std::cout <<"\n Righteous Team: Miles J. Litteral, Jonathan Alicea, David Alvarado \n Demo Programming: Righteous Team \n "<< std::endl;
			goto Begin;
			break;
		}

		//return nUserSelect;
	}
};


#endif