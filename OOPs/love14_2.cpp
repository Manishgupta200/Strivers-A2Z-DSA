#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;

    Hero(){

    }

    // copy constructor (shallow)
    Hero(Hero &temp){
        this->health = temp.health;
    }

    // getter
    int getHealth(){
        return health;
    }

    // setter
    void setHealth(int health){
        this->health = health;
    }

    void print(){
        cout << this->health << endl;
    }

};

int main(void){
    Hero hero1;
    hero1.setHealth(89);
    hero1.print();

    Hero hero2 = hero1;
    hero2.print();

    cout << endl;
    hero1.setHealth(54);
    hero1.print();
    hero2.print();
    
    return 0;
}