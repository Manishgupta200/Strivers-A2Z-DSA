// Lecture28: Reference Variable | Static vs Dynamic Memory | Part-1
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// BAD PRACTICE START

// int& func(int n){
//     int num = n;
//     int& ans = num;
//     return ans;
// }

// int * func(int n){
//     int *ptr = &n;
//     return ptr;
// }

// BAD PRACTICE END

void update1(int n){
    n++;
}

void update2(int &n){
    n++;
}

int main() {
    //Write your code here
    // int i = 5;
    // cout << i << endl;
    // i++;
    // int &j = i;     // CREATE A REFERENCE VARIABLE
    // cout << i << endl;
    // j++;
    // cout << i << endl;

    int n = 6;
    cout << "Before: " << n << endl;
    update1(n);
    cout << "After: " << n << endl;

    cout << "Before: " << n << endl;
    update2(n);
    cout << "After: " << n << endl;

    // cout << func(n);
    return 0;
}