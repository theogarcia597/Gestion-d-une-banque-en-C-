#include "Banque.h"

Banque::Banque()
{
    nom =" Banque MYLET";
}

Banque::Banque(Titulaire T)
{
    clients[5].CopierTitulaire(T);
}

void Banque::SaisirClients()
{
    
    char choix ;
    int i=0;
    cout << "Bienvenu chez Banque MYLET "<< endl;
    cout << "**************************" << endl;

   do
    {

        clients[i].SaisirTitulaire();
        cout << " Vous voulez continuer Oui ou Non (O/N)" << endl;
        cin >> choix ;
        i++;
    }
    while ((choix != 'N') && (i<50) );

}

/*
void Banque::AfficherSolde(const Compte &c1)
{
    cout << "La solde sur le compte est: " << clients[0].GetSolde(c1) << endl;
}
*/

int Banque::RechercherClients()
{
    string nom;
    string prenom;
    int i;

    cout << "Entrez le nom du client : ";
    cin >> nom;
    cout << "Entrez le prénom du client : ";
    cin >> prenom;

    for(i=0;i<50;i++)
    {
        if (clients[i].ComparerTitulaire(nom, prenom))
            return i;  
    } 
    return -1;
}

void Banque::SaisirCompteCourant(int i)
{
   clients[i].SaisirCompteCourant();
}

void Banque::SaisirCompteEpargne(int i)
{
   clients[i].SaisirCompteEpargne();
}

void Banque::SaisirComptebloque(int i)
{
   clients[i].SaisirComptebloque();
}

void Banque::SaisirComptePEL(int i)
{
   clients[i].SaisirComptePEL();
}

void Banque::SaisirCompteEcompte(int i)
{
   clients[i].SaisirCompteEcompte();
}

void Banque::RetraitArgent(int no_client, int num_compte)
{
    clients[no_client].RetraitArgent(num_compte);
}

void Banque::RentrerArgent(int no_client, int num_compte)
{
    clients[no_client].RentrerArgent(num_compte);
}

Banque::~Banque()
{

}

void Banque::AfficherSolde(int no_client, int num_compte) const 
{
cout << "Le compte a " << clients[no_client].GetSolde(num_compte)<< " euros."<< endl;
}

void Banque::ModifierAdresse(int no_client)
    {
        clients[no_client].ModifierAdresse();
    }

