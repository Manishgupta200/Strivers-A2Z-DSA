// First pattern matching algorithm
#include<stdio.h>

int main(){
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'f', 'e', 'f', 'g'};
    char subArr[] = {'e', 'f', 'g'};
    int k = 1;
    int max = sizeof(arr) - sizeof(subArr) + 1;
    int index;
    int flag;
    while(k <= max){
        flag = 1;
        for(int i = 0; i < sizeof(subArr) && flag == 1; i++){
            if(subArr[i] != arr[k + i - 1]){
                flag = 0;
            }
        }
        if(flag == 1){
            index = k - 1;
            printf("subArr found in array from index: %d\n", index);
        }
        k++;
    }
    if(!(index)){
        printf("NOT FOUND");
    }
    
    return 0;
}