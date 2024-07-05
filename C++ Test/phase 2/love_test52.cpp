#include<bits/stdc++.h>
using namespace std;

int main(void){

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter element of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Printing array
    cout << "Array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << "-";
    }
    cout << endl;
    return 0;
}