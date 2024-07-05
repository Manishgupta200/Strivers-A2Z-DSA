// INSERTION IN ONLY UNSORTED ARRAY (DATA ELEMENT POSITION OF PREVIOUS ELEMENT WHERE INSERTION DONE CHANGED AFTER INSERTION AND SHIFTED TO LAST POSITION)
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
            arr[size] = arr[pos - 1];
            arr[pos - 1] = num;
            size++;
        }

        // print array
        printf("After insertion at index \"%d\", array is: ", pos - 1);
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

// Time complexity: O(1) always.