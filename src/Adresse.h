#include <iostream>
#include <string>
using namespace std;

#ifndef ADRESSE_H_
#define ADRESSE_H_

class Adresse 
{
    private: 
        int numero_voie;
        string nom_voie;
        string ville;
        int code_postal;

    public: 
        Adresse();
        Adresse(int num_voie, string nom = "rue de la Rue", string v = "Toulouse", int postal = 31000);
        Adresse(const Adresse &a);
        void SaisirAdresse();
        void AfficherAdresse() const ;
        void CopierAdresse( const Adresse &lieu);
        void ModifierAdresse();
        virtual ~Adresse();

};

#endif