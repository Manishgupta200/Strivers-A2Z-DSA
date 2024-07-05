#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    // getter
    int getHealth(){
        return health;
    }

    // setter
    void setHealth(int h){
        health = h;
    }
};

int main(void){
    // static allocation
    Hero a;
    a.setHealth(70);
    a.level = 'A';
    cout << "Hero size: " << sizeof(a) << endl;
    cout << "health: " << a.getHealth() << endl;
    cout << "level: " << a.level << endl;

    // dynamically
    Hero *b = new Hero;
    (*b).setHealth(20);
    (*b).level = 'D';
    cout << "Hero size: " << sizeof(*b) << endl;
    cout << "health: " << (*b).getHealth() << endl;
    cout << "level: " << (*b).level << endl;


    b->setHealth(30);
    b->level = 'K';
    cout << "Hero size: " << sizeof(*b) << endl;
    cout << "health: " << b -> getHealth() << endl;
    cout << "level: " << b->level << endl;
    return 0;
}