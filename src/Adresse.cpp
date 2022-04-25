#include "Adresse.h"

Adresse::Adresse()
{
    numero_voie = 1;
    nom_voie = "rue de la Rue";
    ville = "Toulouse";
    code_postal = 31000;
}

Adresse::Adresse(int num_voie, string nom, string v, int postal)
{
    numero_voie = num_voie;
    nom_voie = nom;
    ville = v;
    code_postal = postal;
}

Adresse::Adresse(const Adresse &a)
{
    numero_voie = a.numero_voie;
    nom_voie = a.nom_voie;
    ville = a.ville;
    code_postal = a.code_postal;
}

void Adresse::SaisirAdresse()
{
    cout << "Saisissez l'adresse" << endl; 
    cout << "-------------------" << endl;
    cout << "Numero de voie : " ;
    cin >> numero_voie ;
    cout << " Nom de voie : " ;
    cin >>  nom_voie ;
    cout << "Ville : " ;
    cin >> ville ;
    cout << "Code postale : " ;
    cin >> code_postal ;

}

void Adresse::AfficherAdresse() const 
{
    cout << "Voici l'adresse du client " << endl;
    cout << "*********************************** \n" << endl;
    cout << nom_voie << nom_voie << code_postal << ville << endl;
}

void Adresse::CopierAdresse(const Adresse &lieu) {
    numero_voie  = lieu.numero_voie;
    nom_voie = lieu.nom_voie;
    code_postal = lieu.code_postal;
    ville = lieu.ville;

}

void Adresse::ModifierAdresse()
{
    char entrer;
    do
    {    
    cout<< "Voulez vous modifier l'adresse de l'utilisateur ? Si vous le voulez, taper O sinon taper N." << endl;
    cin >> entrer;
    if(entrer=='O')
        SaisirAdresse();
    if(entrer=='N')
            cout<<"Vous avez décidé de ne pas la modifier. Vous allez etre redigigé vers le menu."<< endl;
    }
    while ((entrer!='O') && (entrer!='N')); //ça va retourer au menu
    
}

Adresse::~Adresse()
{
    // destructeur
}