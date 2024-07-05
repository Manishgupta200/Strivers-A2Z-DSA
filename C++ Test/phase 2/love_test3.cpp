#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i = 5;
    cout << &i << " " << i << endl;

    int *p = 0;
    p = &i;
    cout << p << " " << *p << endl;

    int *q = &i;
    cout << q << " " << *q << endl;
    return 0;
}