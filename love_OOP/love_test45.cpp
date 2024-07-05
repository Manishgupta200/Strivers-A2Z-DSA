// Operator overloading
#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    // int add(){
    //     return a + b;
    // }

    // operator overloading
    void operator + (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout << value2 - value1 << endl;
        // cout << "Babbar bhaiya please help\n";
    }

    void operator () (){
        cout << "mai bracket huu " << this->a << endl;
    }
};

int main(void){
    B obj1, obj2;

    obj1.a = 5;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
    return 0;
}