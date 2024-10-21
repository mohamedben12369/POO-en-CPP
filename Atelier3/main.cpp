#include <iostream>
using namespace std;
class voiture
{   public:
    string modele;
    string marque;
    int annedecreation;
     
    float kilometrage;
    float vitesseactuelle;
    voiture();
   
    };
voiture::voiture(){
//constructor par defaut si l'utilisateur a oublie les donnes de voiture par exemple
   
        
        modele="aucun";
        marque="aucun";
        annedecreation=2010;
        kilometrage=4500;
        vitesseactuelle=60;
   
};


int main()
{
 voiture cetroin;
 cout<<cetroin.modele;
 return 0;
}
