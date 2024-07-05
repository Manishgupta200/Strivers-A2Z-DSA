#include<iostream>
#include<algorithm>
using namespace std;
// sorting 2 pointer approach
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int sortArray(int arr[], int n){
    int left = 0, right = n-1;
    while(left < right){
        printArray(arr, n);
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(void){
    int n = 8;
    int a[n] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortArray(a, n);
    return 0;
}