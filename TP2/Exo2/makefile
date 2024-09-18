a.out : Carton.o Objet.o Principal.o
	g++ Carton.o Objet.o Principal.o

Principal.o : Carton.h Objet.h Principal.cc
	g++ -c Principal.cc

Carton.o : Carton.h Carton.cc Objet.h
	g++ -c Carton.cc

Objet.o : Objet.h Objet.cc
	g++ -c Objet.cc
