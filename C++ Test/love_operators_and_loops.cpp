#include<iostream>
using namespace std;

int main(){
    cout << (2 & 3) << endl;
    cout << (2 | 4) << endl;
    cout << ~2 << endl;     // generally used to print negative number
    cout << (2 ^ 4) << endl;
    cout << (3 << 2) << endl;
    cout << (5 >> 2) << endl;
    cout << (21 << 2) << endl;

    int i = 4;
    int a = i++;    //post increment matlab pehele i ko use karlo phir i ko badhado
    cout << "a: " << a << endl;
    cout << "i: " << i << "\n\n";
    int j = 4;
    int b = ++j;    //pre increment matlab pehele j ko increment karo phir usko use karo
    cout << "b: " << b << endl;
    cout << "j: " << j << endl;

    int k = 7;
    cout << (++k) << endl;  //{8}
    cout << (k++) << endl;  //{8}
    // cout << (k--) << endl;  //{9}
    // cout << (--k) << endl;  //{7}
    cout << (--k) << endl;  
    cout << (k--) << endl;
    cout << k << endl;

    return 0;
}