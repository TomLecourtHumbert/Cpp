#include <iostream>
#include <string>
using namespace std;


// Utilité des pointeurs : on peut détruire nos variables quand on veut, au lieu d'attendre la fin du
// programme
// Exemple : dans un jeu avec beaucoup de variables, au lieu de tout stocker jusqu'à la fin, on peut
// libérer la mémoire quand on veut


void initialisePointeurs(int *);
void decouvertePointeurs();

int main()
{
  decouvertePointeurs();
  return 0;
}

void initialisePointeurs(int * ptr)
{
  cout << "Allocation dynamique : " << ptr << "\t" << &ptr << "\t" << *ptr << endl;
  ptr = new int(5);
  cout << "Allocation dynamique : " << ptr << "\t" << &ptr << "\t" << *ptr << endl ;
  delete ptr;
}

void initialisePointeurs(int * *ptr)
{
  cout << "Allocation dynamique : " << *ptr << "\t" << &*ptr << "\t" << **ptr << endl;
  *ptr = new int(5);
  cout << "Allocation dynamique : " << *ptr << "\t" << &*ptr << "\t" << **ptr << endl ;
}

// Allocation dynamique (fonction à privilégier)
int * initialisePointeurs()
{
  int * ptr = new int(5);
  cout << "Allocation dynamique : " << ptr << "\t" << &ptr << "\t" << *ptr << endl ;
  return ptr;
}

void decouvertePointeurs()
{
  int i =-1;
  unsigned int ui =1;
  string s ="Hello";
  double d =3.14159;
  long double ld =2.75e-3;
  cout << i << "\t" << &i << "\t" << sizeof(i) << endl;
  cout << ui << "\t" << &ui << "\t" << sizeof(ui) << endl;
  cout << s << "\t" << &s << "\t" << sizeof(s) << endl;
  cout << d << "\t" << &d << "\t" << sizeof(d) << endl;
  cout << ld << "\t" << &ld << "\t" << sizeof(ld) << endl << endl;

  int *pi = &i;
  unsigned int *pui = &ui;
  string *ps = &s;
  double *pd = &d;
  long double *pld = &ld;
  cout << pi << "\t" << &pi << "\t" << sizeof(pi) << endl;
  cout << pui << "\t" << &pui << "\t" << sizeof(pui) << endl;
  cout << ps << "\t" << &ps << "\t" << sizeof(ps) << endl;
  cout << pd << "\t" << &pd << "\t" << sizeof(pd) << endl;
  cout << pld << "\t" << &pld << "\t" << sizeof(pld) << endl << endl;
  // Les pointeurs ont récupérés les valeurs avec les adresses des variables

  *ps = "Hello World !";
  cout << s << endl;
  cout << *ps << endl;

  cout << "\n***********************************\n";
  cout << "Allocation dynamique : " << pi << "\t" << &pi << "\t" << *pi << endl;
  initialisePointeurs(pi);
  cout << "Allocation dynamique : " << pi << "\t" << &pi << "\t" << *pi << endl ;

  cout << "\n***********************************\n";
  cout << "Allocation dynamique : " << pi << "\t" << &pi << "\t" << *pi << endl;
  initialisePointeurs(&pi);
  cout << "Allocation dynamique : " << pi << "\t" << &pi << "\t" << *pi << endl ;
  delete pi;

  cout << "\n***********************************\n";
  pi = &i;
  cout << "Allocation dynamique : " << pi << "\t" << &pi << "\t" << *pi << endl;
  pi = initialisePointeurs();
  cout << "Allocation dynamique : " << pi << "\t" << &pi << "\t" << *pi << endl ;
  delete pi;
}

// Question 2 (Exercice 2) : Pour les pointeurs, les valeurs sont des adresses et les tailles sont les
// mêmes, pour avoir la valeur de l'objet pointé il ne faut pas oublier le * juste devant

// Question 4 (Exercice 2) : IL ne faut pas libérer la mémoire car aucun pointeur ne pointe sur une
// adresse dynamiquement (aucun new effectué)

// Question 2 (Exercice 3) : L'affichage n'est pas le même car on utilise pas les adresses (&), voir les
// différentes fonctions initialisePointeurs()

// Question 3 (Exercice 3) : On est obligé de libérer la mémoire associée au pointeur pi avec l'opérateur
// delete car pi pointe sur une adresse dynamiquement (un new a été effectué)
