#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n, int i){
        if(i > n-1) return;
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }  
        insertionSort(arr, n, i+1);
}

int main(void){
    vector<int> v = {10, 0, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = v.size();
    insertionSort(v, n, 0);

    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}