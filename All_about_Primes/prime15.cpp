// https://leetcode.com/problems/count-primes/description/
#include<bits/stdc++.h>
using namespace std;

    int countPrimes(int n) {
        // Sieve of Eratosthenes
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;

        int count = 0;
        for(int i = 2; i < n; i++){
            // prime[i] ko prime number maanle
            if(prime[i]){
                count++;
                // baki jo prime[i] ke table me aa raha h.. usse cancle-out karde
                for(int j = i*2; j < n; j = j + i){
                    if(prime[j] == true){
                        prime[j] = false;
                    }
                }
            }
        }
        return count;
    }

int main(void){
    cout << countPrimes(10);
    return 0;
}