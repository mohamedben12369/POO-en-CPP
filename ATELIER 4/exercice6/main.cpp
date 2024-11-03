#include "Point.h"

int main() {
    Point p(1.5, 2.5); // Création d'un point
    p.affiche(); // Affiche les coordonnées
    p.deplace(2.0, -1.0); // Déplace le point
    p.affiche(); // Affiche les nouvelles coordonnées
    return 0;
}
