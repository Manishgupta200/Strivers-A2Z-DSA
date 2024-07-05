#include<bits/stdc++.h>
using namespace std;

    void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

    int main(){
        int a = 70;
        update(&a);
        cout << a << endl;
    }
