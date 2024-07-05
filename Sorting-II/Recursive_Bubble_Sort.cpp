// https://practice.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v, int endIndex){
    if(endIndex == 0){
        return;
    }
    for(int i = 0; i < endIndex; i++){
        if(v[i] > v[i+1]){
            int temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
    bubbleSort(v, endIndex-1);
}

int main(void){
    vector<int> v = {9, 20, 13, 52, 45, 24};
    int n = v.size();
    bubbleSort(v, n-1);

    // print v
    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}