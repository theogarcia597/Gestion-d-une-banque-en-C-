#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef TITULAIRE_H_
#define TITULAIRE_H_

#include "Adresse.h"
class Compte;

class Titulaire
{
    private:
        string nom;
        string prenom;
        Adresse adresse;
        string numero_telephone;
        vector<Compte*> tab_compte;

    public:
        Titulaire();
        Titulaire(string n, string p, Adresse a, string phone);
        Titulaire(const Titulaire & t);
        void SaisirTitulaire();
        void AfficherTitulaire() const;
        void CopierTitulaire(const Titulaire &Personne);
        bool ComparerTitulaire(const string &n, const string &p) const;
        void SaisirCompteCourant();
        void SaisirCompteEpargne();
        void SaisirComptebloque();
        void SaisirComptePEL();
        void SaisirCompteEcompte();
        void RetraitArgent(int num_compte);
        void RentrerArgent(int num_compte);
        void ModifierAdresse();
        virtual ~Titulaire();
        string getprenom();
        string getnom();
        double GetSolde(int num_compte) const;

};

#endif
