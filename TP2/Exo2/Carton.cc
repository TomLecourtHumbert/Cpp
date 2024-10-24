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
  this->volumeReel = 0;
  this->poidsReel = 0;
  this->contenu = vector<Objet> (Carton::max_Objets/*,Objet()*/);
  this->nbObjets = 0;
}

int Carton :: contient(const Objet& objet) const{
  for(int i=0;i < this->contenu.size();i++){
    if (this->contenu[i] == objet)
      return i;
  }
  return -1;
}

void Carton :: ajouteObjet(const Objet& objet){
  if(objet.estVide())
    throw invalid_argument("L'objet est vide");
  if(this->poidsReel + objet.getPoids() > this->poidsMax)
    throw invalid_argument("Le carton est trop lourd");
  if(this->volumeReel + objet.getVolume() > this->volumeMax)
    throw invalid_argument("Le carton n'est pas assez grand");
  if(this->nbObjets == this->contenu.size())
    throw invalid_argument("Le carton ne peut pas contenir plus d'objets");
  this->contenu[this->nbObjets] = objet;
  this->nbObjets += 1;
  this->poidsReel += objet.getPoids();
  this->volumeReel += objet.getVolume();
}

Carton& Carton :: operator+= (const Objet& objet){
  this->ajouteObjet(objet);
  return *this;
}

Carton& Carton :: operator-= (const Objet& objet){
  int i = this->contient(objet);
  if (i == -1)
    throw invalid_argument("L'objet n'existe pas dans le carton");
  this->contenu[i] = this->contenu[this->nbObjets-1];
  this->nbObjets -= 1;
  this->poidsReel -= objet.getPoids();
  this->volumeReel -= objet.getVolume();
  return *this;
}

void Carton :: afficher(ostream & o) const{
  o << endl << "Contenu du carton : " << endl;
  for (int i=0; i < nbObjets ; i++)
    o << i+1 << " : " << this->contenu[i] << endl ;
}

const Objet& Carton :: operator[](unsigned int i) const{
  return (*this).contenu[i];
}

std::ostream & operator<<(std::ostream & out, const Carton & c){
  c.afficher(out);
  return out;
}
