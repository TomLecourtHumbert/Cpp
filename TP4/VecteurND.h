#ifndef __VECTEURND_H__
#define __VECTEURND_H__

#include <stdexcept>
#include <ostream>
#include <vector>
using namespace std;


class VecteurND{
  private:
    unsigned int dim;
    double * coord;
    //std::vector<double> coord;
  public:
    VecteurND();
    VecteurND(unsigned int);
    VecteurND(unsigned int,double);
    VecteurND(unsigned int,const double *);

    VecteurND(const VecteurND &);
    ~VecteurND();
    VecteurND & operator = (const VecteurND &);

    VecteurND operator+ (const VecteurND &);
    VecteurND operator- (const VecteurND &);
    VecteurND operator* (int);
    bool operator< (const VecteurND &) const;
    double & operator[ ](int) const;

    unsigned int getDim() const;
    std::ostream& afficher(std::ostream&) const;
    std::istream& saisir(std::istream&);
    double norme() const;
    double scalaire(const VecteurND &) const;
};

std::ostream & operator<<(std::ostream &, const VecteurND &);
std::istream & operator>>(std::istream &, VecteurND &);
VecteurND operator* (int, VecteurND &);

#endif
