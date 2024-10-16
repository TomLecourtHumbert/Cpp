#ifndef __ITEM_H__
#define __ITEM_H__

#include "Description.h"

#include <iostream>
#include <stdexcept>
#include <string>

class Item
{
private:
  std::string nom;
  double prix;
  Description ingredients;

public :
  Item(const std::string &, double, const std::string & = "")throw (std::invalid_argument);
  virtual std::ostream & affiche(std::ostream &);
  virtual bool operator == (const Item *) const;
  virtual bool operator < (const Item *) const=0;
  // const=0   =>   Classe devient abstraite automatiquement (non instanciable), méthodes virtuelles pures
  virtual string getType() const=0;
  virtual ~Item() {};
};

std::ostream & operator << (std::ostream &, const Item &);

#endif
