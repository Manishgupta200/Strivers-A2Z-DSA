// https://practice.geeksforgeeks.org/problems/product-of-primes5328/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

// TLE aa raha h
class Solution{
public:
    long long primeProduct(long long L, long long R){
        // code here
        long long product = 1;
        vector<bool> prime(R+1, true);
        int n = prime.size();
        
        // check 'R' is prime or not
        for(int i = 2; i*i <= R; i++){
            if(R % i == 0){
                prime[R] = false;
                break;
            }
            else{
                prime[0] = true;
            }
        }
        // agar R prime h to usko product me include karle
        if(prime[R] == true){
            product = (product % 1000000007 * R % 1000000007) % 1000000007;
        }
        if(L == R && prime[R] == true) return L;
        
        // L se R-1 me sab prime ka product nikale h (inclusive)
        for(int i = 2; i < R; i++){
                if(prime[i]){
                    if(i >= L){
                        product = (product % 1000000007 * i % 1000000007) % 1000000007;
                    }
                    
                    for(int j = i*2; j < R; j = j + i){
                        prime[j] = false;
                    }
                }
        }
        
        if(product == 1) return 1;
        return product;
    }
};