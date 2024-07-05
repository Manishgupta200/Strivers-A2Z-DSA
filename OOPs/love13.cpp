// COPY CONSTRUCTOR
#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &temp){
        cout << "Default copy dead when we decleare copy constructor by myself\n";
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "Health: " << this->health << " " << "Level: " << this->level << endl;
    }

};

int main(void){
    Hero R(14, 'B');
    R.print();

    // Copy constructor call
    Hero S(R);
    S.print();

    cout << endl;
    Hero K(R);

    return 0;
}