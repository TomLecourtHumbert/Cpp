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
  // Destructeur appelé automatiquement

  //Tests de la surcharge des opérateurs
  cin >> v5;
  cout << v5;
  if(v3 < v5)
    cout << "v5 a une norme plus grande" << endl;
  else
    cout << "v3 a une norme plus grande" << endl;
  cout << v3[3] << endl;
  VecteurND v6(v5);
  VecteurND v7(v3);
  cout << v6;
  v6 * 2;
  cout << v6;
  v6 + v7;
  cout << v6;
  v6 - v7;
  cout << v6;
  return 0;
}
