#pragma once
#include "employee.h"
#include<vector>

class Personnel : public employee
{
private:
	vector<employee*>pers;

public:
	Personnel(string nm, double ind);

	float sm_salaire()const;
	void ajouter(employee* p);

	~Personnel();
};

