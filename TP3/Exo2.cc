#include <iostream>
#include <string>
using namespace std;

void decouvertePointeurs();

int main()
{
  decouvertePointeurs();
  return 0;
}

void decouvertePointeurs()
{
  int i =-1;
  unsigned int ui =1;
  string s ="Hello";
  double d =3.14159;
  long double ld =2.75e-3;
  cout << i << "\t" << sizeof(i) << "\t" << &i << endl;
  cout << ui << "\t" << sizeof(ui) << "\t" << &ui << endl;
  cout << s << "\t" << sizeof(s) << "\t" << &s << endl;
  cout << d << "\t" << sizeof(d) << "\t" << &d << endl;
  cout << ld << "\t" << sizeof(ld) << "\t" << &ld << endl << endl;

  int *pi = &i;
  unsigned int *pui = &ui;
  string *ps = &s;
  double *pd = &d;
  long double *pld = &ld;
  cout << pi << "\t" << &pi << "\t" << sizeof(pi) << endl;
  cout << *pui << "\t" << sizeof(*pui) << "\t" << &pui << endl;
  cout << *ps << "\t" << sizeof(*ps) << "\t" << &ps << endl;
  cout << *pd << "\t" << sizeof(*pd) << "\t" << &pd << endl;
  cout << *pld << "\t" << sizeof(*pld) << "\t" << &pld << endl << endl;
  // Les pointeurs ont récupérés les valeurs avec les adresses des variables

  *ps = "Hello World !";
  cout << s << endl;
  cout << *ps << endl;
}

// Question 4 (Exercice 2) :
