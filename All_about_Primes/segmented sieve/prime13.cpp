// https://practice.geeksforgeeks.org/problems/product-of-primes5328/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

    // check for prime
    bool isPrime(long long N){
        if(N == 1) return 0;
        for(int i = 2; i*i <= N; i++){
            if(N % i == 0){
                return 0;
            }
        }
        return 1;
    }
    long long primeProduct(long long L, long long R){
        // code here
        long long prod = 1;
        for(int i = L; i <= R; i++){
            if(isPrime(i)){
                prod = (prod%1000000007 * i%1000000007)%1000000007;
            }
        }
        return prod;
    }

int main(void){
    cout << primeProduct(1, 10);
    return 0;
}