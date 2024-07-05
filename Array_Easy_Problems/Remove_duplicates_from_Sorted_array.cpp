// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicate-elements-from-sorted-array
// https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_1102307?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

    int remove_duplicate(int a[],int n){
        // code here
        // Time complexity: O(n*log(n))+O(n)
        // Space Complexity: O(n) 
        // in (n log n), n is for traversing and log n is for inserting into set and another n is for changing nums element
        
        // set<int> st;
        // for(int i = 0; i < n; i++){
        //     st.insert(a[i]);
        // }
        // int count = st.size();
        // // change a[]
        // int j = 0;
        // for(int it : st){
        //     a[j++] = it;
        // }
        
        // return count;
        
        // 2nd method (2-pointer approach)
        // Time complexity: O(n)
        // Space Complexity: O(1)
        
        int i = 0;
        for(int j = i+1; j < n; j++){
            if(a[i] != a[j]) i++;
            a[i] = a[j];
        }
        return i+1;
    }