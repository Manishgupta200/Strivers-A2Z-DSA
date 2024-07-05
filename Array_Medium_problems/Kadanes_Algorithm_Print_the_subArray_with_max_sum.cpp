#include<bits/stdc++.h>
using namespace std;

    long long maxSubarraySum(int arr[], int n){
        // Optimal Approach
        // Kadane's Algorithm
        // TC -> O(N)
        // SC -> O(1)
        
        long long sum = 0, maxSum = LONG_MIN;
        int start = -1;
        int ansStart = -1;
        int ansEnd = -1;
    
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            if(sum > maxSum){
                maxSum = sum;
                ansStart = start;   //important
                ansEnd = i;         //important
            }
            
            if(sum < 0){
                sum = 0;
                start = i + 1;
            }
        }

        // print the subarray with max sum
        for(int i = ansStart; i <= ansEnd; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return maxSum;
    }

int main(void){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long ans = maxSubarraySum(arr, n);
    return 0;
}