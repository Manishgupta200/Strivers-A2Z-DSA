// Copy Constructor (made by myself then default (in-built) removed automatically)
#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(int health, char level){
        this->health = health;
        this->level = level;
        cout << "parameterised constructor called\n";
    }
    
    // Default copy dead when we decleare copy constructor by myself
    Hero(Hero &temp){
        this->health = temp.health;
        this->level = temp.level;
        cout << "copy constructor called\n";
    }

    void print(){
        cout << "health: " << this->health << ", level: " << this->level << endl;
    }
};

int main(void){
    Hero h1(321, 'E');
    h1.print();

    Hero h2(h1);
    h2.print();
    return 0;
}