// Static jagged 2D array
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int row0[4] = {1, 2, 3, 4};
    int row1[2] = {5, 6};

    int *jagged[2] = {row0, row1};
    // Array to hold the size of each row
    int size[2] = {4, 2};
    int k = 0;

    for(int i = 0; i < 2; i++){

        // pointer to hold the address of the row
        int *ptr = jagged[i];

        for(int i = 0; i < size[k]; i++){
            cout << *ptr << " ";
            ptr++;
        }
        k++;
        cout << endl;

        // move the pointer to the next row
        jagged[i]++;
    }
    return 0;
}