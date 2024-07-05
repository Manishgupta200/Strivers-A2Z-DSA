// Lecture 43 : 4 Pillars of OOPs Concept -Inheritance, Polymorphism, Encapsulation & Abstraction
// INCAPSULATION
#include<iostream>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
};

int main(void){
    Student first;
    return 0;
}