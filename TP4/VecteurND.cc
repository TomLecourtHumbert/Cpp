#include "VecteurND.h"
#include <iostream>
using namespace std;

VecteurND :: VecteurND(){
  this->dim = 0;
  this->coord = 0;
}

VecteurND :: VecteurND(unsigned int dim){
  this->dim = dim;
}

VecteurND :: VecteurND(unsigned int dim, double coord){
  this->dim = dim;
  this->coord = coord;
}

VecteurND :: VecteurND(unsigned int dim, const double * coord){
  this->dim = dim;
  this->coord = coord;
}

VecteurND :: VecteurND(const VecteurND & V){
  dim = V.dim;
  coord = V.coord;
}

VecteurND :: ~VecteurND(){
  cout << " Destruction " << endl;
}

VecteurND & VecteurND :: operator = (const VecteurND & V){
  this->dim = V.dim;
  this->coord = V.coord;
  return *this;
}

unsigned int VecteurND :: getDim() const{
  return this->dim;
}

std::ostream& VecteurND :: afficher(std::ostream& o) const{
  o << this->getDim() << " / " << this->coord;
  return o;
}

double VecteurND :: norme() const{
  return sqrt(carre(this->coord[0])+carre(this->coord[1]));
}

double VecteurND :: scalaire(const VecteurND & V) const{
  
}
