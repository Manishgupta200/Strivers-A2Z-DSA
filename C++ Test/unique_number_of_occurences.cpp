// https://leetcode.com/problems/unique-number-of-occurrences/solutions/
#include<bits/stdc++.h>
using namespace std;
    // unique number of occurences

    // Brute Force approach
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }

        vector<int> v;
        for(auto it : mp){
            v.push_back(it.second);
        }
        for(int i = 0; i < v.size()-1; i++){
            for(int j = i+1; j < v.size(); j++){
                if(v[i] == v[j]) return false;
            }
        }
        return true;
    }

int main(void){
    vector<int> v = {1,2};
    cout << uniqueOccurrences(v);
    return 0;
}