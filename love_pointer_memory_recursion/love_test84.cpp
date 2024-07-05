#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int *arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return checkSorted(arr+1, n-1);
}

int main(void){
    int arr[] = {2, 4, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << checkSorted(arr, size) << endl;
    return 0;
}