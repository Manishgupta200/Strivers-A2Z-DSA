#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(void){

    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    // taking input in array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum is: " << ans << endl;

// Static
    // while(true){
    //     int i = 5;
    // }

// Dynamic
    // while(true){
    //     int *ptr = new int;
    // }
    return 0;
}