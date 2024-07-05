// Operation in array (INSERTION)
#include<stdio.h>

int main(){
    int arr[50], size;
    int num, pos;

    printf("Enter the size of array: ");
    scanf("%d", &size);
    int limit_size = sizeof(arr) / sizeof(arr[0]);

    // bound check
    if(size > limit_size){
        printf("OVERFLOW CONDITION");
    }
    else{
        printf("Enter element: ");
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        // print array
        printf("First array: ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

        // insertion in specific position in array
        printf("\nEnter data that you want to enter in  array: ");
        scanf("%d", &num);
        printf("Enter position (not index) where you want to insert: ");
        scanf("%d", &pos);
        if(pos <= 0 || pos > size + 1){
            printf("INVALID POSITION\n");
        }
        else{
            for(int i = size - 1; i >= pos - 1; i--){
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = num;
            size++;
        }

        // print array
        printf("After insertion at index \"%d\", array is: ", pos - 1);
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

        // insertion at beginning
        printf("\nEnter data that you want to insert at beginning: ");
        scanf("%d", &num);
        for(int i = size - 1; i >= 0; i--){
            arr[i + 1] = arr[i];
        }
        arr[0] = num;
        size++;
        
        // print array
        printf("After insertion at index \"0\", array is: ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

        // insertion at end
        printf("\nEnter data that you want to insert at last: ");
        scanf("%d", &num);
        arr[size] = num;
        size++;

        // print array
        printf("After insertion at index \"%d\", array is: ", size - 1);
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

// time complexity O(n - p), where 'n' is size of arr and 'p' is position of inserting item
// best case: O(1), insertion at last
// worst case: O(n)