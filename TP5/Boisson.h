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
    Boisson(const std::string &, double, bool, const std::string & = "");
    virtual void affiche(std::ostream &)const;
    virtual bool operator < (const Item *) const;
    virtual std::string getType() const;
};

#endif
