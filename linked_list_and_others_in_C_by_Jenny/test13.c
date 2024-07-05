// Binary search with insertion in sorted
#include<stdio.h>

int main(){
    int arr[50], size, i;
    int f, l, mid, num;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter array data in ascending order: ");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter number that you want to scan that number found in array or not: ");
    scanf("%d", &num);
    f = 0;
    l = size - 1;
    mid = (f + l) / 2;
    while(f <= l && arr[mid] != num){
        if(arr[mid] > num){
            l = mid - 1;
        }
        else{
            f = mid + 1;;
        }
        mid = (f + l) / 2;
    }
    if(arr[mid] == num){
        printf("\nElement found at index: %d", mid);
    }
    else{
        // insertion in sorted array
        int loc;
        int n = size - 1;
        (arr[mid] > num) ? (loc = mid) : (loc = mid + 1);
        while(n >= loc){
            arr[n + 1] = arr[n];
            n--;
        }
        arr[loc] = num;
        size++;
            
        printf("\nElement not found in array so after insertion has been done, array is: ");
        for(i = 0; i < size; i ++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}