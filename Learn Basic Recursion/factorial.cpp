#include<iostream>
using namespace std;

// Parameterized
void factorial(int n, int fact){
    if(n < 1){
        cout << "factorial: " << fact << endl;
        return;
    }
    factorial(n-1, fact * n);
}

// Functional
int factorial2(int n){
    if(n < 1) return 1;
    return n * factorial2(n - 1);
}

int factorial3(int n){
    if(n == 0) return 1;
    return n * factorial3(n - 1);
}

int main(void){
    factorial(4, 1);
    cout << "factorial: " << factorial2(4) << endl;
    cout << "factorial: " << factorial3(5) << endl;
    return 0;
}