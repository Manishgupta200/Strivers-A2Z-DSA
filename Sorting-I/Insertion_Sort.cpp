// https://practice.geeksforgeeks.org/problems/insertion-sort/0?category[]=Algorithms&page=1&query=category[]Algorithmspage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort
// https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
#include<iostream>
#include<algorithm>
using namespace std;

// INSERTION SORT
// TC -> O(n^2)     (average, worst)
// Bast TC -> O(n)
// SC -> O(1)
int insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main(void){
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}