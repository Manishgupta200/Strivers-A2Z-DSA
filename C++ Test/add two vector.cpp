#include<bits/stdc++.h>
using namespace std;

// add two vector

int main(){
    vector<int> a = {1, 3, 2};
    vector<int> b = {2, 1};

    vector<int> c;

    for(int i = 0; i < b.size(); i++){
         a.push_back(b[i]);
    }
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    return 0;
}