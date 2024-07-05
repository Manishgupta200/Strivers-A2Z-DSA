#include<bits/stdc++.h>
using namespace std;

    long long int factorial(int N){
        //code here
        long long int m = 1000000007;
        long long int res = 1;
        while(N != 0){
            res = (res%m * N%m)%m;
            N--;
        }
        return res;
    }

int main(void){
    int n = 63;
    cout << factorial(n) << endl;
    return 0;
}