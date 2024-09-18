#include "Personne.h"
#include <iostream>
using namespace std;

int main ()
{
  Personne p1 ("Dupont", "Gaston", 36);
  p1.affiche();
  Personne p2;
  p2.affiche();
  Personne p3(p1);
  afficher(p3);
  if(compare(p1,p2))
    cout << "Ils sont identiques" << endl;
  else
    cout << "Ils ne sont pas identiques" << endl;
  if(compare(p1,p3))
    cout << "Ils sont identiques" << endl;
  else
    cout << "Ils ne sont pas identiques" << endl;
  if(compare(p1,p1))
    cout << "Ils sont identiques" << endl;
  else
    cout << "Ils ne sont pas identiques" << endl;
  return 0;
}

/***************
Personne( Dupont , Gaston , 36 ) : 0x7ffd9008ab20
Nom : Dupont
Prenom : Gaston
Age : 36
Personne( ) : 0x7ffd9008ab70
Nom :
Prenom :
Age : 2002952192
Personne( 0x7ffd9008ab20 ) : 0x7ffd9008abc0
Nom : Dupont
Prenom : Gaston
Age : 36
Personne( 0x7ffd9008ab70 ) : 0x7ffd9008ac60
Personne( 0x7ffd9008ab20 ) : 0x7ffd9008ac10
~Personne() : 0x7ffd9008ac10
~Personne() : 0x7ffd9008ac60
Ils ne sont pas identiques
Personne( 0x7ffd9008abc0 ) : 0x7ffd9008ac60
Personne( 0x7ffd9008ab20 ) : 0x7ffd9008ac10
~Personne() : 0x7ffd9008ac10
~Personne() : 0x7ffd9008ac60
Ils sont identiques
Personne( 0x7ffd9008ab20 ) : 0x7ffd9008ac60
Personne( 0x7ffd9008ab20 ) : 0x7ffd9008ac10
~Personne() : 0x7ffd9008ac10
~Personne() : 0x7ffd9008ac60
Ils sont identiques
~Personne() : 0x7ffd9008abc0
~Personne() : 0x7ffd9008ab70
~Personne() : 0x7ffd9008ab20
********************/
