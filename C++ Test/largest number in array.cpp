#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 54, 2, 65, 6, 2, 6, 45};
    int n = arr.size();

    // 1st approach
    // sort(arr.begin(), arr.end());
    // cout << arr[n - 1] << endl;

    // 2nd approach
    int num = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > num){
            num = arr[i];
        }
    }
    cout << num << endl;
    return 0;
}