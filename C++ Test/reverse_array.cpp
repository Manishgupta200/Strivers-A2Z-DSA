#include<iostream>
using namespace std;

int reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){
    int arra[6] = {1, 4, -23, 4, -9, 4};
    int arrb[5] = {1, 3, 2, 5, 4};

    reverseArray(arra, 6);
    reverseArray(arrb, 5);

    printArray(arra, 6);
    printArray(arrb, 5);
    return 0;
}