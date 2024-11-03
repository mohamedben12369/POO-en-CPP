#include <iostream>
#include <vector>
using namespace std;

class Pile {
private:
    vector<int> elements;

public:
    void push(int valeur) { elements.push_back(valeur); } // Empile un élément
    void pop() {
        if (!elements.empty()) {
            elements.pop_back(); // Dépile le dernier élément
        } else {
            cout << "La pile est vide!" << endl;
        }
    }
    void afficher() const {
        for (int el : elements) {
            cout << el << " ";
        }
        cout << endl;
    }
};

int main() {
    Pile p1;
    p1.push(10);
    p1.push(20);
    p1.afficher(); // Affiche les éléments de la pile
    p1.pop();
    p1.afficher(); // Affiche après avoir dépilé un élément

    return 0;
}
