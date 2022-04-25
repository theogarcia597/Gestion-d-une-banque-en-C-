#include <iostream>
#include <string>
#include "Titulaire.h"
#include "Date.h"
#include  <vector>
using namespace std;

#ifndef COMPTE_H_
#define COMPTE_H_

/* class Compte; */

class Compte /*: public Titulaire*/
{
protected :
    static int id;
    int num_id; //numéro d'identification du compte
    double solde; //solde du compte
    Titulaire titulaire;
    Date date_ouverture;

public:
    Compte();
    Compte(double solde2, Titulaire titulaire2, Date date);
    Compte(const Compte & c);
	void AfficherTitulaire(); // Affiche le titulaire et l'ID
    void AfficherCompte();
    void RentrerArgent();
    virtual void RetraitArgent();
    void Virement(Compte &compte1);
    void DateOuverture();
	virtual ~Compte();
    double GetSolde();
    void SaisirCompte();
};

#endif
