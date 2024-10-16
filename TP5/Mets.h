#ifndef __METS_H__
#define __METS_H__

#include <iostream>
#include <stdexcept>
#include <string>

class Mets : public Item
{
  private:
    string type;

  public:
    Mets(const std::string &, double, const std::string & = "", const std::string &)throw (std::invalid_argument);
    virtual bool operator == (const Item *) const;
    virtual string getType() const;
    virtual bool operator < (const Item *) const;

};

#endif
