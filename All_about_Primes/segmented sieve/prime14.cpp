// https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1
#include<bits/stdc++.h>
using namespace std;

    bool checkPrime(int n){
        if(n == 1) return false;
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
  
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> v;
        for(int i = M; i <= N; i++){
            if(checkPrime(i)){
                v.push_back(i);
            }
        }
        return v;
    }

int main(void){
    vector<int> v = primeRange(1, 10);
    for(auto it : v) cout << it << " ";
    return 0;
}