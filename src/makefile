banque.out: Date.o Adresse.o Titulaire.o Compte.o CompteBloque.o CompteCourant.o CompteEpargne.o PEL.o e-compte.o Banque.o main.cpp
	g++ -O0 -g3 -Wall -Wextra Date.o Adresse.o Titulaire.o Compte.o CompteBloque.o CompteCourant.o CompteEpargne.o PEL.o e-compte.o Banque.o main.cpp -o banque.out
Date.o: Date.cpp Date.h
	g++ -c -O0 -g3 -Wall -Wextra Date.cpp
Adresse.o: Adresse.cpp Adresse.h 
	g++ -c -O0 -g3 -Wall -Wextra Adresse.cpp
Titulaire.o: Titulaire.cpp Titulaire.h Adresse.o
	g++ -c -O0 -g3 -Wall -Wextra Titulaire.cpp
Compte.o: Compte.cpp Compte.h Date.o Titulaire.o
	g++ -c -O0 -g3 -Wall -Wextra Compte.cpp
CompteBloque.o: CompteBloque.cpp CompteBloque.h Compte.o
	g++ -c -O0 -g3 -Wall -Wextra CompteBloque.cpp
CompteCourant.o: CompteCourant.cpp CompteCourant.h Compte.o
	g++ -c -O0 -g3 -Wall -Wextra CompteCourant.cpp
CompteEpargne.o: CompteEpargne.cpp CompteEpargne.h Compte.o
	g++ -c -O0 -g3 -Wall -Wextra CompteEpargne.cpp
PEL.o: PEL.cpp PEL.h Compte.o
	g++ -c -O0 -g3 -Wall -Wextra PEL.cpp
e-compte.o: e-compte.cpp e-compte.h Compte.o
	g++ -c -O0 -g3 -Wall -Wextra e-compte.cpp
Banque.o: Banque.cpp Banque.h Titulaire.o
	g++ -c -O0 -g3 -Wall -Wextra Banque.cpp