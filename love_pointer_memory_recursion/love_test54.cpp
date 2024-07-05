#include<bits/stdc++.h>
using namespace std;


int main(void){
    int row, col;
    cout << "Enter row and col: ";
    cin >> row >> col;

    int **arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    // taking input from user
    cout << "Enter value of array: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // Print 2D array
    cout << "Array is:\n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory (Manually)
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}