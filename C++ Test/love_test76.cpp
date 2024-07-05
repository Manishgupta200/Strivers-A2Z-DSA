// Find pivot in an array
#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0, e = n-1;
    int mid = s + (e - s) / 2;
    while(s < e){
        // in this case it represent the first above monotonic incresing line
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            // let say the first index of below monotonic line is the pivot element
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;   // return e, return mid; same result shows
}

int main(void){
    // int arr[5] = {3, 8, 10, 17, 1};
    int arr[5] = {7, 9, 1, 2, 3};
    cout << getPivot(arr, 5);
    return 0;
}