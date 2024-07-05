// MULTI-LEVEL INHERITANCE
#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout << "speaking\n";
    }
};

class Dog: public Animal{

};

class GS: public Dog{

};

int main(void){
    GS d;
    d.speak();
    cout << d.age << endl;
    return 0;
}