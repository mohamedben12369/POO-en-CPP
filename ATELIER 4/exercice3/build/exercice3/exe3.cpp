#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string surname;
    string birth_date;

public:
    Person(string n, string s, string b) : name(n), surname(s), birth_date(b) {}
    virtual void Afficher() { cout << "Name: " << name << ", Surname: " << surname << ", Birth Date: " << birth_date << endl; }
};

class Employee : public Person {
protected:
    double salary;

public:
    Employee(string n, string s, string b, double sal) : Person(n, s, b), salary(sal) {}
    void Afficher() override {
        Person::Afficher();
        cout << "Salary: " << salary << endl;
    }
};

class Chef : public Employee {
protected:
    string service;

public:
    Chef(string n, string s, string b, double sal, string srv) : Employee(n, s, b, sal), service(srv) {}
    void Afficher() override {
        Employee::Afficher();
        cout << "Service: " << service << endl;
    }
};

class Director : public Chef {
protected:
    string company;

public:
    Director(string n, string s, string b, double sal, string srv, string comp) : Chef(n, s, b, sal, srv), company(comp) {}
    void Afficher() override {
        Chef::Afficher();
        cout << "Company: " << company << endl;
    }
};

int main() {
    Director d("John", "Doe", "01/01/1970", 50000, "IT", "TechCorp");
    d.Afficher();
    return 0;
}
