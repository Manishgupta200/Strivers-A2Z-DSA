#include<iostream>
using namespace std;

// Empty class takes 1 byte of size to keep identification of class, to keep the track
class Hero{
    // properties
};

int main(void){
    // creating of object
    Hero h1;
    cout << sizeof(h1) << endl;
    return 0;
}