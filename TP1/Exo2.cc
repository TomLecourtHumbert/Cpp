#include <iostream>
using namespace std;

string extrait (const string &, int , char);
string normalise (const string &, int, char);
string compacte (const string &, char = ' ');

int main()
{
  string ext;
  cout << "Fonction Extrait" << endl;
  ext = extrait("Quelle surprise", 7, 'i');
  cout << ext << endl;
  ext = extrait("Quelle surprise", 7, 'a');
  cout << ext << endl << endl;
  cout << "Fonction Normalise" << endl;
  ext = normalise("Quelle surprise" , 6 , 'e');
  cout << ext << endl;
  ext = normalise("Quelle surprise" , 20 , 'X');
  cout << ext << endl << endl;
  cout << "Fonction Compacte" << endl;
  ext = compacte("Quelllle surprise" , 'l');
  cout << ext << endl;
  ext = compacte(" Quelllle surprise");
  cout << ext << endl;
  return 0;
}

string extrait (const string & chaine, int position, char terminaison)
{
  string chaineFinale;
  chaineFinale = chaine;
  int ind;
  ind = chaineFinale.rfind(terminaison);
  chaineFinale = chaineFinale.substr(position, ind - position);
  return chaineFinale;
}

string normalise (const string & chaine, int longueur, char c = ' ')
{
  string chaineFinale;
  chaineFinale = chaine;
  if (chaine.length() < longueur) {
    for (int i=chaine.length() ; i < longueur ; i++)
      chaineFinale = chaineFinale + c;
  } else if (chaine.length() > longueur) {
    chaineFinale = chaineFinale.substr(0,longueur);
  }
  return chaineFinale;
}

string compacte (const string & s, char c)
{
  string chaineFinale;
  chaineFinale = s[0];
  for (int i=1 ; i < s.length() ; i++) {
    if (!(s[i] == c && chaineFinale[chaineFinale.length()-1] == c)) {
      chaineFinale += s[i];
    }
  }
  return chaineFinale;
}
