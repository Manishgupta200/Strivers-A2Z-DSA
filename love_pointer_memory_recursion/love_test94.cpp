#include<iostream>
#include<algorithm>
using namespace std;

void insertion_sort(int arr[], int n){
        // base case
        if(n <= 1) return;

        insertion_sort(arr, n-1);

        int j = n-1;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
}

int main(void){
    // int arr[] = {4, 1, 3, 9, 7};
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}