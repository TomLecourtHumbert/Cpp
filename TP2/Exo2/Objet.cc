#include "Objet.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// Les initialisateurs par défaut sont réservés au prototype
// Ce constructeur peut modifier celui par défaut
//Objet :: Objet(){
  //this -> nom = "";
  //this -> volume = 0;
  //this -> poids = 0;
//}
Objet :: Objet (const std::string & nom, int volume, int poids){
  if (volume < 0 || poids < 0)
    throw invalid_argument("Un argument numérique est négatif");
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
void Objet :: setNom(const std::string & nom){
  this -> nom = nom;
}
void Objet :: setPoids(int poids){
  this -> poids = poids;
}
bool Objet :: estVide() const{
  if (this -> volume == 0 || this -> poids == 0 || this -> nom == "")
    return true;
  return false;
}
std::ostream& Objet :: afficher(std::ostream& out) const{
  out << this -> nom << "/" << this -> volume << "/" << this -> poids;
  return out;
}
std::istream& Objet :: saisir(std::istream& in){
  in >> this -> nom >> this -> volume >> this -> poids;
  return in;
}
std::ostream & operator<<(std::ostream & out, const Objet & obj){
  return obj.afficher(out);
}
std::istream & operator>>(std::istream & in, Objet & obj){
  return obj.saisir(in);
}
bool Objet :: operator==(const Objet & obj) const{
  return this->nom == obj.nom && this->volume == obj.volume && this->poids == obj.poids;
}
