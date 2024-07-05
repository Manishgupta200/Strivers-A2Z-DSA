#include<iostream>
using namespace std;

int main(void){
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "a: " << a << endl;
    return 0;
}