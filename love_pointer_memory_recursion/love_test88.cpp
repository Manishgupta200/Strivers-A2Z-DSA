// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

// BFS APPROACH
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    // Write your code here
    pair<int, int> p;
    int first = -1, last = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            first = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            last = i;
        }
    }
    p = {first, last};
    if(p.first == -1 && p.second == -1) return {-1, -1};
    return p;
}

// Binary search approach
int firstOcc(vector<int>& arr, int s, int e, int k, int n){
    if(s > e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if((mid == 0 || k > arr[mid-1]) && arr[mid] == k){
        return mid;
    }
    else if(k > arr[mid]){
        return firstOcc(arr, mid+1, e, k, n);
    }
    else{
        return firstOcc(arr, s, mid-1, k, n);
    }
}

int lastOcc(vector<int>& arr, int s, int e, int k, int n){
    if(s > e){
        return -1;
    }
    int mid = s + (e-s)/2;
    // Here if.. else if... else statement sequence matter
    if((mid == arr.size()-1 || k < arr[mid+1]) && arr[mid] == k){
        return mid;
    }
    else if(k < arr[mid]){
        return lastOcc(arr, s, mid-1, k, n);
    }
    else{
        return lastOcc(arr, mid+1, e, k, n);
    }
}

int main(void){
    vector<int> v = {0, 0, 1, 1, 2, 2, 2, 2, 2};
    int size = v.size();
    int key = 2;
    pair<int, int> p = firstAndLastPosition(v, size, key);
    cout << "First and last occurence\n";
    cout << p.first << " " << p.second << endl;


    pair<int, int> pr;

    pr.first = firstOcc(v, 0, size-1, key, size);
    pr.second = lastOcc(v, 0, size-1, key, size);
    cout << pr.first << " " << pr.second << endl;
    return 0;
}


// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
	// int count(int arr[], int n, int x) {
	//     // code here
	//     if(lastOcc(arr, n, x) == -1 && firstOcc(arr, n, x) == -1) return 0;
	//     int count = lastOcc(arr, n, x) - firstOcc(arr, n, x) + 1;
	//     return count;
	// }