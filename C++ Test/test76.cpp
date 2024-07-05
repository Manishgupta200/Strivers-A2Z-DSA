#include<bits/stdc++.h>
using namespace std;



int main(void){
    int arr[5] = {30, 40, 20, 10, 80};

    map<int, int> mp;
    for(int i = 0; i < 5; i++){
        mp[arr[i]] = i;
    }
    int i = 0;
    for(auto it : mp){
        arr[it.second] = i++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}