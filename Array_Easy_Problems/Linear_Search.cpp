// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win
#include<bits/stdc++.h>
using namespace std;

    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
    //   TC -> O(log n)
    //   SC -> O(1)
       int s = 0, e = N-1;
       int mid = s + (e - s) / 2;
       
       while(s <= e){
           if(arr[mid] == K) return 1;
           
           else if(K > arr[mid]){
               s = mid + 1;
           }
           else{
               e = mid - 1;
           }
           mid = s + (e - s) / 2;
       }
       return -1;
    }

// LINEAR SEARCH
    // Time Complexity: O(n), where n is the length of the array.
    // Space Complexity: O(1)
    int linearSearch(int arr[],int n,int num){
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==num)
            return i;
        }
        return -1;
    }