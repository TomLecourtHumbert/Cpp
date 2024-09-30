#include <iostream>
using namespace std;

bool saisieDonnees(int * , int * , char * );

int calcul(int, int, char, bool *);

int main()
{
  int ent1,ent2;
  char ope;
  bool operation;
  int result;

  while (saisieDonnees(& ent1,& ent2,& ope)) {
    result = calcul(ent1,ent2,ope,& operation);
    //cout << "------------" << result << endl;
    if (operation)
      cout << ent1 << ope << ent2 << "=" << result << endl;
    else
      cout << "Opération impossible" << endl;
    }
  return 0;
}

//int main()
//{
  //bool operation;
  //if(calcul(operation))
    //cout << ;
  //return 0;
//}

bool saisieDonnees(int *operande1, int *operande2, char *operateur)
{
  int question;
  do {
    cout << "Souhaitez-vous saisir des données ? (0-non, 1-oui) ";
    cin >> question;
  } while (question != 0 && question != 1); //Loi de Morgan pour le &&
  // do while -> exécute 1 fois avant le while
  if (question == 1){
    cout << "Entrez l'opérande 1 (entier) : ";
    cin >> *operande1;
    cout << "Entrez l'opérande 2 (entier) : ";
    cin >> *operande2;
    do {
      cout << "Entrez l'opérateur (+, -, *, / ou %) : ";
      cin >> *operateur;
    } while (*operateur != '+' && *operateur != '-' && *operateur != '*' && *operateur != '/' && *operateur != '%');
  }
  return question == 1;
}

int calcul(int ent1, int ent2, char ope, bool *operation)
{
  int result;
  *operation = true;
  if(ope == '+')
    result = ent1 + ent2;
  else if(ope == '-')
    result = ent1 - ent2;
  else if(ope == '*')
    result = ent1 * ent2;
  else
    if(ent2 == 0)
      *operation = false;
    else
      if(ope == '/')
        result = ent1 / ent2;
      else
        result = ent1 % ent2;

  // << "*********" << result << endl;
  return result;
}

// Les pointeurs vont sauvegarder l'adresse des données, on peut les appeler pour accéder aux données
// Cette paraît plus claire qu'avec les passages par référence et permet de modifier les données aux
// bonnes adresses
