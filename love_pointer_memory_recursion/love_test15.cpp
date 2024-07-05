#include<bits/stdc++.h>
using namespace std;

void update(int **p){
    // p = p + 1;  // No changes in main

    // *p = *p + 1;    // Yes Changes in main 

    // **p = **p + 1;      // Yes Changes in main
}

int main(void){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl << endl;
    update(p2);
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    return 0;
}