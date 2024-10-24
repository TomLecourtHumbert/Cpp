#include "Objet.h"
#include "Carton.h"
#include <iostream>
using namespace std;

int main()
{
  Objet o1 ("Lampe", 30, 10);
  cout << o1 << endl;
  cin >> o1;
  cout << o1 << endl;
  //Objet o2 ("Bureau", -1, 80);
  Objet o2 ("Tapis", 2, 2);
  Objet o3 ("Bureau", 0, 80);
  Objet o4 ("Chaise", 20, 20);
  cout << o3 << endl;
  if (o3.estVide())
    cout << "L'objet 3 a un poids ou un volume nul" << endl;
  if (o1.estVide())
    cout << "L'objet 1 a un poids ou un volume nul" << endl;
  Carton C(1000,1000);
  C += o1;
  C += o2;
  C += o4;
  cout << C[0];
  cout << C;
  C -= o1;
  cout << C;
  //Objet o5 ("Avion", 100000, 100000);
  //C += o5;
}

/******************************
Lampe/30/10
Nom de l'objet : Ampoule
Volume de l'objet : 5
Poids de l'objet : 5
Ampoule/5/5
Bureau/0/80
L'objet 3 a un poids ou un volume nul
Ampoule/5/5
Contenu du carton :
1 : Ampoule/5/5
2 : Tapis/2/2
3 : Chaise/20/20

Contenu du carton :
1 : Chaise/20/20
2 : Tapis/2/2
******************************/
