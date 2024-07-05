#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][4], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printColSum(int arr[][4], int row, int col){
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printLargestRowSum(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        if(maxi < sum){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << rowIndex << endl;
}

int main(void){
    int arr[12] = {1, 4, 2, 3, 5, 7, 8, 5, 9, 3, 5, 8};
    // making 2D array of (3 X 4)
    int column = 4;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[column*i + j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Enter arr2 value total (3 X 4) i.e. 12 element:-\n";

    int arr2[3][4];

    // int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // int arr2[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    
    cout << "In row-wise arrangment\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr2[i][j];
        }
    }

    // cout << "In column-wise arrangment\n";
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> arr2[j][i];
    //     }
    // }

    // print arr2
    cout << "arr2 becomes-\n";    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Enter the element to search: ";
    int target;
    cin >> target;
    if(isPresent(arr2, target, 3, 4)){
        cout << "Found\n";
    }
    else{
        cout << "Not Found\n";
    }

    cout << "row-wise sum: ";
    printRowSum(arr2, 3, 4);
    cout << "column-wise sum: ";
    printColSum(arr2, 3, 4);

    cout << "Lergest row-wise sum's rowIndex: ";
    printLargestRowSum(arr2, 3, 4);
    return 0;
}