#include<iostream>
using namespace std;
// xor of 1 to n
int main(void){
    int n = 5;
    if(n % 4 == 0){
        cout << n;
    }
    else if(n % 4 == 1){
        cout << 1;
    }
    else if(n % 4 == 2){
        cout << n+1;
    }
    else if(n % 4 == 3){
        cout << 0;
    }
    cout << endl;
    return 0;
}