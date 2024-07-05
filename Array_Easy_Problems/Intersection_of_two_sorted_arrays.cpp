// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149
// https://leetcode.com/problems/intersection-of-two-arrays/description/
// https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1
#include<bits/stdc++.h>
using namespace std;

    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        // For sorting TC -> O(n log n), For while loop TC -> O(n)
        // SC -> O(1), if not consider vector v

        // For while loop, Worst Time Complexity is : TC -> O(n + m)
        // SC -> O(n + m) in Worst Case to store ans and return
        sort(a, a+n);
        sort(b, b+m);
        vector<int> v;
        int i = 0, j = 0;
        int count = 0;
        while(i < n && j < m){
            if(a[i] < b[j]){
                i++;
            }
            else if(a[i] == b[j]){
                if(v.size() == 0 || v.back() != a[i]){
                    v.push_back(a[i]);   
                }
                i++; j++;
            }
            else{
                j++;
            }
        }
        return v.size();
    }