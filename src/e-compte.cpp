//============================================================================
// Name        : G4-Banque.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "e-compte.h"

#define SOLDEMINIMUM 10
/* #define OFFRE 50 */

Ecompte::Ecompte()
{
    
    solde = solde + 50 ;
    mail = "utilisateur@mail.com"; 
    /* cout << "Bonjour, Monsieur " << titulaire.getprenom() << titulaire.getnom() << endl;
    cout << "Nous avons le plaisir de vous annoncer que nous vous offrant "<< OFFRE <<"€" <<endl;
 */
}

void Ecompte::RetraitArgentEcompte()
{
    double retirer;
    double newsolde;
    
    cout << "saisir le montant à retirer: ";
    cin >> retirer;
    newsolde = solde - retirer;
    
    if (newsolde < SOLDEMINIMUM)
    {
        cout << "Erreur " << endl;
        cout << "Solde insuffisant " << endl;
    }
    else
        solde = newsolde;
}

/* void Ecompte::FermetureCompte()
{
    //Fermeture du compte au bout de 2 deux ans !!

} */

Ecompte::~Ecompte()
{

}