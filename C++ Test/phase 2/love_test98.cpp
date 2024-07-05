// https://www.codingninjas.com/codestudio/problems/quick-sort_983625?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15
#include <bits/stdc++.h> 
using namespace std;

int partition(vector<int>& arr, int low, int high){
    // int pivot = arr[high];
    // int i = low;
    // int j = high;

    // while(i < j){

    //     while(arr[j] >= pivot && j >= low + 1) j--;
    //     while(arr[i] < pivot && i <= high - 1) i++;
    //     if(i < j) swap(arr[i], arr[j]);
    // }
    // swap(arr[i], arr[high]);
    // return i;

    int pivot = arr[low];
    int cnt = 0;
    for(int i = low+1; i <= high; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    int pivotIndex = low + cnt;
    swap(arr[pivotIndex], arr[low]);

    int i = low;
    int j = high;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void qs(vector<int>& arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);

        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    int low = 0;
    int high = arr.size()-1;
    qs(arr, low, high);

    return arr;
}
