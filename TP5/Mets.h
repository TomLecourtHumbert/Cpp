#ifndef __METS_H__
#define __METS_H__

#include <iostream>
#include <stdexcept>
#include <string>

class Mets : public Item
{
  private:
    std::string type;

  public:
    Mets(const std::string &, double, const std::string &, const std::string & = "");
    virtual bool operator == (const Item *) const;
    virtual std::string getType() const;
    virtual bool operator < (const Item *) const;
};

#endif
