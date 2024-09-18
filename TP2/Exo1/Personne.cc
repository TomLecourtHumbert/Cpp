#include "Personne.h"
#include <iostream>
using namespace std;

Personne :: Personne (const string & nom, const string & prenom, int age){
      cout << "Personne( " << nom ;
      cout << " , " << prenom << " , " <<age<< " ) : " << this << endl;
      this -> nom = nom;
      this -> prenom = prenom;
      this -> age = age;
    }

Personne :: Personne (){
      cout << "Personne( ) : " << this << endl;
      this -> nom;
      this -> prenom;
      this -> age;
    }

Personne :: Personne (const Personne& personne){
      cout << "Personne( " << &personne<< " ) : " << this << endl;
      this -> nom = personne.nom;
      this -> prenom = personne.prenom;
      this -> age = personne.age;
    }

// Détruit l'objet this, pas obligé de le définir car aucun attribut ne pointe sur une adresse dynamiquement
// Il est appelé automatiquement à la fin du programme
Personne :: ~Personne(){
      cout << "~Personne() : " << this << endl;
    }

void Personne :: affiche() const {
      cout << "Nom : " << this -> nom << endl;
      cout << "Prenom : " << this -> prenom << endl;
      cout << "Age : " << this -> age << endl;
    }

string Personne :: getNom() const{
      return this -> nom;
    }

string Personne :: getPrenom() const{
      return this -> prenom;
    }

int Personne :: getAge() const{
      return this -> age;
    }

void Personne :: setNom(const string & nom){
      this -> nom = nom;
    }

void Personne :: setPrenom(const string & prenom){
      this -> prenom = prenom;
    }

void Personne :: setAge(int age){
      this -> age = age;
    }



// Cette fonction compare deux Personnes, si elles ont les mêmes valeurs c'est-à-dire le même nom,
// prénom et âge alors la fonction retourne true, false sinon
// Après Q6 : cette fonction compare deux copies des deux paramètres (n'étant pas des constantes réf)
// Mémo : Créé les copies dans le sens inverse des paramètres et les détruit dans l'ordre des paramètres
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
