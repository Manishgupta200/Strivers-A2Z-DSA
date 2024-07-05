// DELETION IN ONLY UNSORTED ARRAY (LAST ELEMENT TAKE POSITION OF ITEM FROM WHERE I WANT TO DETELE ITEM THEN DECTRASE SIZE BY 1)
#include<stdio.h>

int main(){
    int arr[50], size, pos, item;
    printf("Enter the size of an array: ");
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
            arr[pos - 1] = arr[size - 1];
            size--;
        }

        // print
        printf("\nAfter deletion item \"%d\", from index \"%d\", array is: ", item, pos - 1);
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

// time complexity is same as in case of insertion in (test3_3.c)
// time complexity: O(1) always