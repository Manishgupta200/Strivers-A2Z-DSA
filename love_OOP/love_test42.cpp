// Function overloading with different types of arguments
#include<iostream>
using namespace std;

class A{
    public:
    // Here function signature is different. So, not show any error
    void sayHello(){
        cout << "Hello Love Babber\n";
    }
    void sayHello(string name){
        cout << "Hello " << name << endl;
    }
    void sayHello(int name){
        cout << "Hello " << name << endl;
    }
};

int main(void){
    A obj;
    obj.sayHello();
    obj.sayHello("Manish Gupta");
    return 0;
}