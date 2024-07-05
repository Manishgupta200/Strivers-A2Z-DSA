// Array operation (DELETION)
#include<stdio.h>

int main(){
    int arr[50], size, pos, item;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int limit_size = sizeof(arr) / sizeof(arr[0]);

    // bound check
    if(size > limit_size){
        printf("OVERFLOW CONDITION");
    }
    else{
        printf("\nEnter data: ");
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        // print
        printf("\nFirst array: ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

        // deletion at specified position
        printf("\nEnter position (not index) from where you want to delete item: ");
        scanf("%d", &pos);
        item = arr[pos - 1];
        if(pos <= 0 || pos > size){
            printf("\nINVALID POSITION");
        }
        else{
            for(int i = pos - 1; i < size - 1; i++){
                arr[i] = arr[i + 1];
            }
            size--;
        }

        // print
        printf("\nAfter deletion item \"%d\", from index \"%d\", array is: ", item, pos - 1);
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

        // deletion at last
        item = arr[size - 1];
        printf("\nAfter deletion at last item \"%d\" from index \"%d\", array is: ", item, size - 1);
        size--;
        // print
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

        // daletion at beginning
        item = arr[0];
        for(int i = 0; i < size - 1; i++){
            arr[i] = arr[i + 1];
        }
        printf("\nAfter deletion at start item \"%d\" from index \"0\", array is: ", item);
        size--;

        // print
        for(int i = 0; i < size; i ++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

// time complexity is same as in case of insertion in (test3_1.c)
// time complexity O(n - p), where 'n' is size of arr and 'p' is position of inserting item
// best case: O(1), insertion at last
// worst case: O(n)