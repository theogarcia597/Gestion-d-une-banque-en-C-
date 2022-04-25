#include "Compte.h"

//initialisation de la variable static ID de la classe Compte
int Compte::id = 1000000;

Compte::Compte()
{
    Titulaire t;
    Date d;
    num_id = id+1;
    id = id+1;
    solde = 0;
    titulaire.CopierTitulaire(t);
    date_ouverture = d;
}

Compte::Compte(double solde2, Titulaire titulaire2, Date date)
{   
    num_id = id+1;
    id = id+1;
    solde = solde2;
    titulaire.CopierTitulaire(titulaire2);
    date_ouverture = date;
    cout << "creation du compte : " << num_id << long(this);
    cout << " avec un solde de : " << solde << long(this);
}

Compte::Compte(const Compte & c)
{
    num_id = id+1;
    id = id+1;
    solde = c.solde;
    titulaire.CopierTitulaire(c.titulaire);
    date_ouverture = c.date_ouverture;
    cout << "creation du compte : " << num_id << long(this);
    cout << " avec un solde de : " << solde << long(this);
}

void Compte::AfficherTitulaire()
{
    cout << "Le titulaire du compte " << num_id << " : " << titulaire.getprenom() << " " << titulaire.getnom() << endl;
}

void Compte::AfficherCompte()
{
    AfficherTitulaire();
    cout << "solde actuel: " << solde << endl;
}

void Compte::RentrerArgent()
{ double ajouter;
    cout << "saisir le montant à ajouter: ";
    cin >> ajouter;
    solde = solde + ajouter;
}

void Compte::RetraitArgent()
{ 
    double retirer;
    double newsolde;
    
    cout << "saisir le montant à retirer: ";
    cin >> retirer;
    newsolde = solde - retirer;
    
    if (newsolde < 0){
        cout << "Erreur " << endl;
        cout << "Solde insuffisant " << endl;}
    else
        solde = newsolde;
}

void Compte::Virement(Compte &compte1)
{
    RentrerArgent();
    compte1.RetraitArgent();
}

void Compte::DateOuverture()
{
    cout << "date de creation du compte: " << endl;
    cin >> date_ouverture;
}

Compte::~Compte()
{

}

double Compte::GetSolde()
{
    return solde;
}

void Compte::SaisirCompte()
{ 
    Date D;
    cout << "Saisir la Date d'ouverture du compte: " << endl;
    cin >> D ;
    RentrerArgent();
}
