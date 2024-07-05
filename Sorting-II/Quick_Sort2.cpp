// https://www.codingninjas.com/codestudio/problems/quick-sort_983625?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort
// Piked pivot as last element
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low;
    int j = high;

    while(i < j){

        while(arr[j] >= pivot && j >= low + 1) j--;
        while(arr[i] < pivot && i <= high - 1) i++;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[i], arr[high]);
    return i;
}

void qs(vector<int>& arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);

        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

int main(void){
    vector<int> v = {4, 3, 2, 1, 9, 4, 5, 6};
    int n = v.size();
    qs(v, 0, n-1);

    for(auto it : v) cout << it << " ";

    return 0;
}