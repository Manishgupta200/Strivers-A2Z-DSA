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
    int arr[5] = {1, 2, 3, 4, 5};
    cout << getSum(arr+2, 3) << endl;
    return 0;
}