#include<iostream>
using namespace std;

// function problem
// 1 - Even
// 0 - Odd
bool isEven(int a){
    if(a & 1){
        return 0;
    }
    return 1;
}

int main(void){
    bool res = isEven(1);
    if(res) cout << "Even";
    else    cout << "Odd";
    return 0;
}