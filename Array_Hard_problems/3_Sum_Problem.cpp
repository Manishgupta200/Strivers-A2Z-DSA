// https://www.codingninjas.com/codestudio/problems/three-sum_6922132?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
// https://practice.geeksforgeeks.org/problems/3-sum-closest/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=3-sum-closest
// https://leetcode.com/problems/3sum-closest/description/
// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
// https://leetcode.com/problems/3sum/description/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    // BRUTE
    // TC -> O(n^3 * log(no. of unique triplet))
    // SC -> 2 * O(no. of triplets), using st and ans array
    // set<vector<int>> st;
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         for(int k = j+1; k < n; k++){
    //             if(arr[i] + arr[j] + arr[k] == 0){
    //                 vector<int> temp = {arr[i], arr[j], arr[k]};
    //                 sort(temp.begin(), temp.end());
    //                 st.insert(temp);
    //             }
    //         }
    //     }
    // }
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;


    // BETTER
    // TC -> O(n^2 * log(size of set)), when using ordered_set
    // TC -> O(n^2 * 1), when using unordered_set
    // SC -> O(n) + O(no. of unique triplet)*2
    // set<vector<int>> st;
    // for(int i = 0; i < n; i++){
    //     set<int> hash;
    //     for(int j = i+1; j < n; j++){
    //         int third = -(arr[i] + arr[j]);
    //         if(hash.find(third) != hash.end()){
    //             vector<int> temp = {arr[i], arr[j], third};
    //             sort(temp.begin(), temp.end());
    //             st.insert(temp);
    //         }
    //         hash.insert(arr[j]);
    //     }
    // }
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;


    // OPTIMAL
    // TC -> (n log n) + O(n^2)
    // SC- > O(no. of unique triplets)
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int i = 0;
    while(i < n){
        int j = i+1;
        int k = n-1;
        if(i > 0 && arr[i] == arr[i-1]){
            i++;
            continue;
        }

        while(j < k){
            if(arr[i] + arr[j] + arr[k] < 0){
                j++;
            }
            else if (arr[i] + arr[j] + arr[k] > 0){
                k--;
            }
            else{
              ans.push_back({arr[i], arr[j], arr[k]});
              j++, k--;
              while(j < k && arr[j] == arr[j-1]) j++;
              while(j < k && arr[k] == arr[k+1]) k--;
            }
        }
        i++;
    }
    return ans;
}
