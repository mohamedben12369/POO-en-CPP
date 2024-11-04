#include <iostream>

using namespace std;
template <typename T>
class NombreComplexe {
private:
    T reel;
    T img;

    public:
        NombreComplexe(T reel,T img):reel(0),img(0)();

        NombreComplexe(T reel,T img):reel(reel),img(img){
     
        }
         NombreComplexe(const NombreComplexe&autre):reel(autre.reel),imaginaire(autre.imaginaire){}
        
        void afficher() {
        cout << reel << " ";
        if(img>=0){cout<<"+ "<<img<<"i"<<endl;}
        else {cout << "- " << -img << "i" << endl;}}};
         NombreComplexe operator+(NombreComplexe& autre) {
        return NombreComplexe(reel + autre.reel, imaginaire + autre.imaginaire);
}
    NombreComplexe operator-(NombreComplexe& autre) {
        return NombreComplexe(reel - autre.reel, img - autre.imaginaire);
}    NombreComplexe operator*(NombreComplexe& autre) {
        return NombreComplexe(reel * autre.reel, img * autre.img,img*autre.reel,img*autre.img);
}   NombreComplexe operator/(NombreComplexe& autre) {
        return NombreComplexe(reel+img/autre.reel+autre.img);
}

};

int main()
{ NombreComplexe a,b,c;
a.img=5;
a.reel=5;
b.img=8;
b.reel=2;
c=a+b;
c.afficher();

}
