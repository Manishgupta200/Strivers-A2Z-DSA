// Access Modifiers
// Default -> private
#include<iostream>
using namespace std;

class Hero{
    // properties
    public:
    int health;

    // private:    // private members can be accessiable only within class
    char level;

    void print(){
        cout << level << endl;
    }
};

int main(void){
    // creation of objects
    Hero h1;    // Static allocation

    h1.health = 70;
    h1.level = 'A';

    cout << h1.health << endl;
    cout << h1.level << endl;
    return 0;
}