// https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_5713505?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
#include <bits/stdc++.h> 
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here

    // BRUTE FORSE APPROACH
    // TC -> O(n^2)
    // SC -> O(1)
    // int n = a.size();
    // int len = 0;
    // for(int i = 0; i < n; i++){
    //     long long sum = 0;
    //     for(int j = i; j < n; j++){
    //         sum += a[j];

    //         if(sum == k) len = max(len, j-i+1);
    //     }
    // }
    // return len;


    // BETTER APPROACH
    // Hashing
    // TC -> O(N log N), when using ordered map
    // TC -> O(N * 1), when using unordered map and here worst TC -> O(N^2)
    // SC -> O(N)
    // map<long long, int> hashSumMap;
    // long long sum = 0;
    // int maxLen = 0;

    // for(int i = 0; i < a.size(); i++){
    //     sum += a[i];

    //     if(sum == k){
    //         maxLen = max(maxLen, i+1);
    //     }

    //     long long rem = sum - k;
    //     // if rem is available in hashMapSum
    //     if(hashSumMap.find(rem) != hashSumMap.end()){
    //         int len = i - hashSumMap[rem];
    //         maxLen = max(maxLen, len);
    //     }

    //     // if sum is not available in hashMapSum
    //     if(hashSumMap.find(sum) == hashSumMap.end()){
    //         hashSumMap[sum] = i;
    //     }
    // }
    // return maxLen;

    // OPTIMAL APPROACH
    // SLIDING WINDOW METHOD
    // For array containing positive and zero, two-pointer approach is the more optimal solution
    // O(2n) ~ O(n), if we observe closely, the window only forwards to the right always. And every element is visited at most 2 times, one by the end variable and by the start variable.
    // TC -> O(2N), at worst case
    // SC -> O(1)
    int l = 0;
    int r = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while(r < n){
        while(l <= r && sum > k){
            sum -= a[l];
            l++;
        }

        if(sum == k){
            maxLen = max(maxLen, r-l+1);
        }

        r++;
        sum += a[r];
    }
    return maxLen;
}