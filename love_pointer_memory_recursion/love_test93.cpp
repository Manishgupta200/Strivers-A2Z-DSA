#include<iostream>
#include<algorithm>
using namespace std;

// void selection_sort(int arr[], int n){
//     for(int i = 0; i <= n-2; i++){
//         int mini = i;
//         for(int j = i+1; j <= n-1; j++){
//             if(arr[j] < arr[mini]){
//                 mini = j;
//             }
//         }
//         swap(arr[i], arr[mini]);
//     }
// }

void selection_sort(int arr[], int n){
    // base case
    if(n == 0 || n == 1){
        return;
    }

    int mini = 0;
    for(int j = 1; j <= n-1; j++){
        if(arr[j] < arr[mini]){
            mini = j;
        }
    }
    swap(arr[0], arr[mini]);
    selection_sort(arr+1, n-1);
}

int main(void){
    // int arr[] = {13, 46, 24, 52, 20, 9};
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}