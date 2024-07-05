#include<iostream>
using namespace std;

// BRUTE FORCE APPROACH
int factorial(int a){
    int fact = 1;
    for(int i = 1; i <= a; i++){
        fact = fact * i;
    }
    return fact;
}

// Function Signature
void ncr(int n, int r){
    // Function Body
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;

    cout << "ncr: " << ans << endl;
    return; //not error
}

int main(void){
    cout << "(n > r) Enter n  and r: ";
    int n, r;
    cin >> n >> r;
    // Function Call
    ncr(n, r);
    return 0;
}