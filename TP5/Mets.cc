#include "Mets.h"
#include "Boisson.h"

using namespace std;

Mets :: Mets(const string & nom, double prix, const string & ingredients, const string & type)
{
  this->nom = nom;
  this->prix = prix;
  this->ingredients = Description(ingredients);
  if (type == "Entree" || type == "Plat" || type == "Dessert"){
    this->type = type;
  }else
    throw invalid_argument("Type non valide (Entree, Plat ou Dessert)");
}

bool Mets :: operator == (const Item * I) const
{
   if(typeid(*I) == typeid(Mets))
     {
       Mets m = *dynamic_cast<const Mets *> (I);
       return Item::operator==(I) && this->type == m.type;
     }
   return false;
}

string Mets :: getType() const
{
  return this->type;
}

bool Mets :: operator< (const Item * i) const
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
