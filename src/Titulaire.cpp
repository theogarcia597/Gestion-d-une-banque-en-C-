#include "Titulaire.h"
#include "Compte.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "CompteBloque.h"
#include "e-compte.h"
#include "PEL.h"

Titulaire::Titulaire()
{
    Adresse a;

    nom     = "Robert";
    prenom  = "Roberta";
    adresse.CopierAdresse(a);
    numero_telephone = "0123456789";
}

Titulaire::Titulaire(string n, string p, Adresse a, string phone)
{
    nom = n;
    prenom = p;
    adresse.CopierAdresse(a);
    numero_telephone = phone;
}

Titulaire::Titulaire(const Titulaire & t)
{
    nom     = t.nom;
    prenom  = t.prenom;
    adresse.CopierAdresse(t.adresse);
    numero_telephone = t.numero_telephone;
}

void Titulaire::SaisirTitulaire()
{
    cout << "Saisissez les informations du client " << endl;
    
    cout << "Nom: ";
    cin >>  nom ;
    cout << "Prénom: " ;
    cin >> prenom;
    cout << "Adresse: " << endl ;
    adresse.SaisirAdresse() ;
    cout << "Numéro de téléphone: ";
    cin >> numero_telephone ;

}

void Titulaire::AfficherTitulaire() const 
{
    cout << "Voici les informations du titulaire" << endl;
    cout << "*********************************** " << endl;
    cout << "Nom: " ;
    cout << nom ;
    cout << "Prénom: " ;
    cout << prenom ;
    cout << "Adresse: " ;
    adresse.AfficherAdresse();
    cout << "Numéro de téléphone: "; 
    cout << numero_telephone ;
    
}

void Titulaire::CopierTitulaire(const Titulaire &Personne) {
    nom  = Personne.nom;
    prenom  = Personne.prenom;
    adresse.CopierAdresse(Personne.adresse);
    numero_telephone = Personne.numero_telephone;
}

bool Titulaire::ComparerTitulaire(const string &n, const string &p) const
{
    return prenom == p && nom == n;
}

void Titulaire::SaisirCompteCourant()
{
    CompteCourant *c1 = new CompteCourant;
    tab_compte.push_back(c1);
    c1->SaisirCompte();
}

void Titulaire::SaisirCompteEpargne()
{
    CompteEpargne *c1 = new CompteEpargne;
    tab_compte.push_back(c1);
    c1->SaisirCompte();
}

void Titulaire::SaisirComptebloque()
{
    CompteBloque *c1 = new CompteBloque;
    tab_compte.push_back(c1);
    c1->SaisirCompte();
}

void Titulaire::SaisirComptePEL()
{
    ComptePEL *c1 = new ComptePEL;
    tab_compte.push_back(c1);
    c1->SaisirCompte();
}

void Titulaire::SaisirCompteEcompte()
{
    Ecompte *c1 = new Ecompte;
    tab_compte.push_back(c1);
    c1->SaisirCompte();
}

void Titulaire::RetraitArgent(int num_compte)
{
    tab_compte[num_compte]->RetraitArgent();
}

void Titulaire::RentrerArgent(int num_compte)
{
    tab_compte[num_compte]->RentrerArgent();
}

void Titulaire::ModifierAdresse()
{
    adresse.ModifierAdresse();
}

Titulaire::~Titulaire()
{
    // Destructeur
}

string Titulaire::getprenom()
{
    return prenom;
}

string Titulaire::getnom()
{
    return nom;
}

double Titulaire::GetSolde(int num_compte) const
{
    return tab_compte[num_compte]->GetSolde();
}


