#include <iostream>

#include"employee.h"
#include"responsable.h"
#include"commerciaux.h"
#include"Personnel.h"

using namespace std;

int main()
{
    /*
	employee *E1 = new employee("employee1", 20);
	employee *E3 = new employee("employee3", 25);
	
	responsable *R1=new responsable ("resp 1", 30 , "Ceo");
	responsable *R2=new responsable ("resp 2", 35 , "chef_equipe");


	

	R1->add_sub(E1);

	R1->add_sub(R2);

	R2->add_sub(E3);



    R1->affichage();

    */////////////
    Personnel* P1 = new Personnel("p1",11);
    commerciaux* C1 = new commerciaux ("c1", 15,"chef vente", 80);
    
    P1->ajouter(C1);
    
    commerciaux* C2 = new commerciaux("c2", 17, "chef compt", 90);
    P1->ajouter(C2);

    
    employee* E1 = new employee("E1", 30);
    P1->ajouter(E1);
    
    employee* E2 = new employee("E2", 40);
    P1->ajouter(E2);
    
   


    responsable* R1 = new responsable("resp 1", 30, "Ceo");
   

    P1->ajouter(R1);
    
    
    responsable* R2 = new responsable("resp 2", 35, "chef_equipe");
    P1->ajouter(R2);


    R1->add_sub(R2);
    R1->add_sub(E1);
    R1->add_sub(C1);
    R1->add_sub(C2);
  
    R1->affichage();

    cout << endl;
    

    cout << "salaire total : " << P1->sm_salaire() << endl;


}

