//============================================================================
// Name        : G4-Banque.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "CompteCourant.h"

/*CompteCourant::CompteCourant(double agio, double decouvert, double operations [10] )
    { 
        this->agio=agio;
        this->decouvert=decouvert;
        
        
    }*/

CompteCourant::CompteCourant()
{
    int i;
    for(i=0; i<10; i++)
        operations[i]=0;
    agio=0;
    decouvert=-100;
}

void CompteCourant::SaisirCompte()
{ 
    Date D;
    cout << "Saisir la Date d'ouverture du compte: " << endl;
    cin >> D ;
    RentrerArgent();
}

void CompteCourant::RentrerArgent()
{
    double ajouter;
    cout << "saisir le montant à ajouter: ";
    cin >> ajouter;
    solde = solde + ajouter;
    if (ajouter != 0)
        EnregistrerOperation(ajouter);


}

void CompteCourant::RetraitArgent()
{       
    double retirer;
    double solde_temp;

    cout << "Saisir le montant à retirer : ";
    cin >> retirer;

    if (retirer != 0)
       {

        solde_temp = solde - retirer;

        if (solde_temp >= decouvert)
            {
                EnregistrerOperation(-retirer);
                solde = solde_temp;
            }
        else
            {
                cout << "Vous ne pouvez retirer cette somme car cela vous ferez dépassé votre decouvert autorisé." << endl;
                cout << "Votre découvert autorisée qui est de " << decouvert << " euros." << endl;
            } 
       }   
}


void CompteCourant::EnregistrerOperation(double argent)
{ 
    int i;
    //rajoute la valeur Argent dans le tableau si le tableau est vide
    for(i=0;i<10;i++)
    {
        if (operations[i] == 0)
            operations[i] = argent;
    }
    //si le tableau est rempli, décale toutes les valeurs du tableau et rajoute la dernière valeur en dernier
    if (operations[9] != 0)
    {
        for (i=0;i<9;i++)
            operations[i]=operations[i+1];
        operations[9] = argent;
    }
    
}

void CompteCourant::AfficherOperations() const
{
    int i;
    int j=10;

    cout << "Voici les 10 dernières opérations de la plus récente à la plus veille :" << endl;

    if (operations[0] == 0)
            cout << "Il n'y a pas eu d'opérations dans le passer." << endl;
    else{
        for (i = 0 ; i < 10 ; i++)
        {
            j = j - 1;
            
            if (operations[j] != 0)
                    cout << "Opération " << i << " : " << operations[j] << endl;
        }}
}



CompteCourant::~CompteCourant()
{

}
