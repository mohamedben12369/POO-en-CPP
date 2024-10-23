#include <iostream>
#include <string>
using namespace std ;
class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0f), vitesse(0.0f) {}

    // Constructeur avec paramètres
    Voiture(string m, string mod, int a, float km, float v) : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}

    // Méthode pour accélérer la voiture
    void accelerer(float valeur) {
        vitesse += valeur;
      cout << "La voiture accélère de " << valeur << " km/h." << endl;
    }

    // Méthode pour freiner la voiture
    void freiner(float valeur) {
        if (vitesse - valeur < 0) {
            vitesse = 0;
        } else {
            vitesse -= valeur;
        }
        cout << "La voiture freine de " << valeur << " km/h." << endl;
    }

    // Méthode pour afficher les informations de la voiture
    void afficherInfo() const {
        cout << "Marque: " << marque << endl;
        cout << "Modèle: " << modele << endl;
        cout << "Année: " << annee << endl;
        cout << "Kilométrage: " << kilometrage << " km" << endl;
        cout << "Vitesse: " << vitesse << " km/h" << endl;
    }

    // Méthode pour faire avancer la voiture
    void avancer(float distance) {
        kilometrage += distance;
        cout << "La voiture a avancé de " << distance << " km." << endl;
    }

    // Destructeur
    ~Voiture() {
        cout << "La voiture est détruite." << endl;
    }
};

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
