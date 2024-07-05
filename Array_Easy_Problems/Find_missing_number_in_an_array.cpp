// https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number
// https://leetcode.com/problems/missing-number/
// https://www.codingninjas.com/codestudio/problems/missing-number_6680467?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;
// SINGLE ELEMENT IS MISSING
int missingNumber(int A[], int N)
{
    // Your code goes here
    // here N is not size of A
    
        // unordered_map<int, int> mp;
        // for(int i = 1; i <= N; i++){
        //     mp[i] = 0;
        // }
        // for(int i = 0; i < N-1; i++){
        //     mp[A[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second == 0) return it.first;
        // }
        
        
        // // TC -> O(N) + O(N)
        // // SC -> O(N) (As using an hash array)
        // int hash[N + 1] = {0};
        
        // // i < N-1 because array is one size smaller
        // for(int i = 0; i < N-1; i++){
        //     hash[A[i]] = 1;
        // }
        
        // for(int i = 1; i <= N; i++){
        //     if(hash[i] == 0){
        //         return i;
        //     }
        // }
        
        
        // TC -> O(N)
        // SC -> O(1)
        // long long sum = (N * (N + 1)) / 2;
        // long long s2 = 0;
        
        // for(int i = 0; i < N-1; i++){
        //     s2 += A[i];
        // }
        // return int(sum - s2);
        
        
        // // TC -> O(N) + O(N)
        // // SC -> O(1)
        // long long xor1 = 0;
        // long long xor2 = 0;
        // for(int i = 1; i <= N; i++){
        //     xor1 = xor1 ^ i;
        // }
        
        // for(int i = 0; i < N-1; i++){
        //     xor2 = xor2 ^ A[i];
        // }
        
        // return (xor1 ^ xor2);
        
        
        // TC -> O(N)
        // SC -> O(1)
        // XOR of all number will not be that big as compare to sum of N natural number
        int xor1 = 0;
        int xor2 = 0;
        
        for(int i = 0; i < N-1; i++){
            xor2 = xor2 ^ A[i];
            xor1 = xor1 ^ (i+1);
        }
        xor1 ^= N;
        return (xor1 ^ xor2);
        
}

int main(void){
    int arr[] = {1, 3, 4, 5};
    int n = 2;
    cout << missingNumber(arr, n);
    return 0;
}