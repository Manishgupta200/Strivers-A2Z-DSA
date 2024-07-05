#include<bits/stdc++.h>
using namespace std;

bool search(int *arr, int n, int k){
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        return search(arr+1, n-1, k);
    }
}

int main(void){
    int arr[] = {3, 5, 1, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    cout << search(arr, size, key) << endl;
    return 0;
}