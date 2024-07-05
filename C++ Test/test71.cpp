#include<iostream>
using namespace std;

    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum = 0, cur = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        for(int i = 0; i < n; i++){
            sum -= a[i];
            cout << sum << " ";
            if(sum == cur) cout << i+1 << "1111";
            cur += a[i];
            cout << cur << endl;
        }
        return -1;
    }

int main(void){
    int n = 5;
    long long arr[n] = {1, 3, 5, 2, 2};
    equilibriumPoint(arr, n);


    return 0;
}