// SINGLE INHERITANCE
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

int main(void){
    Dog d;
    d.speak();
    cout << d.age << endl;
    return 0;
}