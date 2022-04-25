//============================================================================
// Name        : G4-Banque.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

#ifndef COMPTEEPARGNE_H_
#define COMPTEEPARGNE_H_

#include "Compte.h"


class CompteEpargne : public Compte
{
    private :
        /* double interet; */
        

    public : 
        CompteEpargne();
        void AfficherCompte();
        void RentrerArgent();
        void ModifierCompte();
        double AjouterInteret();
        virtual ~CompteEpargne();

};

#endif
