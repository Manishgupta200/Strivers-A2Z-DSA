#include<iostream>
using namespace std;

void sumNum(int n){
    int sum = 0;
    int num = 1;
    // inclusive
    while(num <= n){
        sum += num;
        num++;
    }
    cout << "sum of " << n << " series is: " << sum << endl;
}

int sumNum2(int n){
    if(n > 1){
        return n + sumNum2(n - 1);
    }
    return n;
}

int main(){
    int n = 10;
    sumNum(n);
    cout << "sum of " << n << " series is: " << sumNum2(n) << endl;
    return 0;
}