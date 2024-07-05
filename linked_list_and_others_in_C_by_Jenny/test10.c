// Binary search
#include<stdio.h>

int main(){
    int arr[50];
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("\nEnter array data in ascending order: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int f = 0;
    int l = size - 1;
    int mid = (f + l) / 2;  //floor value return
    int num;

    printf("Enter number to find this number exist in array or not: ");
    scanf("%d", &num);

    while(f <= l && arr[mid] != num){
        if(arr[mid] > num){
            l = mid - 1;
        }
        else{
            f = mid + 1;
        }
        mid = (f + l) / 2;
    }
    if(arr[mid] == num){
        printf("Number \"%d\" found in array at index \"%d\"", num, mid);
    }
    else{
        printf("NUMBER \"%d\" NOT FOUND IN ARRAY", num);
    }
    return 0;
}

// Time complexity for worst and average case is O(log(n)), here base of log is 2 and 'n' is size of array
// Time complexity for best case would be order of 1. i,e; O(1)

// Time complexity for binary search: O(log(n)) is far better than for time complexity for linear search: O(n)