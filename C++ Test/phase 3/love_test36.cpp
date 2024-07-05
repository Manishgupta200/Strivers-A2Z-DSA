// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout << "barking\n";
    }
};

class Human{
    public:
    string color;

    void speak(){
        cout << "speaking\n";
    }
};

class Hybrid: public Human, public Animal{

};

int main(void){
    Hybrid h1;
    h1.bark();
    h1.speak();
    cout << h1.age << endl;
    return 0;
}