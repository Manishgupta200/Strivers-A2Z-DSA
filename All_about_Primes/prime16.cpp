// https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        // vector<int> v;
        // vector<bool> prime(N+1, true);
        // prime[0] = prime[1] = false;
        
        // for(int i = 2; i < N; i++){
        //     if(prime[i]){
        //         v.push_back(i);
            
        //         // jo table me aa raha h usko cancleout karde
        //         for(int j = i*2; j < N; j = j + i){
        //             prime[j] = false;
        //         }
        //     }
        // }
        
        // // check for 'N' isPrime or not
        // for(int i = 2; i*i <= N; i++){
        //     if(N % i == 0){
        //         prime[N] = false;
        //         break;
        //     }
        // }
        // if(prime[N] == true){
        //     v.push_back(N);
        // }
        // return v;
        
        // including N th term
        vector<int> v;
        vector<bool> prime(N+1, true);
        for(int i = 2; i <= N; i++){
            if(prime[i] == true){
                v.push_back(i);
                
                for(int j = i*i; j <= N; j += i){
                    prime[j] = false;
                }
            }
        }
        return v;
    }

int main(void){
    vector<int> v = sieveOfEratosthenes(35);
    for(auto it : v) cout << it << " ";
    return 0;
}