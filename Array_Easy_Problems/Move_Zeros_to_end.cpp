// https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array
// https://leetcode.com/problems/move-zeroes/
#include<bits/stdc++.h>
using namespace std;

	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   // Time complexity: O(n)
	   // Space complexity: O(1)
        // int i = 0;
        // for(int j = i; j < n; j++){
        //     if(arr[j] != 0){
        //         // swap(arr[j], arr[i]);
        //         int temp = arr[j];
        //         arr[j] = arr[i];
        //         arr[i] = temp;
        //         i++;
        //     }
        // }
        
        // 2nd method
       // Time complexity: O(n)
	   // Space complexity: O(1)
        int i = 0;
        while(i < n){
            if(arr[i] == 0){
                break;
            }
            else{
                i++;
            }
        }
        
        int j = i + 1;
        
        while(i < n && j < n){
            if(arr[j] != 0){
                swap(arr[j], arr[i]);
                i++;
            }
            j++;
        }
	}