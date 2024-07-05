#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int k){
    int mid = s + (e - s) / 2;
    while(s <= e){
        if(arr[mid] == k) return mid;
        else if(k > arr[mid]) s = mid + 1;
        else e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k){
    int s = 0, e = n-1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(arr[mid] == k) return mid;
        e = mid - 1;
        if((is_sorted(arr.begin() + s, arr.begin() + (mid - 1))) && (s < (mid - 1))){
            
            int pos =  binarySearch(arr, s, e, k);
            if(pos != -1){
                return pos;
            }
        }
        else{
            s = mid + 1;
            e = n - 1;
        }
        mid = s + (e - s) / 2;
    }
    if(s == n) return -1;
    return s; 
}

int main(void){
    // vector<int> v = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    vector<int> v = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    // vector<int> v = {8, 1, 2, 3}; // FAIL ON THIS TEST CASE when find 8
    int size = v.size();
    int target = 10;
    cout << findPosition(v, size,  target);
    return 0;
}