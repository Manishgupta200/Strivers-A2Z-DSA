#include<iostream>
using namespace std;

class Hero{
    // properties
    int health;
};

int main(void){
    // creating of object
    Hero h1;
    cout << sizeof(h1) << endl;
    return 0;
}