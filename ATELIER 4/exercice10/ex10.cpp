#include <iostream>
#include <string>
using namespace std;
class DateHeure{
private:
    string dateHeure;

public:
    DateHeure(const string& dh) : dateHeure(dh) {}

    void extraireEtAfficher() const {
        if (dateHeure.size() != 12) {
            cout << "Erreur : la chaîne doit contenir exactement 12 caractères." << endl;
            return;
        }

        string jour = dateHeure.substr(0, 2);
        string mois = dateHeure.substr(2, 2);
        string annee = dateHeure.substr(4, 4);
        string heure = dateHeure.substr(8, 2);
        string minute = dateHeure.substr(10, 2);

        cout << "Date : " << jour << "/" << mois << "/" << annee << endl;
        cout << "Heure : " << heure << "h" << minute << endl;
    }
};

int main() {
    string chaine;
    cout << "Entrez la chaîne de date et heure (format JJMMAAAAHHNN) : ";
    cin >> chaine;

    DateHeure dh(chaine);
    dh.extraireEtAfficher();

    return 0;
}
