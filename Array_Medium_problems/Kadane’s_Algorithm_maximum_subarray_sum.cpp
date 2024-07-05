// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0?company[]=Visa&company[]=Visa&page=2&query=company[]Visapage2company[]Visa&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kadanes-algorithm
// https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1
// https://leetcode.com/problems/maximum-subarray/description/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        // Brute Approach
        // TC -> O(N ^ 2)
        // SC -> O(1)
        // int maxSum = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     int sum = 0;
        //     for(int j = i; j < n; j++){
        //         sum += arr[j];
        //         maxSum = max(maxSum, sum);
        //     }
        // }
        // return maxSum;
        
        // Optimal Approach
        // Kadane's Algorithm
        // TC -> O(N)
        // SC -> O(1)
        
        long long sum = 0, maxSum = LONG_MIN;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            if(sum > maxSum){
                maxSum = sum;
            }
            
            if(sum < 0){
                sum = 0;
            }
        }
        return maxSum;
    }
};