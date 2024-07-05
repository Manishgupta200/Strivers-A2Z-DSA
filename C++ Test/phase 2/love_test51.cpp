#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a = 5;
    // PASS BY REFERENCE
    int &b = a;
    a++;
    cout << "b = " << b << endl;
    return 0;
}