// https://www.codingninjas.com/codestudio/problems/merge-sort_920442?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1
// https://practice.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    // low...mid
    // mid+1...high
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high){
    // Base case
    if(low >= high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    mS(arr, 0, n-1);
    for(auto it : arr) cout << it << " ";
}

int main(void){
    vector<int> arr = {3, 2, 4, 1, 3};
    int n = arr.size();
    mergeSort(arr, n);
    return 0;
}