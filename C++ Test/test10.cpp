#include<iostream>
using namespace std;

int main(){
    // typecast
    int num = 'a';
    cout << num << endl;

    char ch = 98;
    cout << ch << endl;

    
    char ch2 = 123456;
    cout << ch2 << endl;

    // In case of ch2
/*
    warning: overflow in implicit constant conversion [-Woverflow]
     char ch2 = 123456;
                ^~~~~~
*/
    return 0;
}