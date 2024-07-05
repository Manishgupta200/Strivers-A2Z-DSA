// https://leetcode.com/problems/rotate-array/description/
// https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reversal-algorithm
#include<bits/stdc++.h>
using namespace std;

// Time Complexity – O(N) where N is the number of elements in an array
// Space Complexity – O(1) since no extra space is required
void reverseArr(int arr[], int start, int end){

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void Rotateeletoleft(int arr[], int n, int k){
    k = k % n;
    // overall TC -> O(2n)  SC -> O(1)
    reverseArr(arr, 0, k-1);  // TC -> O(k)
    reverseArr(arr, k, n-1);  // TC -> O(n-k)
    reverseArr(arr, 0, n-1);  // TC -> O(n)
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoleft(arr, n, k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}