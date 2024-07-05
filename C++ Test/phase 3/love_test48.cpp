// Interfaces
#include<iostream>
using namespace std;

class Animal{
    public:
    // pure virtual function
    virtual void sound() = 0;

    // normal member function
    void sleeping(){
        cout << "sleeping\n";
    }
};

class Dog: public Animal{
    public:
    void sound(){
        cout << "woof\n";
    }
};

int main(void){
    Dog obj;
    obj.sound();
    obj.sleeping();
    return 0;
}