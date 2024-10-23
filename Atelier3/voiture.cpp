#include "Voiture.h"
#include <iostream>
using namespace std;
// Constructeur par défaut
Voiture::Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0f), vitesse(0.0f) {}

// Constructeur avec paramètres
Voiture::Voiture(std::string m, std::string mod, int a, float km, float v) : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}

// Méthode pour accélérer la voiture
void Voiture::accelerer(float valeur) {
    vitesse += valeur;
    cout << "La voiture accélère de " << valeur << " km/h." << endl;
}

// Méthode pour freiner la voiture
void Voiture::freiner(float valeur) {
    if (vitesse - valeur < 0) {
        vitesse = 0;
    } else {
        vitesse -= valeur;
    }
    cout << "La voiture freine de " << valeur << " km/h." << endl;
}

// Méthode pour afficher les informations de la voiture
void Voiture::afficherInfo() const {
    cout << "Marque: " << marque << endl;
    cout << "Modèle: " << modele << endl;
   cout << "Année: " << annee << endl;
    cout << "Kilométrage: " << kilometrage << " km" << endl;
    cout << "Vitesse: " << vitesse << " km/h" <<endl;
}

// Méthode pour faire avancer la voiture
void Voiture::avancer(float distance) {
    kilometrage += distance;
    cout << "La voiture a avancé de " << distance << " km." << endl;
}

// Destructeur
Voiture::~Voiture() {
    cout << "La voiture est détruite." << endl;
}
