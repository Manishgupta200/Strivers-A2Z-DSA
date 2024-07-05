#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a[20] = {1, 3, 4, 7};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    return 0;
}