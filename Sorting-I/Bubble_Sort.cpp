// https://practice.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort
// https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
#include<iostream>
#include<algorithm>
using namespace std;
// BUBBLE SORT
// TC -> O(n^2)     (average and worst)
// Best TC -> O(n)
// SC -> O(1)
int bubble_sort(int arr[], int n){
    for(int i = n-1; i >= 1; i--){      // int i >= 0 also works
    int didSwap = 0;
        for(int j = 0; j <= i-1; j++){ 
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}

int main(void){
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}