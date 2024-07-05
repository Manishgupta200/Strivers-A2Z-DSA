// 2-D Array
#include<stdio.h>

int main(){
    // initialize array at compile time
    int arr[2][3] = {1,2,3,4,5,6};
    int arr2[2][3] = { {1,2,3}, {4,5,6} };
    int arr3[][3] = {1,2,3,4,5,6};
    // int arr[2][] = {1,2,3,4,5,6};    //ERROR

    // initalize at run time
    int array[2][3], i, j;
    printf("Enter array element: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", array[i][j]);
        }
    }
    return 0;
}

// In 1-D array address of element at index i is found by the formula: (base + i*size of data type)
// return 1st byte address value in total 4 byte of int datatype

// 2-D array are stored in memory either in row major axis or in column major axis
// {1,2,3}, {4,5,6} are in row major
// {1,4}, {2,5}, {3,6} are in column major axis

// starting from (m,n) = (0,0) 
// in row major axis address of a[i][j] in a[m][n] is: [base + (i*n + j)*size of data type]
// if starting from (m,n) = (1,1)
// in row major axis address of a[i][j] in a[m][n] is: [base + ((i-1)*n + (j-1))*size of data type]
// if m,n not starting from zeroth index i.e; (m,n) != (0,0)
// address of a[i][j]: base address + (no. of row above a[i][j] * no. of column + no. of element before a[i][j]) * size of data type

// in cloumn major axis address of a[i][j] in a[m][n] is: [base + (j*m + i)*size of data type]

// Time taken to access element in array is constant time i.e; O(1)