// Default is Shallow Constructor (copy)
// Default copy constructor Shallow copy karta hai
#include<iostream>
using namespace std;

class Hero{
    public:
    int health;

    Hero(){
        
    }

    // Hero(Hero &temp){
    //     this->health = temp.health;
    //     cout << "this copy constructor called\n";
    // }

    void print(){
        cout << "health: " << this->health << endl;
    }
};

int main(void){
    Hero h1;
    h1.health = 99;
    h1.print();

   // use default (in-built) copy constructor
    Hero h2(h1);
    h2.print();

    h2.health = 100;
    h2.print();
    h1.print();
    return 0;
}