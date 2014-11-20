#ifndef RIGHTEOUSCUSTOMIZATIONSYSTEM_H_
#define RIGHTEOUSCUSTOMIZATIONSYSTEM_H_

#include "RighteousReference.h"
#include "VA.h"

class RCS
{

public:
	RCS(){};
	RCS(RCS const& RCS);
	~RCS(){};

	VA *NVA;
	int setParts()
	void CustomVA();
	void UseCustomVA();

};

#endif