// // find location loc1 of largest element and loc2 of second largest element in an array data
#include<stdio.h>

int main(){
    int arr[] = {1, 3, 2, 6};
    int loc1 = 0, loc2 = 1;
    int first = arr[0], second = arr[1];
    int temp;
    int k = 2;

    if(first < second){
        temp = second;
        second = first;
        first = temp;
        loc1 = 1, loc2 = 0;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    while(k < size){
        if(first < arr[k]){
            second = first;
            first = arr[k];
            loc2 = loc1, loc1 = k;
        }
        else if(second < arr[k]){
            second = arr[k];
            loc2 = k;
        }
        k++;
    }
        printf("LOC: %d   %d\n", loc1, loc2);
        printf("VAL: %d   %d", arr[loc1], arr[loc2]);
    return 0;
}