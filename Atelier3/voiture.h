#ifndef VOITURE_H
#define VOITURE_H
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
    Voiture();
    // Constructeur avec paramètres
    Voiture(string m,string mod, int a, float km, float v);
    // Méthode pour accélérer la voiture
    void accelerer(float valeur);
    // Méthode pour freiner la voiture
    void freiner(float valeur);
    // Méthode pour afficher les informations de la voiture
    void afficherInfo() const;
    // Méthode pour faire avancer la voiture
    void avancer(float distance);
    // Destructeur
    ~Voiture();
};

#endif
