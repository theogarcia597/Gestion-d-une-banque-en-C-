//============================================================================
// Name        : G4-Banque.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef COMPTECOURANT_H_
#define COMPTECOURANT_H_

#include "Compte.h"

class CompteCourant : public Compte
{
private:

    double agio;
    double decouvert;
    double operations [10];
    /*double argent_depense*/ //pour savoir quand on arrive au plafond
    

public:

    CompteCourant();
    // CompteCourant(double agio=8, double decouvert= -500);
    void SaisirCompte();
    //void CalculAgioCompteCourant();
    void RentrerArgent();
    void RetraitArgent();
    void EnregistrerOperation(double argent);
    void AfficherOperations() const;
    //void CloturerCompteCourant();
    virtual ~CompteCourant();




/*ModifierTitulaire()*/

};


#endif
