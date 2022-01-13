#include "responsable.h"
#include<iostream>


using namespace std;

responsable::responsable(string nm ,float ind ,string titre) : employee(nm , ind)
{

	this->titre = titre;

	this->sub = vector <employee*>(); //constructeur de la classe vector pour la creation d'un vecteur (tableau)

	

}

void responsable::affichage() const
{

	this->employee::affichage();
	
	cout << "le  titre: " << this->titre << endl;


	cout << "les employee direct : " << endl;


	for (int i = 0; i < this->sub.size(); i++)
	{

		cout << "employee direct N° " << i + 1 << " : ";
		
		this->sub[i]->affichage();
		
		cout << endl;

	}

}

void responsable::add_sub(employee *E)
{

	this->sub.push_back(E);


}


responsable::~responsable()
{

	this->sub.clear();
	cout << "destructeur d'un responsable" << endl;
}
