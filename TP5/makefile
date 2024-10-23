a.out : Description.o Item.o Boisson.o Mets.o principal.o
	g++ Description.o Item.o Boisson.o Mets.o principal.o

principal.o : Description.h Item.h Mets.h Boisson.h principal.cc
	g++ -c principal.cc


Mets.o : Mets.h Mets.cc Item.h
	g++ -c Mets.cc

Boisson.o : Boisson.h Boisson.cc Item.h
	g++ -c Boisson.cc

Item.o : Item.h Item.cc Description.h
	g++ -c Item.cc

Description.o : Description.h Description.cc
	g++ -c Description.cc
