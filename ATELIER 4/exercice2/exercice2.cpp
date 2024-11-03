#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
 string name;
  int age;

public:
    Animal(string n, int a) : name(n), age(a) {}
    virtual void set_value() = 0;
};
//class Zebra irite le class animal
class Zebra:public Animal{
public:
Zebra(string n,int a):Animal(n,a){}
void set_value()override{cout<<"Zebra,Name:"<<name<<"Age:"<<age<<"Origin:Africa\n";}
};

class Dolphin:public Animal{
public:
Dolphin(string n,int a):Animal(n,a){}
 
void set_value(){cout<<"Dolphin,Name:"<<name<<"Age:"<<age<<"Habitat:Oceans\n";}
};

int main(){
Zebra z("Zara",5);
Dolphin d("Dolly",8);
z.set_value();
d.set_value();
    return 0;
}
