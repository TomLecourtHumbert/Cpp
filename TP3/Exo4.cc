#include <iostream>
#include <string>
using namespace std;

int * initialisation(int);
void affichage(const int *, int);
int indMin(const int *, int);
double moy(const int *, int);
void permute(int *, int, int);
int * duplicate(const int *, int);

int main()
{
  int * tab;
  int taille;
  cout << "Veuillez donner une taille pour le tableau 1D : ";
  cin >> taille;
  tab = initialisation(taille);
  affichage(tab, taille);
  cout << endl;
  int ind = indMin(tab, taille);
  cout << "Indice de la plus grande valeur du tableau 1D : " << ind << endl;
  double moyenne = moy(tab, taille);
  cout << "Moyenne des valeurs du tableau 1D : " << moyenne << endl << endl;
  int * AlterTab;
  AlterTab = duplicate(tab, taille);
  permute(AlterTab, 0, 2);
  affichage(AlterTab, taille);
  affichage(tab, taille);
  delete tab;
  delete AlterTab;
  return 0;
}

int * initialisation(int taille)
{
  int * Tab;
  Tab = new int[taille];
  for(int i = 0; i < taille; i++)
    Tab[i] = rand() % 101;
  return Tab;
}

void affichage(const int * Tab, int taille)
{
  for(int i = 0; i < taille; i++)
    cout << Tab[i] << " , ";
  cout << endl;
}

int indMin(const int * Tab, int taille)
{
  int indRes = 0;
  for(int i = 0; i < taille; i++)
  {
    if(Tab[i]<Tab[indRes])
      indRes=i;
  }
  return indRes;
}

double moy(const int * Tab, int taille)
{
  int totalVal = 0;
  for(int i = 0; i < taille; i++)
    totalVal += Tab[i];
  return totalVal / taille;
}

void permute(int * Tab, int a, int b)
{
  int tmp = Tab[a];
  Tab[a] = Tab[b];
  Tab[b] = tmp;
}

int * duplicate(const int * Tab, int taille)
{
  int * AlterTab;
  AlterTab = new int[taille];
  for(int i = 0; i < taille; i++)
      AlterTab[i] = Tab[i];
  return AlterTab;
}
