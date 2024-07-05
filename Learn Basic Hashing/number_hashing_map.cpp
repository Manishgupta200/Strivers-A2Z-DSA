#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int arr[n];
    // map<int, int> mp; // TC -> O(log(n)) for all cases
    unordered_map<int, int> mp; //TC -> O(1) for avg and best. O(n) for worst case;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        // pre-compute
        mp[arr[i]]++;
    }

    // iterate in the map
    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << mp[number] << endl;
    }
    return 0;
}