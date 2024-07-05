// https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-left-rotation
// https://leetcode.com/problems/rotate-array/
// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
#include<bits/stdc++.h>
using namespace std;

	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   //if(k > n) k = k % n;
	   //reverse(arr, arr + k);
	   //reverse(arr + k, arr + n);
	   //reverse(arr, arr + n);
	   
	   //2nd method
	   //vector<int> temp(n);
	   //k = k % n;
	   //int j = n - k;
	   //for(int i = 0; i < n; i++){
	   //    temp[(i + j) % n] = arr[i];
	   //}
	   
	   //for(int i = 0; i < n; i++){
	   //    arr[i] = temp[i];
	   //}
	   
	   //3rd method
	   vector<int> temp(n);
	   for(int i = 0; i < n; i++){
	       temp[i] = arr[(i+k) % n];
	   }
	   for(int i = 0; i < n; i++){
	       arr[i] = temp[i];
	   }
	} 

    // FOR ONE PLACE SHIFT
    // Approach:
// We can take another dummy array of the same length and then shift all elements in the array toward the left and then at the last element store the index of 0th index of the array and print it.