// Find maximum number from array element
#include<stdio.h>

int main(){
    int arr[50], size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("\nEmter array data: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int k = 0, max = arr[0], loc = 0;
    for(int i = 0; i < size; i++){
        k++;
        if(k > size - 1){
            printf("Maximum value: %d\nLocation: %d\n", max, loc);
        }
        else{
            if(max < arr[k]){
                loc = k;
                max = arr[k];
            }
            else{
                continue;
            }
        }
    }
    return 0;
}