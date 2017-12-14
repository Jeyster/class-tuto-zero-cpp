#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
    public:

    Arme();
    Arme(std::string nom, int degats);
    std::string getNom() const;
    int getDegats() const;
    void changer(std::string nom, int degats);
    void afficher() const;


    private:

    std::string m_nom;
    int m_degats;
};

#endif // DEF_ARME

