#include<iostream>
using namespace std;

int main(){
    // enter num above 1
    int num = 7;
    int n = 2;
    int k = 1;
    while(n < num){
        if(num % n == 0 && k == 1){
            cout << "Number is not prime";
            k = 0;
        }
        n++;
    }
    if(k == 1){
        cout << "Number is prime";
    }
    return 0;
}