#include<bits/stdc++.h>
using namespace std;

int main(void){
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
    return 0;
}