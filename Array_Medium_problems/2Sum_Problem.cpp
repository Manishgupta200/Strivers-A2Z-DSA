// https://www.codingninjas.com/codestudio/problems/reading_6845742?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://leetcode.com/problems/two-sum/description/
// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-all-pairs-whose-sum-is-x
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TC -> O(n^2)
        // vector<int> v;
        // int n = nums.size();
        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         if(nums[i] + nums[j] == target){
        //             v.push_back(i);
        //             v.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return v;


        // 2nd method
        // TC -> O(n * log n) , when ordered map is used
        // TC -> O(n), when unordered map is used and in this case worst time complexity is O(n^2)
        // SC -> O(n), as using hashmap
        unordered_map<int, int> mp;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            int element = nums[i];
            int rem = target - element;

            // if rem is available
            if(mp.find(rem) != mp.end()){
                v.push_back(mp[rem]);
                v.push_back(i);
                break;
            }
            else{
                mp[element] = i;
            }
        }
        return v;
    }
};


// GFG
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        // Brute Force approach
    //     sort(A, A+N);
    //     sort(B, B+M);
    //     vector<pair<int, int>> v;
    //     for(int i = 0; i < N; i++){
    //         for(int j = 0; j < M; j++){
    //             if(A[i] + B[j] == X) v.push_back(make_pair(A[i], B[j]));
    //         }
    //     }
    //     if(v.size() == 0) v.push_back(make_pair(0, 0));
    //     return v;
    
        // 2nd method
        unordered_map<int, int> mp;
        vector<pair<int, int>> v;
        
        for(int i = 0; i < M; i++){
            mp[B[i]] = i;
        }
        
        for(int i = 0; i < N; i++){
            int rem = X - A[i];
            // if rem is available in mp
            if(mp.find(rem) != mp.end()){
                v.push_back(make_pair(A[i], rem));
            }
        }
        
        sort(v.begin(), v.end());
        return v;
    }
};