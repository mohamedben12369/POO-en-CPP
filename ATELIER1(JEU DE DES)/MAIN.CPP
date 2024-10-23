#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int throwdice() {
    return (rand() % 6) + 1;
}

int playerturn() {
    int m;
    cout << "Voulez-vous lancer 1 ou 2 d�s ? ";
    cin >> m;

    while (m != 1 && m!= 2) {
        cout << "Choix invalide. Choisissez 1 ou 2 : ";
        cin >> m;
    }

    if (m== 1) {
        int resultat = throwdice();
        cout << "R�sultat du lancer du d� : " << resultat << endl;
        return resultat;
    } else {
        int resultat1 =  throwdice();
        int resultat2 =  throwdice();
        cout << "R�sultat des deux d�s : " << resultat1 << " et " << resultat2 << endl;

        if (resultat1 == resultat2) {
            cout << "Les deux d�s sont identiques, on soustrait leur somme : " << -(resultat1 + resultat2) << endl;
            return -(resultat1 + resultat2);
        } else {
            cout << "Les deux d�s sont diff�rents, on additionne leur somme : " << resultat1 + resultat2 << endl;
            return resultat1 + resultat2;
        }
    }
}

int main() { srand(time(0));

    int scoreJoueur1 = 0;
    int scoreJoueur2 = 0;

    while (scoreJoueur1 < 30 && scoreJoueur2 < 30) {
        cout << "\n--- Tour de Joueur 1 ---" << endl;
        scoreJoueur1 += playerturn();
        cout << "Score de Joueur 1 : " << scoreJoueur1 << endl;
        if (scoreJoueur1 >= 30) break;

        cout << "\n--- Tour de Joueur 2 ---" << endl;
        scoreJoueur2 += playerturn();
        cout << "Score de Joueur 2 : " << scoreJoueur2 << endl;
    }

    cout << "\n--- Fin du jeu ---" << endl;
    if (scoreJoueur1 >= 30 && scoreJoueur2 >= 30) {
        cout << "Match nul ! Les deux joueurs ont d�pass� 30 points." << endl;
    } else if (scoreJoueur1 >= 30) {
        cout << "Joueur 1 a gagn� avec un score de " << scoreJoueur1 << " !" << endl;
    } else if (scoreJoueur2 >= 30) {
        cout << "Joueur 2 a gagn� avec un score de " << scoreJoueur2 << " !" << endl;
    }


  return 0;
}
