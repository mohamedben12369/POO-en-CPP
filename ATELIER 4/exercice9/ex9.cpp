#include <iostream>
using namespace std;

// Structure pour représenter un élément de la liste
struct Element {
    int data;
    Element* suivant;

    Element(int valeur) : data(valeur), suivant(nullptr) {}
};

// Classe Liste pour gérer la liste chaînée
class Liste {
private:
    Element* premier;

public:
    Liste() : premier(nullptr) {}

    // Méthode pour ajouter un élément au début de la liste
    void ajouterDebut(int valeur) {
        Element* nouvelElement = new Element(valeur);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    // Méthode pour supprimer un élément au début de la liste
    void supprimerDebut() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        } else {
            cout << "La liste est déjà vide." << endl;
        }
    }

    // Méthode pour afficher tous les éléments de la liste
    void afficher() const {
        Element* courant = premier;
        while (courant != nullptr) {
            cout << courant->data << " -> ";
            courant = courant->suivant;
        }
        cout << "nullptr" << endl;
    }

    // Destructeur pour libérer la mémoire
    ~Liste() {
        while (premier != nullptr) {
            supprimerDebut();
        }
    }
};

int main() {
    Liste maListe;
    maListe.ajouterDebut(10);
    maListe.ajouterDebut(20);
    maListe.ajouterDebut(30);

    cout << "Contenu de la liste : ";
    maListe.afficher();

    maListe.supprimerDebut();
    cout << "Après suppression du premier élément : ";
    maListe.afficher();

    return 0;
}
