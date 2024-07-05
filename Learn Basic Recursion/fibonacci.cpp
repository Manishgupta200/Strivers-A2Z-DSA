#include<iostream>
using namespace std;

// TC -> O(2 to the power n)
int fibonacci(int n){
    if(n <= 1) return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return (last + slast);
}

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, .....
int main(void){
    // fibonacci starts from zero
    cout << "4th index value of fibonacci is: " << fibonacci(3);
    return 0;
}