// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
// https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;

int isPossible(vector<int> arr, int k, int m, int mid){
	int count = 0;
	int temp_count = 0;
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] <= mid){
			temp_count++;
		}
		else{
			count = count + (temp_count / k);
			temp_count = 0;
		}
	}
	count = count + (temp_count / k);
	return (count >= m);
}

int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	// LINEAR
	// TC -> O(min - max + 1) * N
	// SC -> O(1)
	// long long val = m * 1LL * k * 1LL;
	// if(val > arr.size()) return -1;

	// int low = *min_element(arr.begin(), arr.end());
	// int high = *max_element(arr.begin(), arr.end());
	// for(int i = low; i <= high; i++){
	// 	if(isPossible(arr, k, m, i)) return i;
	// }
	// return -1;


	// safe case
	// TC -> O(N * log(max - min + 1))
	// SC -> O(1)
	long long val = m * 1LL * k * 1LL;	// To avoid overflow error
	if(val > arr.size()) return -1;

	int low = *min_element(arr.begin(), arr.end());
	int high = *max_element(arr.begin(), arr.end());
	int ans = -1;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(isPossible(arr, k, m, mid)){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	// return ans;
	return low;
}