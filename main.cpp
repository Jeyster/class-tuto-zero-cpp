#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arme.h"

using namespace std;

int main()
{
    Personnage david("David"), goliath("Goliath", "Epee aiguisee", 20);
    //Création de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david);    //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath réattaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?
    Arme doubleHache("Double hache tranchante veneneuse de la mort", 40);
    goliath.changerArme(doubleHache);
    goliath.attaquer(david);

    david.afficher();
    goliath.afficher();

    return 0;
}
