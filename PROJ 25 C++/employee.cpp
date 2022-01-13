#include "employee.h"
#include<iostream>


using namespace std;


int employee::cpt = 0;
float employee::augmentation = 5;


employee::employee(string nm , float ind) :matricule(++employee::cpt)
{

    this->nom = nm;
    this->indice_sal = ind;

}


employee::employee(const employee& E) : matricule(++employee::cpt)
{

    this->nom = E.nom;
    this->indice_sal = E.indice_sal;  

}


void employee::affichage() const
{

    cout << "le nom de l'employe " << this->nom << endl;
    cout << "le matricule de l'employe " << this->matricule << endl;
    cout << "l'indice_sal de l'employe " << this->indice_sal << endl;
    cout << "l'augmentation de l'employe " << employee::augmentation << endl;

}

float employee::cal_sal() const
{

    double salaire;

    salaire = this->indice_sal * employee::augmentation;

    return salaire;

}


void employee::add_augmentation(float val)
{
    employee::augmentation += val;

}

employee::~employee()
{

    cout << "destructeur d'un employee  "  << endl;

}
