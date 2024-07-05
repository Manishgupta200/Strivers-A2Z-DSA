// Allocate Books Problem
// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540
// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

// The Painter's Partition Problem
// https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
#include <bits/stdc++.h> 
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    // edge case
    if(m > n) return -1;

    // Write your code here.
    int s = 0, e = 0;
    for(int i = 0; i < n; i++){
        e += arr[i];
    }
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s <= e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(void){
    vector<int> v = {5, 17, 100, 11};
    int n = v.size();
    int m = 4;
    cout << allocateBooks(v, n, m);
    return 0;
}