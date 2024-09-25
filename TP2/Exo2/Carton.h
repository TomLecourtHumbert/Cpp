#ifndef __CARTON_H__
#define __CARTON_H__

#include "Objet.h"
#include <stdexcept>
#include <vector>
#include <ostream>

class Carton{
  private:
    static const int max_Objets;
    unsigned int nbObjets;
    int volumeMax;
    int volumeReel;
    int poidsMax;
    int poidsReel;
    std::vector<Objet> contenu;
  public:
    Carton(int, int); //throw (std::invalid_argument)
    //Carton & operator = (const Carton &);
    int contient(const Objet&) const;
    void ajouteObjet(const Objet&); //throw (std::invalid_argument)
    Carton & operator += (const Objet &);
    Carton & operator -= (const Objet &);
    std::ostream & afficher(std::ostream &) const;
    const Objet & operator[ ](unsigned int) const;
};

std::ostream& operator<<(std::ostream&, const Carton &);

#endif

//passing ‘const Carton’ as ‘this’ argument discards   ->   Problème de const

// Q7 - L'attribut max_Objets est déclaré const pour ne pas être modifié, elle est static pour
// être accessible par d'autres classes, il sera initialisé à 10 dans le constructeur de Carton

// Q9 - Il n'est pas nécessaire de définir le constructeur par copie, le destructeur et l'opérateur = car
// aucun attribut d'instance ne pointe sur un objet
