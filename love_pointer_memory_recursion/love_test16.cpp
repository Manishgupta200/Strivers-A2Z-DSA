#include<bits/stdc++.h>
using namespace std;

int main(void){
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second;
    return 0;
}