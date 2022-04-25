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


#ifndef ECOMPTE_H_
#define ECOMPTE_H_

#include "Compte.h"



class Ecompte : public Compte
{
    private : 
        string mail;


    public :
        Ecompte();
       /*  void Saisircompte(); */
        void RetraitArgentEcompte();
    /*void FermetureCompte();
 */     virtual~Ecompte();

};
#endif
