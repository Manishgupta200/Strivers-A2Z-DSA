// https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382240
#include<iostream>
using namespace std;

class A{
    float d;
    public:
        int a;
        void modify(int i){
            a = i;
        }
        void getA(){
            cout << a;
        }
};

class B: public A{
    int a = 15;
    public:
    void print(){
        cout << a;
    }
};
int main(void){
    B b;
    b.modify(10);
    b.print();
    b.getA();
    return 0;
}