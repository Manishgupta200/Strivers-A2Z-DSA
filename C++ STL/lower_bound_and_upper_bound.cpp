#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 4, 5, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "size: " << n << endl;
    bool res = binary_search(arr, arr + n, 3);
    res = binary_search(arr, arr + n, 4);
    cout << res << endl;

    int ind = lower_bound(arr, arr + n, 3) - arr;
    ind = upper_bound(arr, arr + n, 11) - arr;
    cout << ind << endl;

    return 0;
}