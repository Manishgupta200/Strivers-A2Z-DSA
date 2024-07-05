#include<iostream>
using namespace std;

// Reverse array by using recursion
void reverseArray(int arr[], int l, int r){
    if(l >= r) return;

    swap(arr[l], arr[r]);
    reverseArray(arr, l+1, r-1);
}

// another methon by using recursion
void reverseArray2(int i, int arr[], int n){
    if(i >= n/2) return;

    swap(arr[i], arr[n-1-i]);
    reverseArray2(i+1, arr, n);
}

int main(void){
    int arr[] = {1, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray2(0, arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}