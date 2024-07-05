// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays
#include<bits/stdc++.h>
using namespace std;

    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        // Time Compleixty : O( (m+n)log(m+n) )
        // Inserting a element in set takes log N time, where N is no. of elements in set. At max set can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}.
        // Space Complexity : O(m+n) {If Space of Union Vector is considered} 
        // O(1) {If Space of union Vector is not considered}
        
        // vector<int> v;
        // set<int> st;
        // for(int i = 0; i < n; i++){
        //     st.insert(arr1[i]);
        // }
        // for(int i = 0; i < m; i++){
        //     st.insert(arr2[i]);
        // }
        // for(int x : st){
        //     v.push_back(x);
        // }
        // return v;
        
        // method 2
        // Time Complexity: O(m+n), Because at max i runs for n times and j runs for m times. When there are no common elements in arr1 and arr2 and all elements in arr1, arr2 are distinct. 
        // Space Complexity : O(m+n) {If Space of Union Vector is considered} (if all the elements are unique and i.e. for returning the answer, not for solving) - tell specific to the interviewer
        // O(1) {If Space of union Vector is not considered}
        
        vector<int> Union;
        int i = 0, j = 0;
        
        while(i < n && j < m){
            if(arr1[i] <= arr2[j]){
                if(Union.size() == 0 || Union.back() != arr1[i]){
                    Union.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(Union.size() == 0 || Union.back() != arr2[j]){
                    Union.push_back(arr2[j]);
                }
                j++;
            }
        }
        // if any element left in arr1
        while(i < n){
            if(Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        // if any element left in arr2
        while(j < m){
            if(Union.back() != arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
        return Union;
    }