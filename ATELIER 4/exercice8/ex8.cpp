#include <iostream>
#include <cstring> // Pour utiliser memset
using namespace std;

class Fichier {
private:
    char *P; // Pointeur vers la zone mémoire
    int longueur; // Taille en octets

public:
    Fichier(int taille) : longueur(taille) {
        P = new char[longueur]; // Allocation de mémoire
        cout << "Mémoire de " << longueur << " octets allouée." << endl;
    }

    void Remplit(char valeur) {
        memset(P, valeur, longueur); // Remplit la zone mémoire
    }

    void Affiche() const {
        for (int i = 0; i < longueur; ++i) {
            cout << P[i] << " ";
        }
        cout << endl;
    }

    ~Fichier() {
        delete[] P; // Libération de la mémoire
        cout << "Mémoire libérée." << endl;
    }
};

int main() {
    Fichier fichier(10); // Création d'un objet Fichier avec 10 octets
    fichier.Remplit('A'); // Remplit la mémoire avec 'A'
    fichier.Affiche(); // Affiche le contenu de la mémoire
    return 0;
}
