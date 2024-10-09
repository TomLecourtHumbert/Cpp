#include "VecteurND.h"
#include <iostream>
using namespace std;

int main()
{
  VecteurND v1;
  VecteurND v2(10);
  VecteurND v3(5, 12);
  VecteurND v4(v3);
  // OU VecteurND v4 = v3;
  VecteurND v5(7, 6);
  v1.afficher(cout);
  v2.afficher(cout);
  v3.afficher(cout);
  v4.afficher(cout);
  cout << v3.scalaire(v5) << endl;
  cout << v3.norme() << endl;
  // Constructeur appelé automatiquement
  return 0;
}
