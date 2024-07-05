// https://leetcode.com/problems/permutation-in-string/submissions/898556702/
#include<bits/stdc++.h>
// Space Complexity -> O(1)
using namespace std;
class Solution {
private:
    bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i = 0; i < s1.length(); i++){
            count1[s1[i] - 'a']++;
        }

        // running for 1st window with s2 and compare
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        while(i < windowSize && i < s2.length()){
            count2[s2[i] - 'a']++;
            i++;
        }

        if(checkEqual(count1, count2)){
            return 1;
        }

        // aage ka window ke liye check karenge
        while(i < s2.length()){
            count2[s2[i] - 'a']++;

            count2[s2[i-windowSize] - 'a']--;

            if(checkEqual(count1, count2)){
                return 1;
            }
            i++;
        }
        return 0;
    }
};