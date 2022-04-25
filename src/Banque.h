#include <iostream>
#include <string>
using namespace std;

#ifndef BANQUE_H_
#define BANQUE_H_

#include "Titulaire.h"


class Banque 
{
    private : 
        string nom;
        Titulaire clients[50];

    public:
        Banque();
        Banque(Titulaire T);
        void SaisirClients();
        //void AfficherSolde(const Compte &c1);
        int RechercherClients();
        void SaisirCompteCourant(int i);
        void SaisirCompteEpargne(int i);
        void SaisirComptebloque(int i);
        void SaisirComptePEL(int i);
        void SaisirCompteEcompte(int i);
        void RetraitArgent(int no_client, int num_compte);
        void RentrerArgent(int no_client, int num_compte);
        virtual~Banque();   
        void AfficherSolde(int no_client, int num_compte) const;
        void ModifierAdresse(int no_client);
        
};

#endif