#include<iostream>
using namespace std;

class Hero{
    public:
    // properties
    // simple constructor
    Hero(){
        cout << "constructor called amd default (in-built) constructor is now removed\n";
    }

    // Parameterised Constructor
    Hero(int h){
        cout << "Parameterised constructor called\n";
    }
};

int main(void){
    cout << "hi\n";
    // creation of objects
    Hero h1;    // object created statically
    
    Hero *h2 = new Hero;    // object created dynamically
    Hero *h3 = new Hero();    // object created dynamically

    Hero *h4 = new Hero(43);  // object created dynamically
    Hero h5(432);   // object created statically

    cout << "hello\n";
    return 0;
}