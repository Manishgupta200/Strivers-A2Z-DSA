// Sum of minimum and maximum elements of all subarrays of size “K”
// https://www.codingninjas.com/studio/problems/sum-of-minimum-and-maximum-elements-of-all-subarrays-of-size-k_1171047?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
	// Write your code here.
	deque<int> maxi;
	deque<int> mini;

	for(int i = 0; i < k; i++){
		while(!maxi.empty() && nums[maxi.back()] <= nums[i]){
			maxi.pop_back();
		}
		while(!mini.empty() && nums[mini.back()] >= nums[i]){
			mini.pop_back();
		}

		maxi.push_back(i);
		mini.push_back(i);
	}

	long long ans = 0;
	ans += nums[maxi.front()] + nums[mini.front()];
	for(int i = k; i < n; i++){

		// removal
		while(!maxi.empty() && i - maxi.front() >= k){
			maxi.pop_front();
		}
		while(!mini.empty() && i - mini.front() >= k){
			mini.pop_front();
		}

		// addition
		while(!maxi.empty() && nums[maxi.back()] <= nums[i]){
			maxi.pop_back();
		}
		while(!mini.empty() && nums[mini.back()] >= nums[i]){
			mini.pop_back();
		}

		maxi.push_back(i);
		mini.push_back(i);

		ans += nums[maxi.front()] + nums[mini.front()];
	}
	return ans;
}
