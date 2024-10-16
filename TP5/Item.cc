#include "Item.h"
#include "Description.h"

using namespace std;

Item :: Item(const string & nom, double prix, const string & ingredients) throw(invalid_argument)
{
  this->nom = nom;
  this->prix = prix;
  this->ingredients = Description(ingredients);
}

std::ostream & Item :: affiche(std::ostream & o)
{
  o << this->nom << "     " << this->prix << endl;
  o << "     ";
  for(int i = 0; i < this->ingredients ; i++)
    o << this->ingredients[i] << ", ";
  return o;
}

bool Item :: operator== (const Item * i) const
{
  if (this->nom != i.nom || this->prix != i.prix)
    return false;
  for(int i = 0; i < i.ingredients ; i++){
    if (this->ingredients[i] != i.ingredients[i])
      return false;
  }
  return true;
}

std::ostream & operator<< (std::ostream & o, const Item & e)
{
  e.affiche(o);
  return o;
}
