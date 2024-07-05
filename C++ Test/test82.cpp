// Inheritance example
#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    int age;
    public:
    Employee(string name, int age){
        this->name = name;
        this->age = age;
        cout << "hii\n";
    }
};

class Teacher: Employee{
    public:
    string mark;
    Teacher(string name, int age, string mark): Employee(name, age){
        cout << "Hello\n";
    }
};

int main(void){
    // Employee emp = Employee("Manush", 786);
    Teacher emp("Manush", 786, "MAn");

    
    return 0;
}