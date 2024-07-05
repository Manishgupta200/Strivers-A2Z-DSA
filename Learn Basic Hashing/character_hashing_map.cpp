#include<bits/stdc++.h>
using namespace std;

int main(void){
    // frequency means number of times of occurence
    string s = "abcdabafg";
    // map<char, int> mp;  // TC -> O(log(n)) for all cases
    unordered_map<char, int> mp; //TC -> O(1) for avg and best. O(n) for worst cases;
    // pre-computing
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    // iterate
    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        // fetch
        cout << "Times of " << c  << ": " << mp[c] << endl;
    }
    return 0;
}