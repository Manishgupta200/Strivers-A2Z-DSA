// swap alternate
#include<iostream>
using namespace std;

int main(void){
    int n = 6;
    // int arr[n] = {1, 2, 3, 4, 5};
    int arr[n] = {1, 2, 3, 4, 5, 6};
    for(int i = 0; i < n; i += 2){
        if(i+1 < n){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    // print arr
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}