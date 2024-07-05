#include<iostream>
using namespace std;

// Finding (n)th term of Fibonacci serier
void fibonacci(int n){
    int a = 0;
    int b = 1;
    // cout << a << " " << b << " ";
    int sum;
    for(int i = 3; i <= n; i++){
        sum = a + b;
        // cout << sum << " ";
        a = b;
        b = sum;
    }
    cout << "n th Fibonacci is: " << sum;
}

int main(void){
    cout << "Enter total number of term: ";
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}