#include "Personnel.h"

Personnel::Personnel(string nm, double ind ) : employee(nm, ind)
{
	this->pers = vector<employee*>();
}



float Personnel::sm_salaire() const
{
	float sal_t=0;

	for (int i = 0; i < this->pers.size() ; i++)
	{

		sal_t = sal_t + this->pers[i]->cal_sal();

	}
	return sal_t;
}

void Personnel::ajouter(employee* p)
{

	this->pers.push_back(p);

}


Personnel::~Personnel() 
{

	cout << "destructeur d'un Personnel" << endl;


}
