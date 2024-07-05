// Lecture 31: Learning Recursion the Best Way! | 10 Day Recursion Challenge
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int main(void){

    int n = 6;
    cout << factorial(n) << endl;
    return 0;
}