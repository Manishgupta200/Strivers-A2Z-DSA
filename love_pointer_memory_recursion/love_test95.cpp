#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    // left...mid
    // mid+1...high
    vector<int> temp;
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

    // update arr
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void ms(vector<int>&arr, int s, int e){
    // base case
    if(s >= e){
        return;
    }
    int mid = (s + e) / 2;
    ms(arr, s, mid);
    ms(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

void mergeSort(vector<int>&arr, int n){
    ms(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){
    vector<int> arr = {3, 2, 4, 1, 3};
    int n = arr.size();
    mergeSort(arr, n);
    return 0;
}