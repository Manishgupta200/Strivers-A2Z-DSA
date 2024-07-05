#include<iostream>
using namespace std;
// swap the number using xor method
int main(void){
    int a = 5;
    int b = 7;
    cout << a << " " << b << endl;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << a << " " << b << endl;
    return 0;
}