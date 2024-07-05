// Search in linear array if element not found then add that element at last position of the array
#include<stdio.h>

int main(){
    int arr[50], length;
    int num, i, flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &length);
    printf("Enter element in the array: ");
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter number to find this number exist in array or not: ");
    scanf("%d", &num);

    for(i = 0; i < length; i++){
        if(arr[i] == num){
            printf("\nNumber found at index: %d and number is: %d \n\n<we not need to insert element because element already found in arr>", i, num);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        arr[length] = num;
        length++;
        printf("\nNumber \"%d\" not found in array. So, we add these value at the last of the array and the final array is;\n", num);
        for(i = 0; i < length; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}