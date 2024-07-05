#include<bits/stdc++.h>
using namespace std;

class Hero{
    // properties

    char level;

    public:
     int health;

    // getter
    int getHealth(){
        return health;
    }
    // setter
    void setHealth(int h){
        health = h;
    }
    // getter
    char getLevel(){
        return level;
    }
    // setter
    void setLevel(char l){
        level = l;
    }
};

int main(void){
    // creation og object
    // static allocation
    Hero h1;
    h1.setHealth(94);
    h1.setLevel('E');
    cout << h1.getHealth() << " " << h1.getLevel() << endl;

    // Dynamic allocation
    Hero *h2 = new Hero;
    (*h2).setHealth(87);
    h2->setLevel('F');
    cout << (*h2).getHealth() << " " << h2->getLevel() << endl;

    return 0;
}