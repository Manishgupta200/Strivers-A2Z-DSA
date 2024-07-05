#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    // parameterised constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }
};

int main(void){
    cout << "start\n";

    // object created statically
    Hero ramesh(10);
    cout << "address of ramesh: " << &ramesh << "\n\n";

    Hero *b = new Hero(20);
    cout << "address of ramesh: " << &b << "\n\n";

    // Hero tt;    // error
    return 0;
}