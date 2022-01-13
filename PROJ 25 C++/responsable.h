#pragma once
#include "employee.h"
#include <iostream>
#include <vector> // STL 

using namespace std;

class responsable :public employee
{

private:

	vector <employee*> sub;
	string titre;

public:

	responsable(string nm, float ind , string titre);
	
	void affichage() const override;
	
	void add_sub (employee *E);

	~responsable();

};