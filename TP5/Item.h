#ifndef __ITEM_H__
#define __ITEM_H__

#include "Description.h"

#include <iostream>
#include <stdexcept>
#include <string>

class Item
{
protected:
  std::string nom;
  double prix;
  Description ingredients;

public :
  Item(const std::string &, double, const std::string & = "");
  virtual void affiche(std::ostream &)const;
  virtual bool operator == (const Item *) const;
  virtual bool operator < (const Item *) const=0;
  // const=0   =>   Classe devient abstraite automatiquement (non instanciable), méthodes virtuelles pures
  virtual std::string getType() const=0;
  virtual ~Item() {};
};

std::ostream & operator << (std::ostream &, const Item &);

#endif
