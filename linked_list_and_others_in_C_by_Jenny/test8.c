// Linear search in array
#include<stdio.h>

int main(){
    int arr[] = {2, 4, 7, 1, 0, 5, 9};
    int num, i;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Enter number to find this number exists in array or not: ");
    scanf("%d", &num);

    // for(i = 0; i < length; i++){
    //     if(arr[i] == num){
    //         printf("\nNumber \"%d\" found in array in index position \"%d\"", num, i);
    //         break;
    //     }
    // }
    // if(i == length){
    //     printf("\nELEMENT \"%d\" NOT FOUND IN ARRAY", num);
    // }

// 2nd method using flag variable
    int flag = 0;
    for(i = 0; i < length; i++){
        if(arr[i] == num){
            printf("\nNumber \"%d\" found in array in index position \"%d\"", num, i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\nELEMENT \"%d\" NOT FOUND IN ARRAY", num);
    }
    return 0;
}