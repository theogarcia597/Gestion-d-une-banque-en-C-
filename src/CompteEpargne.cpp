//============================================================================
// Name        : G4-Banque.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "CompteEpargne.h"

#define INTERET  1

 CompteEpargne::CompteEpargne()
{
    
} 

/* void CompteEpargne::AfficherCompte()
{
    AfficherTitulaire();
    cout << "Solde actuel "<< C.solde << endl;

} */

void CompteEpargne::ModifierCompte()
{

}

double CompteEpargne::AjouterInteret()
{
    // AJOUTER DATE ET LA SURCHARGE DE L'OPERATOR + 

    double NouveauSolde;
    double interet ;
    interet= solde*(INTERET/100);
    cout << "Le client " << titulaire.getprenom() << titulaire.getnom() << " a comptabilsé "<< interet  << " euros " << endl;
    NouveauSolde = solde + interet;
    cout << "Voici votre nouveau solde: ";
    return NouveauSolde;
}

/* double CompteEpargne::RentrerArgent()
{ 
    double ajouter;
        cout << "saisir le montant à ajouter: ";
        cin >> ajouter;
        solde = solde + ajouter;
        return solde;
} */

CompteEpargne::~CompteEpargne()
{
    // Destructeur
}