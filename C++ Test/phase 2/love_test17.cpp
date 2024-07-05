#include<bits/stdc++.h>
using namespace std;

int main(void){
    int i = 6;
    int *p = &i;
    int *q = p;
    (*q)++;
    cout << i << endl;
    return 0;
}