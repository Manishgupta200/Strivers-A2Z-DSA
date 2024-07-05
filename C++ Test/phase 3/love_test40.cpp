// https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382238
#include<iostream>
using namespace std;

class Base{
    public:
    void fun(){
        cout << "I am Base\n";
    }
};

class Derived: public Base{
    public:
    void fun(){
        cout << "I am Derived\n";
    }
};

int main(void){
    Derived d;
    d.fun();
    return 0;
}