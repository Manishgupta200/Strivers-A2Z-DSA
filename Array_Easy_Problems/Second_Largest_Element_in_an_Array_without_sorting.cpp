// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
// https://www.codingninjas.com/codestudio/problems/ninja-and-the-second-order-elements_6581960?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   // Time Complexity: O(NlogN), For sorting the array
	   //Space Complexity: O(1)
	   
	   // sort(arr, arr+n);
    //     int temp = arr[n-1];
    //     for(int i = n-1; i >= 0; i--){
    //         if(arr[i] != temp) return arr[i];
    //     }
    //     return -1;
    
    
        // 2nd method
        // Time Complexity: O(N), We do two linear traversals in our array
        // Space Complexity: O(1)
        
        // if(n <= 1) return -1;
        // int large = INT_MIN, second_large = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     if(large < arr[i]){
        //         large = arr[i];
        //     }
        // }
        // for(int i = 0; i < n; i++){
        //     if(arr[i] > second_large && arr[i] != large){
        //         second_large = arr[i];
        //     }
        // }
        // if(second_large == INT_MIN) return -1;
        // return second_large;
        
        // 3rd method
        // Time Complexity: O(N), Single-pass solution
        // Space Complexity: O(1)
        
        if(n <= 1) return -1;
        int large = INT_MIN, second_large = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i] > large){
                second_large = large;
                large = arr[i];
            }
            else if(arr[i] > second_large && arr[i] != large){
                second_large = arr[i];
            }
        }
        if(second_large == INT_MIN) return -1;
        return second_large;
	}