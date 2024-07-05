#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    void print(){
        cout << level << " " << health << endl;
    }

    // getter/setter
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }

};

int main(void){
    Hero h1;        // hero type ka object ban gaya hai
    // use setter
    h1.setHealth(70);
    h1.level = 'A';
    cout << h1.getHealth() << endl;
    cout << h1.level << endl;
    return 0;
}