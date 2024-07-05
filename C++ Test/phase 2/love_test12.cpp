#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n){
    cout << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = getSum(arr, 5);
    cout << sum << endl;
    return 0;
}