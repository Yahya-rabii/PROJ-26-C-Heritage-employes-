#pragma once
#include "responsable.h"

class commerciaux : public responsable
{


private:

    float prop;


public:

	commerciaux(string nm, double ind, string titre, int p);
	void m_a_j_vente(int nbrv);
	float cal_sal()const;
	~commerciaux();


};
