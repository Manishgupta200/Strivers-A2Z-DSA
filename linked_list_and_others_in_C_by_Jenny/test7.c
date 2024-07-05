// BUbble sort
#include<stdio.h>

int main(){
    int arr[] = {15, 16, 6, 8, 5};
    int i, j, temp, flag;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    // outer loop count number of passess
    for(i = 0; i < n - 1; i++){
        flag = 0;
        // inner loop for number of comparisons
        for(j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    printf("\n");
    // print
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

// In general maximum passess for the sorted array is (n - 1), where n is the size of array

// In best case time complexity would be O(1), case when array is already sorted so one outer pass and (n - 1) times inner loop will run
// In worst case time complexity would be O(n**2), case when arrey is in descending order and we need to sort it in ascending order. so (n - 1) outer pass and (n - 1) times inner loop runs in each pass