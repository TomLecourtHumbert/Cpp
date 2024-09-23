#include "Objet.h"
#include <iostream>
using namespace std;

int main()
{
  Objet o1 ("Lampe", 30, 10);
  cout << o1 << endl;
  cin >> o1;
  cout << o1 << endl;
  //Objet o2 ("Bureau", -1, 80);
  Objet o3 ("Bureau", 0, 80);
  cout << o3 << endl;
  if (o3.estVide())
    cout << "L'objet 3 a un poids ou un volume nul" << endl;
  if (o1.estVide())
    cout << "L'objet 1 a un poids ou un volume nul" << endl;
  return 0;
}

/******************************
Lampe/30/10
Ampoule
5
2
Ampoule/5/2
Bureau/0/80
L'objet 3 a un poids ou un volume nul
******************************/
