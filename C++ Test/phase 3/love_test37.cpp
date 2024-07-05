// HIERARCHICAL INHERITANCE
#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout << "function 1 called\n";
    }
};

class B: public A{
    public:
    void func2(){
        cout << "function 2 called\n";
    }
};

class C: public A{
    public:
    void func3(){
        cout << "function 3 called\n";
    }
};

int main(void){
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();
    return 0;
}