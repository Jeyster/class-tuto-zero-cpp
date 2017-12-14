#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    // Méthodes
    public:

    Personnage();
    Personnage(std::string nom);
    Personnage(std::string nomArme, int degatsArme);
    Personnage(std::string nom, std::string nomArme, int degatsArme);
    ~Personnage();
    std::string getNom() const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(Arme nouvelleArme);
    bool estVivant() const;
    void afficher() const;

    // Attributs
    private:

    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif // DEF_PERSONNAGE
