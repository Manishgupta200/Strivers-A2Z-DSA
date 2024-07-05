// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// https://practice.geeksforgeeks.org/problems/peak-element/1?page=2&category[]=Data%20Structures&category[]=Algorithms&category[]=Arrays&category[]=Mathematical&category[]=Strings&category[]=Sorting&category[]=Bit%20Magic&category[]=Matrix&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;

    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size()-1;
        int mid = s + (e-s)/2;
        while(s < e){
            if(arr[mid] < arr[mid + 1]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return mid;
    }

int main(){
    vector<int> v = {0,10,5,2};
    cout << peakIndexInMountainArray(v);
    return 0;
}