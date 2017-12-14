#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

Personnage::Personnage() : m_nom("Personnage"), m_vie(100), m_mana(100)
{
}

Personnage::Personnage(string nom) : m_nom(nom), m_vie(100), m_mana(100)
{
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nom(nom), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{
}

Personnage::~Personnage()
{
}

string Personnage::getNom() const
{
    return m_nom;
}

void Personnage::recevoirDegats(int nbDegats)
{
    cout << "Aie !! " << m_nom << " a perdu " << nbDegats << " point de vie !" << endl;

    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cout << m_nom << " attaque " << cible.getNom() << endl;

    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    cout << m_nom << " boit une potion et recupere " << quantitePotion << " points de vie." << endl;

    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(Arme nouvelleArme)
{
    m_arme.changer(nouvelleArme.getNom(), nouvelleArme.getDegats());

    cout << m_nom << " change d'arme." << endl;
    m_arme.afficher();
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}

void Personnage::afficher() const
{
    cout << endl;
    cout << m_nom << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
    cout << endl;
}
