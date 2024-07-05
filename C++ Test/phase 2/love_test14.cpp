#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl << endl;

    cout << &p << endl;
    cout << p2 << endl << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    return 0;
}