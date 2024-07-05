#include<iostream>
using namespace std;
// Infinite recursion
void f(){
    cout << 1 << endl;
    f();
}

int main(void){
    f();
    return 0;
}