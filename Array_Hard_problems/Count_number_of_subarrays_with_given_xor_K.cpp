// https://www.codingninjas.com/codestudio/problems/subarrays-with-xor-k_6826258?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
// https://practice.geeksforgeeks.org/problems/subsets-with-xor-value2023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subsets-with-xor-value
#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    // TC -> O(N^2)
    // SC -> O(1)
    // long long count = 0;
    // for(int i = 0; i < a.size(); i++){
    //     int xord = 0;
    //     for(int j = i; j < a.size(); j++){
    //         xord ^= a[j];  
    //         if(xord == b) count++;
    //     }
    // }
    // return count;


    // TC -> O(N), when using unordered_map
    // TC -> O(N. log N), when using map
    // SC -> O(N), int worst case
    unordered_map<int, int> mp;
    mp[0] = 1;
    int count = 0, preXor = 0;
    for(int i = 0; i < a.size(); i++){
        preXor ^= a[i];
        int rem = preXor ^ b;
        count += mp[rem];
        mp[preXor] += 1;
    }
    return count;
}