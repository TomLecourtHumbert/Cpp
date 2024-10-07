#include "VecteurND.h"
#include <iostream>
using namespace std;

int main()
{
  VecteurND V1;
  VecteurND V2(10);
  VecteurND V3(5, 12);
  VecteurND V4(V3);
  ~V3();
  return 0;
}
