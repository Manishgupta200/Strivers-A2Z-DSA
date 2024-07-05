// Pointers in C++ || Part-1 || DSA Placement Course - Love Babbar
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int num = 5;   
    int *ptr = &num;

    cout << "num is: " << num << endl;
    cout << "Address of num is: " << &num << endl;
    cout << "num is: " << *ptr << endl;
    cout << "Address of num is: " << ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl << endl;

    char ch = 'a';
    char *p = &ch;
    
    cout << "ch is: " << ch << endl;
    cout << "Address of ch is: " << &ch << endl;
    cout << "ch is: " << *p << endl;
    cout << "Address of ch is: " << p << endl;
    cout << "Address of p is: " << &p << endl << endl;

    cout << "size num: " << sizeof(num) << endl;
    cout << "size ptr: " << sizeof(ptr) << endl;
    cout << "size ch: " << sizeof(ch) << endl;
    cout << "size p: " << sizeof(p) << endl;
    return 0;
}