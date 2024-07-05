#include<iostream>
using namespace std;

class Hero{
    public:
    int health;

    // parameterised constructor
    Hero(int health){
        this -> health = health;
    }

    void print(){
        cout << "Health: " << health << endl;
        cout << "Health: " << this->health << endl << endl;
    }
};

int main(void){
    // object created statically
    Hero ramesh(10);
    ramesh.print();
    
    Hero *b = new Hero(20);
    b->print();
    return 0;
}