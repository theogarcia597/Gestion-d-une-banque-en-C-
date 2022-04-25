#include <iostream>
#include <string>
using namespace std;


#ifndef DATE_H_
#define DATE_H_

//#include "classe.h"

class Date
{
private :

        int jour;
        int mois;
        int annee;

        bool check();
public : 
        friend istream& operator>> (istream& in, Date &D);
                //fonction amie d'affichage
        friend ostream& operator<< (ostream& out, Date &D);

        Date &operator=(const Date & d);

        //Constructeur par défault
        Date();
        //Constructeur par paramètre
        Date(const int &j, const int &m, const int &a);

        Date(const Date &copie);
        
        //Ajoute un nombre nb d'année à une date
        Date operator+(const int & nb);
};

#endif