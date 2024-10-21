#include "Item.h"
#include "Description.h"

using namespace std;

Item :: Item(const string & nom, double prix, const string & chaine):ingredients(chaine) // Constructeur parent dans def
{
  this->nom = nom;
  this->prix = prix;
  //this->ingredients = Description(chaine);
}

void Item :: affiche(std::ostream & o)const
{
  o << this->nom << "     " << this->prix << endl;
  o << "     ";
  o << this->ingredients;
}

bool Item :: operator== (const Item * i) const
{
 return this->nom == i->nom && this->prix == i->prix && this->ingredients == i->ingredients;
}

std::ostream & operator<< (std::ostream & o, const Item & i)
{
  i.affiche(o);
  return o;
}
