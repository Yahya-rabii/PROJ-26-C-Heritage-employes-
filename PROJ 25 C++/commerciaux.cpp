#include "commerciaux.h"




commerciaux::commerciaux(string nm, double ind, string titre , int p) :responsable(nm,ind,titre)
{
	this->prop = p;
}

void commerciaux::m_a_j_vente(int nbrv)
{
	float prov=0;

	for (int i = 0; i < nbrv; i++)
	{


		cout << "donne l'interessement de la vente " << i + 1 << endl;
		cin >> prov;

		this->prop = this->prop + prov;

	}


}

float commerciaux::cal_sal() const
{

    double salaire;

    salaire = this->indice_sal * this->prop;

    return salaire;
}

commerciaux::~commerciaux()
{

	cout << "destructeur d'un commercial" << endl;


}
