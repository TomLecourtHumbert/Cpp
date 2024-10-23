#include "Description.h"
#include "Item.h"
#include "Mets.h"
#include "Boisson.h"

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool trier(const Item *, const Item *);

int main()
{
  Item * D1 = new Mets ("Cafe gourmand", 5.,"Dessert", "Cafe/mignardises");
  Item * E1 = new Mets ("Fois Gras Maison", 14.,"Entree", "Fois de canard/confiture de figues");
  Item * P1 = new Mets ("Pave de saumon roti", 16.,"Plat", "Pave de saumon roti/beurre de ciboulette/risotto au pesto de roquette");
  Item * B1 = new Boisson ("Americano maison", 5.2, true);
  Item * P2 = new Mets ("Confit de canard", 15.5,"Plat", "Confit de canard/pommes grenailles au thym");
  Item * E2 = new Mets ("Tartare de saumon", 11.5,"Entree");
  Item * D2 = new Mets ("Nougat glace", 15.5,"Dessert", "Nougat glace/nougatine/coulis de framboise");
  Item * B2 = new Boisson ("The, Infusions", 2.8, false);
  //Item * D3 = new Mets ("Moelleux au chocolat", 7.5, "dessert");

  Item * tab [] = {D1,E1,P1,B1,P2,E2,D2,B2};

  std::vector<Item *> carte (tab, tab+8);

  std::sort(carte.begin(), carte.end(), trier);

  cout << endl << "Carte :" << endl;

  for(int i=0; i < carte.size(); i++)
    cout << *carte[i] << endl;

  cout << endl;
  return 0;
}

bool trier(const Item * I1, const Item * I2)
{
  return *I1 < I2;
}
