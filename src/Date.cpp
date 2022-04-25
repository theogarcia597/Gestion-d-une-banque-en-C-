#include "Date.h"

bool Date::check()
{
    if((jour<1 && jour>31) || (mois<1 && mois>12) || (annee>2050))
        return false;
    else
        return true;
}


istream& operator>> (istream& in, Date &D)
{ do
    {
       
        cout << "Saisissez le jour: ";
        in >> D.jour;
        cout << "Saisissez le mois: ";
        in >> D.mois;
        cout << "Saisissez le l'annee: ";
        in >> D.annee;
        return in;
        if(D.check()==false)
            cout << "Date invalide:" << endl;
    }while(D.check()==false);
}
       

ostream& operator<< (ostream& out, Date &D)
{
    out << D.jour << "/" << D.mois << "/" << D.annee << endl;
    return out;
}

Date &Date::operator=(const Date & d) 
{
    this->jour = d.jour;
    this->mois = d.mois;
    this->annee = d.annee;

    return *this;
}

Date Date::operator+(const int & m) {
	//les variables
	//int temp;

	mois = mois + m;

	return *this;
}

//constructeur par défault
Date::Date()
{
    jour = 01;
    mois = 01;
    annee = 00;
}
//constructeur par paramètre

Date::Date(const int &j, const int &m, const int &a)
{
    jour=j;
    mois=m;
    annee=a;
    cout << "passage dans le constructeur avec parametre" << endl;
}
//constructeur par copie

Date::Date(const Date &copie)
{
    jour=copie.jour;
    mois=copie.mois;
    annee=copie.annee;
    cout << "passage dans constructeur par copie" << endl;
}

