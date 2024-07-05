#include<iostream>
using namespace std;

int main(void){
    // Brute Force approach
    // int n = 4;
    // bool res = true;
    // for(int i = 2; i < n; i++){
    //     if(n % i == 0){
    //         res = false;
    //         break;
    //     }
    // }
    // cout << res << endl;

    // optimized approach to find prime number (name de diya h sqrt method)
    int n = 11;
    int sum = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            sum++;
            if(n / i != i){
                sum++;
            }
        }
    }
    if(sum == 2) cout << "Prime\n";
    else         cout << "Not Prime\n";
    return 0;
}