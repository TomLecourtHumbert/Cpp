#include "Carton.h"
#include "Objet.h"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

 const int Carton :: max_Objets = 10;

Carton :: Carton(int vM, int pM){
  if (vM <= 0 || pM <= 0)
    throw invalid_argument("Un argument numérique est négatif ou nul");
  this->volumeMax = vM;
  this->poidsMax = pM;
  this->contenu = vector<Objet> (Carton::max_Objets/*,Objet()*/);
  this->nbObjets = 0;
}

int Carton :: contient(const Objet& objet) const{
  for(int i=0;i < this->nbObjets;i++){
    if ((*this)[i] == objet)
      return i;
  }
  return -1;
}

void Carton :: ajouteObjet(const Objet& objet){
  if(objet.estVide() || (this->poidsReel + objet.getPoids()) > this->poidsMax || (this->volumeReel + objet.getVolume()) > this->volumeMax || this->nbObjets == max_Objets)
    throw invalid_argument("L'insertion de l'objet dans le carton est impossible");
  (*this).contenu[this->nbObjets] = objet;
  this->nbObjets += 1;
  this->poidsReel += objet.getPoids();
  this->volumeReel += objet.getVolume();
}

Carton& Carton :: operator+= (const Objet& objet){
  if(objet.estVide() || (this->poidsReel + objet.getPoids()) > this->poidsMax || (this->volumeReel + objet.getVolume()) > this->volumeMax || this->nbObjets == max_Objets)
    throw invalid_argument("L'insertion de l'objet dans le carton est impossible");
  (*this).contenu[this->nbObjets] = objet;
  this->nbObjets += 1;
  this->poidsReel += objet.getPoids();
  this->volumeReel += objet.getVolume();
  return *this;
}

ostream & Carton :: afficher(ostream & o) const{
  o << endl << "Contenu du carton : " << endl;
  for (int i=0; i < nbObjets ; i++)
    o << i+1 << " : " << (*this)[i] << endl ;
  return o;
}

const Objet& Carton :: operator[](unsigned int i) const{
  return (*this)[i];
}

std::ostream & operator<<(std::ostream & out, const Carton & c){
  return c.afficher(out);
}

Carton& Carton :: operator-= (const Objet& objet){
  bool res = false;
  for (int i=0; i < nbObjets ; i++)
    if ((*this)[i] == objet)
      (*this)[i];
      this->nbObjets -= 1;
      this->poidsReel -= objet.getPoids();
      this->volumeReel -= objet.getVolume();
      res = true;
  if (!res)
    throw invalid_argument("L'objet n'existe pas dans le carton");
  return *this;
}
