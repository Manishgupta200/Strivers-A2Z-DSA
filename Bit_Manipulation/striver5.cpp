#include<iostream>
using namespace std;
// odd or even
int main(void){
    int n = 4;
    if((n & 1) == 0){
        // even
        cout << "even\n";
    }
    else{
        // odd
        cout << "odd\n";
    }
    return 0;
}