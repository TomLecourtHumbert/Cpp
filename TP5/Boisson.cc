#include "Item.h"
#include "Boisson.h"
#include "Mets.h"

using namespace std;

Boisson :: Boisson(const std::string & nom, double prix, bool alcool, const std::string & ingredients):Item(nom, prix, ingredients)
{
  this->alcool = alcool;
}

void Boisson :: affiche(std::ostream & o) const
{
  o << this->nom << "     " << this->prix << endl;
  if (this->alcool)
    o << "     " <<"(alcoolisée)";
  else
    o << "     " <<"(non alcoolisée)";
}

std::string Boisson :: getType() const
{
  return "Boisson";
}

bool Boisson :: operator< (const Item * i) const
{
  return true;
}
