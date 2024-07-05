// https://practice.geeksforgeeks.org/problems/majority-vote/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-vote
// https://leetcode.com/problems/majority-element-ii/description/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        // BETTER
        // TC -> O(N * log N) or O(N * 1) depending on unordered_map or ordered map
        // SC -> O(1)
        // vector<int> ans;
        // map<int, int> mp;
        // for(int i = 0; i < n; i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second > n/3){
        //         ans.push_back(it.first);
        //     }
        // }
        // if(ans.size() == 0) return {-1};
        // return ans;
        
        
        // vector<int> ans;
        // map<int, int> mp;
        // for(int i = 0; i < n; i++){
        //     mp[nums[i]]++;
        //     if(mp[nums[i]] == n/3 + 1){
        //         ans.push_back(nums[i]);
        //     }
        //     if(ans.size() == 2) break;  // because at-most 2 element present which is > floor value of n/3
        // }
        // if(ans.size() == 0) return {-1};
        // return ans;
        
        
        // BRUTE
        // TC -> O(N^2)
        // SC -> O(1)
        // vector<int> ls;
        // for(int i = 0; i < nums.size(); i++){
        //     if(ls.size() == 0 || ls[0] != nums[i]){
        //         int cnt = 0;
        //         for(int j = 0; j < nums.size(); j++){
        //             if(nums[j] == nums[i]){
        //                 cnt++;
        //             } 
        //             if(cnt == (nums.size() / 3) + 1){
        //                 ls.push_back(nums[i]);
        //                 break;
        //             }
        //         }
        //         if(ls.size() == 2) break;
        //     }
        // }
        // if(ls.size() == 0) return {-1};
        // return ls;
        
        
        // OPTIMAL
        // TC -> O(N)
        // SC -> O(1)
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        
        for(int i = 0; i < n; i++){
            if(cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(el1 == nums[i]){
                cnt1++;
            }
            else if(el2 == nums[i]){
                cnt2++;
            }
            else{
                cnt1--, cnt2--;
            }
        }
        
        vector<int> ls;
        cnt1 = cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(el1 == nums[i]) cnt1++;
            if(el2 == nums[i]) cnt2++;
        }
        if(cnt1 >= (n/3)+1) ls.push_back(el1);
        if(cnt2 >= (n/3)+1) ls.push_back(el2);
        
        if(ls.size() == 0) return {-1};
        sort(ls.begin(), ls.end());     // sort only two element
        return ls;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends