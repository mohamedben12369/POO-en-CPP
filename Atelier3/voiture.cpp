#include "Voiture.h"
#include <iostream>
using namespace std;
 //1. Constructeur par défaut : Initialise tous les attributs avec des valeurs par défaut.
Voiture::Voiture() : marque("aucun"), modele("aucun"), annee(0), kilometrage(0), vitesse(0) {}
/*ou Voiture::Voiture() {    
    marque = "aucun";
    modele = "aucun";
    annee = 0;
    kilometrage = 0;
    vitesse = 0;
     void afficherInfo();
}*/


// 2.Constructeur  avec  paramètres  :  Permet  d'initialiser  la  voiture  avec  une  marque,  un  modèle, 
une année, un kilométrage et une vitesse initiale
Voiture::Voiture(string m,string mod, int a, float km, float v) : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}
//ou Voiture::Voiture(string m,string mod, int a, float km, float v) {marque=m;, modele=mod;, annee=a;, kilometrage=km;, vitesse=v;}


//3. Méthode accelerer(float valeur) : Incrémente la vitesse actuelle de la voiture en fonction de la 
valeur passée en paramèt
void Voiture::accelerer(float valeur) {
    vitesse += valeur;
    cout << "La voiture accélère de " << valeur << " km/h." << endl;
}

/*4. Méthode  freiner(float  valeur)  :  Diminue  la  vitesse  actuelle  de  la  voiture  en  fonction  de  la 
valeur passée en paramètre, sans que la vitesse ne devienne négative.*/
void Voiture::freiner(float valeur) {
    vitesse = (vitesse - valeur < 0) ? 0 : vitesse - valeur;
    cout << "La voiture freine de " << valeur << " km/h. Vitesse actuelle: " << vitesse << " km/h." << endl;
}


// Méthode d'affichage les informations de la voiture
void Voiture::afficherInfo() {
    cout << "Marque: " << marque << endl;
    cout << "Modèle: " << modele << endl;
   cout << "Année: " << annee << endl;
    cout << "Kilométrage: " << kilometrage << " km" << endl;
    cout << "Vitesse: " << vitesse << " km/h" <<endl;
}

/*6. Méthode avancer(float distance) : Incrémente le kilométrage en fonction de la distance passée 
en paramètre.*/
void Voiture::avancer(float distance) {
    kilometrage += distance;
    cout << "La voiture a avancé de"<< distance << " km." << endl;
}
//7. Destructeur : Affiche un message indiquant que la voiture est détruite.  
 
Voiture::~Voiture() {
    cout << "La voiture est détruite" << endl;
}
