#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    /// when comment the below Hero().. shows an error because default constructor now dead when we delcear any constructor by myself
    // simple constructor
    Hero(){
        cout << "Constructor called\n";
    }

    // parameterised constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }
    // parameterised constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout << "Health: " << health << " ";
        cout << "Health: " << this -> health << " ";
        cout << "Level: " << level << endl;
    }
};

int main(void){
    cout << "start\n";

    // object created statically
    Hero ramesh(10);
    ramesh.print();
    cout << "address of ramesh: " << &ramesh << "\n\n";

    // dynamically
    Hero *b = new Hero(20);
    b->print();
    cout << "address of ramesh: " << &b << endl << endl;

    Hero suresh;
    suresh.print();
    
    Hero temp(35, 'H');
    temp.print();
    return 0;
}