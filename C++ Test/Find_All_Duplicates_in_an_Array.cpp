// https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/881151632/
#include<iostream>
#include<map>
#include<vector>
using namespace std;

    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> mp;
        vector<int> v;
        for(auto it : nums){
            mp[it]++;
            if(mp[it] == 2) v.push_back(it);
        }
        return v;
    }

int main(void){
    vector<int> v = {4,3,2,7,8,2,3,1};
    vector<int> v2 = findDuplicates(v);
    for(auto it : v2){
        cout << it << " ";
    }
    return 0;
}