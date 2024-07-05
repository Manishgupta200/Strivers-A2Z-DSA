#include<bits/stdc++.h>
using namespace std;

// Global decleration of hashh array
int hashh[10000000];
int main(void){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array value: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precompute
    // int hashh[10000000] = {0}; //error
    for(int i = 0; i < n; i++){
        hashh[arr[i]] += 1;
    }

    int q;
    cout << "Enter no. of queries: ";
    cin >> q;
    cout << "Enter query value: ";
    while(q--){
        int number;
        cin >> number;
        // fatch
        cout << hashh[number] << " ";
    }
    return 0;
}