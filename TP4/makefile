a.out : VecteurND.o Principal.o
	g++ VecteurND.o Principal.o
Principal.o : VecteurND.h Principal.cc
	g++ -c Principal.cc
VecteurND.o : VecteurND.h VecteurND.cc
	g++ -c VecteurND.cc
