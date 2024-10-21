#ifndef __BOISSON_H__
#define __BOISSON_H__

#include <iostream>
#include <stdexcept>
#include <string>

class Boisson : public Item
{
  private:
    bool alcool;

  public:
    Mets(const std::string &, double, const std::string & = "", bool);
    virtual std::ostream & affiche(std::ostream &);
    virtual bool operator == (const Item *) const;
    virtual bool operator < (const Item *) const;
    virtual string getType() const;
};

#endif
