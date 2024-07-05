#include<bits/stdc++.h>
using namespace std;
// Pura sudhra hua nahi h. Sudharna baki h
int main(void){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // pre-compute
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    set<int> st;
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
        st.insert(it.second);
    }
    cout << "Highest frequency element: " << mp[*--st.end()] << endl;
    cout << "Lowest frequency element: " << mp[*st.begin()] << endl;
    return 0;
}