#pragma once
#include <iostream>

using namespace std;

class employee
{


protected:

	string nom;
	const int matricule;
	float indice_sal;
	static int cpt;
	static float augmentation;

public:
	
	
	employee(string nm  , float ind ); 

	employee(const employee & E);


	
	virtual void affichage()const;

	float cal_sal ()const;

	void add_augmentation(float val);

	~employee();
};