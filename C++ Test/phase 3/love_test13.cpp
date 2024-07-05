#include<iostream>
using namespace std;

class Hero{
    public:
    // properties
    int health;
    char level;

    // when comment the below Hero().. shows an error because default constructor now dead when we delcear any constructor by myself
    // simple constructor
    Hero(){
        cout << "simple costructor called\n";
    }
    // parameterised constructor
    Hero(int health){
        this->health = health;
        cout << "single parameter parameterised costructor called\n";
    }
    // parameterised constructor
    Hero(int health, char level){
        this->health = health;
        this->level = level;
        cout << "double parameter parameterised costructor called\n";
    }

    void print(){
        cout << "Health: [" << health << ", ";
        cout << this -> health << "] ";
        cout << "Level: [" << level << ", ";
        cout << this -> level << "] " << endl << endl;
    }
};

int main(void){
    // object created statically
    Hero h1;
    h1.print();

    // object created statically
    Hero h2(10);
    h2.print();

    // object created statically
    Hero h3(23, 'W');
    h3.print();

    // object created dynamically
    Hero *h4 = new Hero;
    h4->print();

    // object created dynamically
    Hero *h5 = new Hero(32);
    h5 -> print();

    // object created dynamically
    Hero *h6 = new Hero(43, 'U');
    h6->print();
    
    h6->health = 444;
    h6->print();

    return 0;
}