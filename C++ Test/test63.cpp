#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n = 5;
    int arr[n] = {2, 30, 1, 2, 3};
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}