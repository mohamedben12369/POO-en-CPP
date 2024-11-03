#include <iostream>
using namespace std;
class Complex {
private:
    float reel;
    float img;
public:
    Complex(float r=0.0,float i=0.0):reel(r),img(i){}
    Complex operator+(const Complex &c) { return Complex(reel+c.reel,img+c.img); }
    Complex operator-(const Complex &c) { return Complex(reel-c.reel,img-c.img);}
    Complex operator*(const Complex &c) { return Complex(reel*c.reel-img*c.img,reel*c.img+img*c.reel);}
    Complex operator/(const Complex &c) {
        float denominator = c.reel * c.reel + c.img * c.img;
        return Complex((reel * c.reel + img * c.img) / denominator, (img * c.reel - reel * c.img) / denominator);
    }

    void display(){cout<<"la resulte est dans c3 r3="<<reel<<"img:"<<img<<endl;}
};

int main() {
    float r1, i1, r2, i2;
  cout<<"saisiez le nombre reel de premier nombre: r1=";
   cin>>r1;
  cout<<"saisiez le nombre complex de premier nombre: i1=";
   cin>>i1;
  cout<<"saisiez le nombre complex de deuxieme nombre: r2=:";
  cin>>r2;
cout<<"saisiez le nombre complex de premier nombre: i2=";
   cin>>i2;

 Complex c1(r1,i1);
 Complex c2(r2,i2);

int choix;
cout<<"choisir l'operation :1.Add 2.Subtract 3.Multiply 4.Divide:";
cin>>choix;
 
    Complex c3;
    switch (choix) {
case 1:c3=c1+c2;break;
case 2:c3=c1-c2;break;
case 3:c3=c1*c2;break;
case 4:c3=c1/c2;break; 
default:cout<<"Invalid choix.";

} 
   c3.display();
    return 0;
}
