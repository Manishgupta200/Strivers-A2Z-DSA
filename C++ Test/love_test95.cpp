// https://leetcode.com/problems/string-compression/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        // TC-> O(n)
        // SC-> O(1)
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        while(i < n){
            int j = i + 1;
            while(j < n && chars[i] == chars[j]){
                j++;
            }
            // yaha kab aana h
            // ya to vector pura traverse kar diya
            // ya phir new/different character encounter kiya h

            // old character ko store karle
            chars[ansIndex++] = chars[i];

            int count = j - i;
            if(count > 1){
                // convert counting into single digit and saving in answer
                string str = to_string(count);
                for(char ch : str){
                    chars[ansIndex++] = ch;
                }
            }
            // moving to new different character
            i = j;
        }
        return ansIndex;
    }
};