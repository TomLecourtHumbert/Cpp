#ifndef __CARTON_H__
#define __CARTON_H__

#include <string>
#include <stdexcept>
#include <vector>

class Carton
{
  private:
    static const int max_Objets;
    unsigned int nbObjets;
    int volumeMax;
    int volumeReel;
    int poidsMax;
    int poidsReel;
    std::vector<Objet > contenu;
  public:
    Carton(int, int) throw (std::invalid_argument);
    //Carton & operator = (const Carton &);
};

// Q7 - L'attribut max_Objets est déclaré const pour ne pas être modifié, elle est static pour
// être accessible par d'autres classes, il sera initialisé à 10 dans le constructeur de Carton

// Q9 - Il est nécessaire de définir explicitement le constructeur par copie, le detructeur et l'opérateur
// = car au moins un attribut de la classe pointe sur une adresse dynamiquement (si le constructeur par
// copie doit être défini, alors le destructeur et l'opérateur = aussi)
