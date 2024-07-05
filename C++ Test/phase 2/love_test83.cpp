#include<bits/stdc++.h>
using namespace std;

void digit(int n, string *arr){
    if(n == 0){
        return;
    }
    int rem = n % 10;
    
    digit(n/10, arr);
    cout << arr[rem] << " ";
}

int main(void){
    string arr[] = {"zero", "one", "two", "three", "four", "five"};
    int n = 412;
    digit(n, arr);
    return 0;
}