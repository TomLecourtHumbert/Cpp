#include <iostream>
using namespace std;

class Personne {
  private:
    string nom;
    string prenom;
    int age;
  public:
    Personne (const string & nom, const string & prenom, int age){
      cout << "Personne( " << nom ;
      cout << " , " << prenom << " , " <<age<< " ) : " << this << endl;
      this -> nom = nom;
      this -> prenom = prenom;
      this -> age = age;
    }

    Personne (){
      cout << "Personne( ) : " << this << endl;
      this -> nom;
      this -> prenom;
      this -> age;
    }

    Personne (const Personne& personne){
      cout << "Personne( " << &personne<< " ) : " << this << endl;
      this -> nom = personne.nom;
      this -> prenom = personne.prenom;
      this -> age = personne.age;
    }

    // Détruit l'objet this, pas obligé de le définir car aucun attribut ne pointe sur une adresse dynamiquement
    // Il est appelé automatiquement à la fin du programme
    ~Personne(){
      cout << "~Personne() : " << this << endl;
    }

    void affiche() const {
      cout << "Nom : " << this -> nom << endl;
      cout << "Prenom : " << this -> prenom << endl;
      cout << "Age : " << this -> age << endl;
    }

    string getNom() const{
      return this -> nom;
    }

    string getPrenom() const{
      return this -> prenom;
    }

    int getAge() const{
      return this -> age;
    }

    void setNom(const string & nom){
      this -> nom = nom;
    }

    void setPrenom(const string & prenom){
      this -> prenom = prenom;
    }

    void setAge(int age){
      this -> age = age;
    }

};

bool compare (Personne, Personne);
void afficher(const Personne&);

int main ()
{
  Personne p1 ("Dupont", "Gaston", 36);
  p1.affiche();
  Personne p2;
  p2.affiche();
  Personne p3(p1);
  afficher(p3);
  compare(p1,p3);
  return 0;
}

// Cette fonction compare deux Personnes, si elles ont les mêmes valeurs c'est-à-dire le même nom,
// prénom et âge alors la fonction retourne true, false sinon
// Après Q6 : la fonction compare les adresses des deux objets Personne
bool compare ( Personne P1, Personne P2 )
{
  if ( P1.getNom() == P2.getNom() &&
          P1.getPrenom() == P2.getPrenom() &&
          P1.getAge() == P2.getAge() )
      return true;
return false;
}

void afficher(const Personne& personne){
  cout << "Nom : " << personne.getNom() << endl;
  cout << "Prenom : " << personne.getPrenom() << endl;
  cout << "Age : " << personne.getAge() << endl;
}
