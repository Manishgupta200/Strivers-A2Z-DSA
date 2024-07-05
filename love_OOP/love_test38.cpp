// HYBRID INHERITANCE
// here we use hybrid = hierarchical + multiple
#include<iostream>
using namespace std;

class A{
    public:
    void funA(){
        cout << "A called\n";
    }
};

class D{
    public:
    void funD(){
        cout << "D called\n";
    }
};

class B: public A{
    public:
    void funcB(){
        cout << "B called\n";
    }
};

class C: public A, public D{
    public:
    void funC(){
        cout << "C called\n";
    }
};

int main(void){
    A obj1;
    obj1.funA();
    cout << endl;

    B obj2;
    obj2.funA();
    obj2.funcB();
    cout << endl;

    C obj3;
    obj3.funA();
    obj3.funC();
    obj3.funD();
    cout << endl;

    D obj4;
    obj4.funD();
    cout << endl;
    return 0;
}