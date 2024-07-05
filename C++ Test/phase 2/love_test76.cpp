#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n == 0){
        return 1;
    }
    return 2 * power(n-1);
}

int main(void){
    int n = 4;
    cout << power(n) << endl;
    return 0;
}