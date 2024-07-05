// this keyword
#include<iostream>
using namespace std;

class Hero{
    public:
    // properties
    int health;

    Hero(int health){
        this->health = health;
        cout << "constructor called\n";
        cout << "this: " << this << endl;
    }
};

int main(void){
    // object created statically
    // Hero h1;    // default constructor is now removed, so doesn't work
    // Hero h1();     // no error but doesn't return anything
    Hero h1(98);
    cout << "&h1: " << &h1 << endl;

    // object created dynamically
    Hero *h2 = new Hero(98);
    cout << "&h1: " << &h1 << endl;
    
    return 0;
}