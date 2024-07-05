// https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1
#include<bits/stdc++.h>
using namespace std;

    long long int largestPrimeFactor(int N){
        // code here
        int num = N;
        for(int i = 2; i <= N; i++){
            while(N % i == 0){
                num = i;
                N /= i;
            }
        }
        return num;
    }

int main(void){
    int n = 24;
    cout << largestPrimeFactor(n);
    return 0;
}