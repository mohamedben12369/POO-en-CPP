#include "Voiture.h"
#include <iostream>

int main() {
    // Création d'une voiture avec le constructeur par défaut
    Voiture voiture1;
    voiture1.afficherInfo();

    // Création d'une voiture avec le constructeur paramétré
    Voiture voiture2("Toyota", "Corolla", 2015, 75000.0f, 100.0f);
    voiture2.afficherInfo();

    // Accélération et freinage de la voiture
    voiture2.accelerer(20.0f);
    voiture2.freiner(50.0f);
    voiture2.afficherInfo();

    // Faire avancer la voiture
    voiture2.avancer(100.0f);
    voiture2.afficherInfo();

    return 0;
}
