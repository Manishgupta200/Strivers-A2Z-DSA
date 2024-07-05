// https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11
#include<bits/stdc++.h>
using namespace std;

bool search(int *arr, int s, int e, int k){
    // base caseṇ
    if(s > e){
        return false;
    }

    int mid = s + (e - s) / 2;
    if(arr[mid] == k){
        return true;
    }
    else if(k > arr[mid]){
        search(arr, mid+1, e, k);
    }
    else{
        search(arr, s, mid-1, k);
    }
}

int main(void){
    int arr[] = {2, 4, 6, 10, 14, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 16;
    int start = 0;
    int end = size - 1;
    cout << search(arr, start, end, key) << endl;
    return 0;
}