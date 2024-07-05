// https://www.youtube.com/watch?v=ZwU6wSkepBI
#include<iostream>
#include<vector>
using namespace std;
// Given N integers, print the XOR of all subset. Ans is always zero
// Power Set
int main(void){
    // TC -> O((2^n) * n)
    // This algorithm is valid when n <= 20
    vector<int> arr = {3, 2, 4};
    int n = arr.size();
    vector<vector<int>> ans;
    for(int i = 0; i < (1 << n); i++){
        vector<int> ls;
        for(int bit = 0; bit < n; bit++){
            if(i & (1 << bit)){
                ls.push_back(arr[bit]);
            }
        }
        ans.push_back(ls);
    }
    
    for(auto it : ans){
        for(auto k : it){
            cout << k << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}