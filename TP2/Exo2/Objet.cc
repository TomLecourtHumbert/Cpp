#include "Objet.h"
#include <iostream>
using namespace std;

Objet :: Objet (const std::string & nom="", int volume=0, int poids=0){
  this -> nom = nom;
  this -> volume = volume;
  this -> poids = poids;
}
int Objet :: getVolume() const{
  return this -> volume;
}
int Objet :: getPoids() const{
  return this -> poids;
}
void Objet :: setNom(const string & nom){
  this -> nom = nom;
}
void Objet :: setPoids(int poids){
  this -> poids = poids
}
