#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n, int start = 0){
    for(int i = start; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){
    int arr[] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    printArr(arr, size, 2);
    return 0;
}