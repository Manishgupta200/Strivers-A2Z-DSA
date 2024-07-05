// Inheritance Ambiguity
#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout << "I am A\n";
    }
};

class B{
    public:
    void func(){
        cout << "I am B\n";
    }
};

class C: public A, public B{
    
};

int main(void){
    C obj;
    obj.A::func();
    obj.B::func();
    return 0;
}