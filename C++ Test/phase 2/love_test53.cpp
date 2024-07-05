#include<bits/stdc++.h>
using namespace std;
// FOR SQUARE MATRIX
int main(void){
    int n;
    cout << "Enter size of 2D array: ";
    cin >> n;

    // Creating an 2D array by using Dynamic memory allocation
    int **arr = new int*[n];

    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    // taking input from user
    cout << "Enter value of array: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Print 2D array
    cout << "Array is:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory (Manually)
    for(int i = 0; i < n; i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}