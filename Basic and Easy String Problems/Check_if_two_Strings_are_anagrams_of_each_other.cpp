// https://leetcode.com/problems/valid-anagram/submissions/
// https://www.codingninjas.com/studio/problems/anagram-pairs_626517?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // TC -> O(n log n)
        // SC -> O(1)
        // if(s.length() != t.length()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return (s == t);

        
        // // 2nd method
        // TC -> O(n)
        // SC -> O(1)
        // unordered_map<int, int> mp;
        
        // // inc. the freq. of characters in the string s
        // for(auto it : s){
        //     mp[it]++;
        // }
        // // dec. the freq. of characters in the string s
        // for(auto it : t){
        //     mp[it]--;
        // }

        // // check for non-zero mp value
        // for(auto it : mp){
        //     if(it.second != 0) return false;
        // }
        // return true;



        // 3rd method
        // TC -> O(n)
        // SC -> O(1)
        int arr[26] = {0};
        
        // inc. the freq. of characters in the string s
        for(auto it : s){
            arr[it - 'a']++;
        }
        // dec. the freq. of characters in the string s
        for(auto it : t){
            arr[it - 'a']--;
        }

        // check for non-zero mp value
        for(int val : arr){
            if(val != 0) return false;
        }
        return true;
    }
};