//============================================================================
// Name        : G4-Banque.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "PEL.h"
#include "CompteBloque.h"
#include "e-compte.h"
#include "Banque.h"

int main()
{
    int menu;
    int choix1;
    int no_client;
    Adresse ad1(5, "rue", "toulouse", 31000);
    Titulaire t1("Jean", "Jacques", ad1, "0523568923");
    Banque banque(t1);
    /*CompteCourant compte;
    CompteCourant compte1;
    CompteCourant compte2;
    CompteCourant compte3;
    CompteCourant compte4;
    CompteEpargne compte2[10];
    CompteBloque compte3[10];
    PEL compte4[10];
    e-compte compte5[10];*/


cout << "---------- Bonjour et bienvenue sur le programme du groupe 4 -----------" << endl;

do
{
    cout <<" ----------------------- MENU -----------------------"<<endl;
            cout<<"1. Ajouter un Titulaire"<<endl;
            cout<<"2. Ouvrir un Compte"<<endl;
            cout<<"3. Afficher un compte"<<endl;
            cout<<"4. Modifier les donnees d'un compte"<<endl;
            cout<<"5. Retirer de l'argent"<<endl;
            cout<<"6. Rentrer de l'argent"<<endl;
            cout<<"7. Faire un virement"<<endl;
            cout<<"8. Cloturer un compte"<<endl;
            cout<<"0. Quitter"<<endl<<endl;
            cout<<"Choix : ";
            cin>>menu;
            cout<<endl;

    switch(menu)
    {
        

            {
                case 0 : cout << "Fin du programme" << endl;
                break;

                case 1 : cout << "choix 1" << endl;
                            cout <<" ----------------------- Ajouter un Titulaire -----------------------\n"<<endl;
                            banque.SaisirClients();
                            cout << "Retour au menu principal" << endl;
                            break;
                        
                            
                case 2 : cout << "choix 2" << endl;
                            cout <<" ----------------------- ouvrir un compte -----------------------\n"<<endl;
                            no_client = banque.RechercherClients();
                            if (no_client == -1)
                            {
                               cout << "Ce client n'existe pas veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            cout<<"1. Ouvrir un nouveau compte courant"<<endl;
                            cout<<"2. Ouvrir un nouveau compte epargne"<<endl;
                            cout<<"3. Ouvrir un nouveau compte bloquer"<<endl;
                            cout<<"4. Ouvrir un nouveau compte PEL"<<endl;
                            cout<<"5. Ouvrir un nouveau compte e-compte"<<endl;
                            cin >> choix1;
                            switch(choix1)
                                {
                                    case 1: cout << "vous avez choisi d'ouvrir un compte courant" << endl;
                                            
                                            banque.SaisirCompteCourant(no_client);
                                        
                                        break;
                                    case 2: cout << "vous avez choisi d'ouvrir un compte epargne" << endl;  
                                            banque.SaisirCompteEpargne(no_client);
                                        break;
                                    case 3: cout << "vous avez choisi d'ouvrir un compte bloquer" << endl;
                                            banque.SaisirComptebloque(no_client);
                                        break;
                                    case 4: cout << "vous avez choisi d'ouvrir un compte PEL" << endl;
                                           banque.SaisirComptePEL(no_client);
                                        break;
                                    case 5: cout << "vous avez choisi d'ouvrir un e-compte" << endl;
                                            banque.SaisirCompteEcompte(no_client);
                                        break;
                                    default: cout << "Saisie non valide, retour au menu principal" << endl;
                                        break;
                                }
                           cout << "Retour au menu principal" << endl;
                break;
    
                case 3 : cout << "choix 3\n" << endl;;
                            cout <<" ----------------------- Afficher un compte -----------------------\n"<<endl;
                            no_client = banque.RechercherClients();
                            if (no_client == -1)
                            {
                               cout << "Ce client n'existe veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            cout<<"Afficher le solde d'un compte"<<endl;
                            banque.AfficherSolde(no_client, 0);
                            cout << "Retour au menu principal" << endl;
                
                break;
    
                case 4 : cout << "choix 4" << endl;
                            cout <<" ----------------------- Modifier un compte -----------------------"<<endl;
                            no_client = banque.RechercherClients();
                            if (no_client == -1)
                            {
                               cout << "Ce client n'existe veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            banque.ModifierAdresse(no_client);
                            cout << "Retour au menu principal" << endl;
                            break;
    
                case 5 : cout << "choix 5" << endl;
                            cout <<" ----------------------- Retirer de l'argent -----------------------"<<endl;
                            no_client = banque.RechercherClients();
                            if (no_client == -1)
                            {
                               cout << "Ce client n'existe veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            banque.RetraitArgent(no_client,0);
                            cout << "Retour au menu principal" << endl;
                                    
                break;

                case 6 : cout << "choix 5" << endl;
                            cout <<" ----------------------- Rentrer d'argent -----------------------"<<endl;
                            no_client = banque.RechercherClients();
                            if (no_client == -1)
                            {
                               cout << "Ce client n'existe veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            banque.RentrerArgent(no_client,0);
                            cout << "Retour au menu principal" << endl;
                break;
    
                case 7 : cout << "choix 6" << endl;//Virement();
                            cout <<" ----------------------- Virement -----------------------"<<endl;
                            cout << "Fonctionnalités pas encore disponible" << endl;
                        cout << "Retour au menu principal" << endl;
                            /* client = banque.RechercherTitulaire();
                            if (client == -1)
                            {
                               cout << "Ce client n'existe veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            no_client2 = banque.RechercherTitulaire();
                            if (no_client2 == -1)
                            {
                               cout << "Ce client n'existe pas, veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            cout<<"1. Virement sur un compte courant"<<endl;
                            cout<<"2. Virement sur un compte epargne"<<endl;
                            cout<<"3. Virement sur un compte bloquer"<<endl;
                            cout<<"4. Virement sur un compte PEL"<<endl;
                            cout<<"5. Virement sur un compte e-compte"<<endl;
                            cin >> choix1;
                            switch(choix1)
                                {
                                    
                                    case 1: cout << "vous avez choisi de retirer un compte courant" << endl;
                                            //RetirerCompte();
                                        break;
                                    case 2: cout << "vous avez choisi de retirer un compte epargne" << endl;  
                                            //RetirerCompte();
                                        break;
                                    case 3: cout << "vous avez choisi de retirer un compte courant" << endl;
                                            //RetirerCompte();
                                        break;
                                    case 4: cout << "vous avez choisi de retirer un compte courant" << endl;
                                            //RetirerCompte();
                                        break;
                                    case 5: cout << "vous avez choisi de retirer un compte courant" << endl;
                                            //RetirerCompte();
                                        break;
                                    default: cout << "Saisie non valide, retour au menu principal" << endl;
                                        break;
                                }*/
                break;
    
                case 8 : cout << "choix 7" << endl;//Cloturer();
                             cout <<" ----------------------- Cloturer un compte -----------------------"<<endl;
                             cout << "Retour au menu principal" << endl;
                             cout << "Fonctionnalités pas encore disponible" << endl;
                            /*client = banque.RechercherTitulaire();
                            if (client == -1)
                            {
                               cout << "Ce client n'existe veuillez le saisir dans le menu principal à ajouter un titulaire" << endl;
                               break;
                            }
                            cout<<"1. Cloturer un compte courant"<<endl;
                            cout<<"2. Cloturer un compte epargne"<<endl;
                            cout<<"3. Cloturer un compte bloquer"<<endl;
                            cout<<"4. Cloturer un compte PEL"<<endl;
                            cout<<"5. Cloturer un compte e-compte"<<endl;
                            cin >> choix1;
                            switch(choix1)
                                {
                                    
                                    case 1: cout << "vous avez choisi de Cloturer un compte courant" << endl;
                                            //RetirerArgent();
                                        break;
                                    case 2: cout << "vous avez choisi de Cloturer un compte epargne" << endl;  
                                            //RetirerArgent();
                                        break;
                                    case 3: cout << "vous avez choisi de Cloturer un compte bloque" << endl;
                                            //RetirerArgent();
                                        break;
                                    case 4: cout << "vous avez choisi de Cloturer un compte PEL" << endl;
                                            //RetirerArgent();
                                        break;
                                    case 5: cout << "vous avez choisi de Cloturer un e-compte" << endl;
                                            //RetirerArgent();
                                        break;
                                    default: cout << "Saisie non valide, retour au menu principal" << endl;
                                        break;
                                }*/
                break;

                default : cout << "choix invalide" << endl;
                break;
            }
    
        




    }
}
while (menu!=0);
}

