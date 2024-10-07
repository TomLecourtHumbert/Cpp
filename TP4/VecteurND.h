#ifndef __VECTEURND_H__
#define __VECTEURND_H__

#include <stdexcept>
#include <ostream>

class VecteurND{
  private:
    unsigned int dim;
    double * coord;
  public:
    VecteurND();
    VecteurND(unsigned int);
    VecteurND(unsigned int,double);
    VecteurND(unsigned int,const double *);

    VecteurND(const VecteurND &);
    ~VecteurND();
    VecteurND & operator = (const VecteurND &);

    unsigned int getDim() const;
    std::ostream& afficher(std::ostream&) const;
    double norme() const;
    double scalaire(const VecteurND &) const;

};

#endif
