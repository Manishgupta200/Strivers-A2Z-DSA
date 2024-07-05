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

    void print(){
        cout << "Health: " << this->health << " " << "Level: " << this->level << endl;
    }

};

int main(void){
    Hero R(14, 'B');
    R.print();

    // Copy constructor call
    // Hero S(R);
    Hero S = R;     // 2nd method
    S.print();

    return 0;
}