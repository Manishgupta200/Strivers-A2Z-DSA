#include<bits/stdc++.h>
using namespace std;

int i = 20;

void increment(int &i){
    i++;
    cout << i << " ";
}

int main(void){
    i++;
    increment(i);
    cout << i << endl;
    return 0;
}