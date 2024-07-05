#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(){
        cout << "Constructor called\n";
    }
    Hero(int h){
        cout << "Health: " << h << endl;
    }
};

int main(void){
    cout << "start\n";

    // object created statically
    Hero ramesh;

    // dynamically
    Hero *h = new Hero;

    // dynamically
    Hero *b = new Hero();
    
    Hero *k = new Hero(85);
    
    Hero mohan(93);

    cout << "end\n";
    return 0;
}