#ifndef __OBJET_H__
#define __OBJET_H__

#include <string>
#include <stdexcept>

class Objet{
  private:
    std::string nom;
    int volume;
    int poids;
  public:
    //Objet();
    Objet(const std::string & nom="", int volume=0, int poids=0) throw(std::invalid_argument);
    // Aucun attribut de la classe ne pointe sur une adresse dynamiquement
    // Donc pas de constructeur par copie, de destructeur ou d'opérateur = à définir
    // Définis automatiquement
    int getVolume() const;
    int getPoids() const;
    void setNom(const std::string &);
    void setPoids(int);
    bool estVide();
    std::ostream& afficher(std::ostream&) const;
    std::istream& saisir(std::istream&);
    bool operator == (const Objet &) const;
};

std::istream& operator>>(std::istream&);
std::ostream& operator<<(std::ostream&) const;

#endif
