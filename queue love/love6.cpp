// First negative integer in every window of size k
// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        // BRUTE FORCE
        // TLC OCCURS
        // vector<long long> ans;
        // for(long long i = 0; i <= (N-K); i++){
        //     bool flag = false;
        //     for(long long j = i; j < (K+i); j++){
        //         if(A[j] < 0){
        //             ans.push_back(A[j]);
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if(flag == false){
        //         ans.push_back(0);
        //     }
        // }
        // return ans; 
        
        
        vector<long long> ans;
        deque<long long> dq;
        
        for(int i = 0; i < K; i++){
            if(A[i] < 0){
                dq.push_back(i);
            }
        }
        
        if(!dq.empty()){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        for(int i = K; i < N; i++){
            if(!dq.empty() && i - dq.front() >= K){
                dq.pop_front();
            }
            
            if(A[i] < 0){
                dq.push_back(i);
            }
            
            
            if(!dq.empty()){
                ans.push_back(A[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
 }