#include <iostream>
using namespace std;

string extrait (const string &, int , char);

int main()
{
  string ext;
  ext = extrait("Quelle surprise", 7, 'i');
  cout << ext << endl;
  ext = extrait("Quelle surprise", 7, 'a');
  cout << ext << endl;
  return 0;
}

string extrait (const string & chaine, int position, char terminaison)
{
  string chaineFinale;
  int ind;
  ind = chaine.rfind(terminaison);
  chaineFinale = chaine.substr(position, ind);
  return chaineFinale;
}
