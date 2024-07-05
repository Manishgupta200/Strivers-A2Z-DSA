// Destructor (memory de-allocate)
#include<iostream>
using namespace std;

class Hero{
    public:
    
    // constructor
    Hero(){
        cout << "constructor called\n";
    }

    // destructor
    ~Hero(){
        cout << "destructor called\n";
    }
};

int main(void){
    // static
    Hero h1;    //destructor called automatically
    
    // dynamic
    Hero *h2 = new Hero();
    delete h2;  // destructor called manually
    return 0;
}