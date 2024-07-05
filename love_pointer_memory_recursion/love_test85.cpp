#include<bits/stdc++.h>
using namespace std;

int sum(int *arr, int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }

    return (arr[0] + sum(arr+1, n-1));
}

int main(void){
    int arr[] = {1, 3, 4, 2, 8, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << sum(arr, size) << endl;
    return 0;
}