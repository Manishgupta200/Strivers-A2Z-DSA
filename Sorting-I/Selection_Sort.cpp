// https://practice.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort
// https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
#include<iostream>
#include<algorithm>
using namespace std;
// SELECTION SORT
// TC -> O(n^2)
// SC -> O(1)
void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int mini = i;
        for(int j = i+1; j < n; j++){   // int j = i also works
            if(arr[j] < arr[mini]){
                mini = j;
            }
            // swap
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(void){
    // int arr[] = {13, 46, 24, 52, 20, 9};
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}