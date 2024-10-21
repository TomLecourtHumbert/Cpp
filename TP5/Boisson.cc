#include "Boisson.h"
#include "Mets.h"

using namespace std;

Boisson :: Boisson(const string & nom, double prix, const string & ingredients, bool alcool)
{
  this->nom = nom;
  this->prix = prix;
  this->ingredients = Description(ingredients);
  this->alcool = alcool
}

std::ostream & Boisson :: affiche(std::ostream & o)
{
  o << this->nom << "     " << this->prix << endl;
  o << "     ";
  for(int i = 0; i < this->ingredients ; i++)
    o << this->ingredients[i] << ", ";
  o << endl;
  if (this->alcool)
    o << "(alcoolisée)";
  return o;
}

string Boisson :: getType() const
{
  return this->type;
}

bool Boisson :: operator< (const Item * i) const
{
  bool inferieur;
  if(typeid(*i) == typeid(Mets)){
    if (this->type == "Entree"){
      inferieur = true
    }else if (this->type == "Plat"){
      if (i.type == "Entree"){
        inferieur = false;
      }else
        inferieur = true;
    }else if (this->type == "Dessert")
      if (i.type == "Dessert"){
        inferieur = true;
      }else
        inferieur = false;
  }else if (typeid(*i) == typeid(Boisson)){
    inferieur = false;
  }
  return inferieur;
}

bool Boisson :: operator == (const Item * I) const
{
   if(typeid(*I) == typeid(Boisson))
     {
       Boisson b = *dynamic_cast<const Boisson *> (I);
       return Item::operator==(I) && this->type == b.type;
     }
   return false;
}
