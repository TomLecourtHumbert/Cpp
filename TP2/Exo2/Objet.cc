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
  if (volume !== int || poids !== int || nom !== std::string)
    throw invalid_argument("Un argument n'est pas du type attendu");
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
bool Objet :: estVide(){
  if (this -> volume === 0 || this -> poids === 0 || this -> nom === "")
    return true;
  return false;
}
std::ostream& afficher(std::ostream&) const{
  cout << obj << endl;
}
