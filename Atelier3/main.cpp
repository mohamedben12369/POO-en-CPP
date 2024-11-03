#include "Voiture.h"
#include <iostream>

int main() {
   
    Voiture voiture1;
    voiture1.afficherInfo();

    // Création d'une voiture avec le constructeur paramétré
    Voiture voiture2("seat", "Ibiza",2023, 5000, 120);
    voiture2.afficherToyotaInfo();
    return 0;
}
