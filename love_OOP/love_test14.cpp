// Copy Constructor (default in-built)
#include<iostream>
using namespace std;

class Hero{
    // Access modifiers
    public:
    // properties
    int health;
    char level;

    Hero(int health, char level){
        this->health = health;
        this->level = level;
        cout << "parameterised constructor called\n";
    }

    void print(){
        cout << "health: " << this->health << ", level: " << this->level << endl;
    }
    
};

int main(void){
    Hero h1(123, 'Z');
    h1.print();

    // Dafault copy constructor called
    Hero h2(h1);
    h2.print();
    return 0;
}