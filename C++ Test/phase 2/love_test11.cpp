#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    *p = *p + 1;
    cout << *p << endl;
}

int main(void){
    int value = 5;
    int *p = &value;

    cout << "before: " << *p << endl;
    print(p);
    // p = p + 1;
    cout << "after: " << *p << endl;
    return 0;
}