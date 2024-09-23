#include "Carton.h"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

Carton :: Carton(int vM, int pM){
  if (vM <= 0 || pM <= 0)
    throw invalid_argument("Un argument numérique est négatif ou nul");
  this->volumeMax = vM;
  this->poidsMax = pM;
  this->contenu = 
  this->nbObjets = 0
}
