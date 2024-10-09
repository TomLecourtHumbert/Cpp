#include "VecteurND.h"
#include <iostream>
#include <math.h>
using namespace std;

VecteurND :: VecteurND(){
  this->dim = 0;
  this->coord = NULL;
}

VecteurND :: VecteurND(unsigned int dim){
  this->dim = dim;
  if(dim>=1){
    this->coord = new double[dim];
    for(int i = 0; i < dim; i++)
      this->coord[i] = 0;
  }
  else
    this->coord = NULL;
}

VecteurND :: VecteurND(unsigned int dim, double val){
  this->dim = dim;
  if(dim>=1){
    this->coord = new double[dim];
    for(int i = 0; i < dim; i++)
      this->coord[i] = val;
  }
  else
    this->coord = NULL;
}

VecteurND :: VecteurND(unsigned int dim, const double * tab){
  this->dim = dim;
  if(dim>=1){
    this->coord = new double[dim];
    for(int i = 0; i < dim; i++)
      this->coord[i] = tab[i];
  }
  else
    this->coord = NULL;
}

VecteurND :: VecteurND(const VecteurND & v){
  this->dim = v.dim;

  if(v.dim == 0)
    this->coord = NULL;
  else
    this->coord = new double[v.dim];

  for(unsigned int i = 0; i < v.dim; i++)
    this->coord[i] = v.coord[i];

}

VecteurND :: ~VecteurND(){
  if (this->coord != NULL){
    delete [] this->coord;
    this->coord = NULL;
  }
}

VecteurND & VecteurND :: operator = (const VecteurND & v){
  if (this->coord != NULL){
    delete [] this->coord;
    this->coord = NULL;
  }
  this->dim = v.dim;

  if(v.dim == 0)
    this->coord = NULL;
  else
    this->coord = new double[v.dim];

  for(unsigned int i = 0; i < v.dim; i++)
    this->coord[i] = v.coord[i];

  return *this;
}

double VecteurND :: operator[](int i) const{
  return (*this)[i];
}

unsigned int VecteurND :: getDim() const{
  return this->dim;
}

std::ostream& VecteurND :: afficher(std::ostream& o) const{
  o << "--- Coordonnées : ";
  for(int i = 0; i < this->dim; i++)
    o << this->coord[i] << " , ";
  o << " / Dimension : " << this->getDim() << endl;
  return o;
}

double VecteurND :: scalaire(const VecteurND & v) const{
  double res = 0;
  for (int i=0 ; i < this->dim ; i++)
    res += this->coord[i]*v.coord[i];
  return res;
}

double VecteurND :: norme() const{
  return sqrt(this->scalaire(*this));
}

std::ostream & operator<<(std::ostream & out, const VecteurND & v){
  return v.afficher(out);
}

std::istream & operator>>(std::istream & in, VecteurND & v){
  unsigned int dim;
  double * coord;
  in >> dim >> coord;
  this->dim = dim;
  this->coord = coord;
  return in;
}
