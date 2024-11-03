#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Traitement {
private:
    vector<int> valeurs;

public:
    // Méthode pour saisir et stocker les entiers pairs non nuls
    void initialise() {
        int nombre;
        cout << "Veuillez entrer 15 entiers pairs et non nuls :\n";
        while (valeurs.size() < 15) {
            cout << "Entrez un entier pair et non nul : ";
            cin >> nombre;
            if (nombre % 2 == 0 && nombre != 0) {
                valeurs.push_back(nombre);
            } else {
                cout << "Erreur : veuillez entrer un entier pair et non nul.\n";
            }
        }
    }

    // Méthode pour afficher les éléments du vecteur avec récursivité
    void afficherRecursif(int index = 0) const {
        if (index < valeurs.size()) {
            cout << valeurs[index] << " ";
            afficherRecursif(index + 1);
        } else {
            cout << endl;
        }
    }

    // Déclaration des fonctions amies
    friend double moyenne(const Traitement &t);
    friend double mediane(Traitement t); // Prend une copie pour pouvoir trier
};

// Fonction amie pour calculer la moyenne des éléments
double moyenne(const Traitement &t) {
    double somme = 0;
    for (int val : t.valeurs) {
        somme += val;
    }
    return somme / t.valeurs.size();
}

// Fonction amie pour calculer la médiane des éléments
double mediane(Traitement t) {
    sort(t.valeurs.begin(), t.valeurs.end()); // Trie le vecteur
    int n = t.valeurs.size();
    if (n % 2 == 0) {
        return (t.valeurs[n / 2 - 1] + t.valeurs[n / 2]) / 2.0;
    } else {
        return t.valeurs[n / 2];
    }
}

int main() {
    Traitement traitement;
    traitement.initialise();

    cout << "Valeurs saisies : ";
    traitement.afficherRecursif();

    cout << "Moyenne des valeurs : " << moyenne(traitement) << endl;
    cout << "Médiane des valeurs : " << mediane(traitement) << endl;

    return 0;
}
