#ifndef __PERSONNE_H__
#define __PERSONNE_H__

#include <string>

class Personne{
  private:
    std::string nom;
    std::string prenom;
    int age;
  public:
    Personne (const std::string & nom, const std::string & prenom, int age);
    Personne ();
    Personne (const Personne& personne);
    ~Personne();

    void affiche() const;
    std::string getNom() const;
    std::string getPrenom() const;
    int getAge() const;
    void setNom(const std::string & nom);
    void setPrenom(const std::string & prenom);
    void setAge(int age);
};

bool compare (Personne, Personne);
void afficher(const Personne&);

#endif
