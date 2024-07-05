// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;

// TC -> O(log n)
int getPivot(vector<int>& arr, int n){
    int s = 0, e = n-1;
    int mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int k){
    int mid = s + (e - s) / 2;
    while(s <= e){
        if( arr[mid] == k) return mid;
        else if(k > arr[mid]) s = mid + 1;
        else e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.

    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}

int main(void){
    vector<int> v = {2, 4, 5, 6, 8, 9, 1};
    int n = v.size();
    int k = 1;
    cout << findPosition(v, n, k);
    return 0;
}