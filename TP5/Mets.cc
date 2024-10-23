#include "Item.h"
#include "Mets.h"
#include "Boisson.h"

using namespace std;

Mets :: Mets(const string & nom, double prix, const string & type, const string & ingredients):Item(nom, prix, ingredients)
{
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

std::string Mets :: getType() const
{
  return this->type;
}

bool Mets :: operator< (const Item * I) const
{
  bool inferieur;
  if(typeid(*I) == typeid(Mets)){
    Mets m = *dynamic_cast<const Mets *> (I);
    if (this->type == "Entree"){
      inferieur = true;
    }else if (this->type == "Plat"){
      if (m.type == "Entree"){
        inferieur = false;
      }else
        inferieur = true;
    }else if (this->type == "Dessert")
      if (m.type == "Dessert"){
        inferieur = true;
      }else
        inferieur = false;
  }else if (typeid(*I) == typeid(Boisson)){
    inferieur = false;
  }
  return inferieur;
}
