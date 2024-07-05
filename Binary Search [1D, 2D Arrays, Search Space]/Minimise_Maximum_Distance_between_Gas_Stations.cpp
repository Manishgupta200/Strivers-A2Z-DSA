// https://www.codingninjas.com/studio/problems/minimise-max-distance_7541449?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0
// https://leetcode.com/problems/minimize-max-distance-to-gas-station/
// https://practice.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1
#include<bits/stdc++.h>
using namespace std;

int numberOfGasStationRequired(vector<int> arr, long double dist){
	int cnt = 0;
	for(int i = 1; i < arr.size(); i++){
		// int numberInBetween = (arr[i] - arr[i-1]) / dist;
		// if((arr[i] - arr[i-1]) / dist == numberInBetween*dist){
		// 	numberInBetween--;
		// }
		// cnt += numberInBetween;

		cnt += ceil((arr[i] - arr[i-1]) / dist) - 1;
	}
	return cnt;
}

long double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
	// BRUTE FORCE
	// TC -> O(k*n) + O(n), n = size of the given array, k = no. of gas stations to be placed.
	// SC -> O(n-1) as we are using an array to keep track of placed gas stations.
	// int n = arr.size();
	// vector<int> howMany(n-1, 0);
	
	// for(int gasStation = 1; gasStation <= k; gasStation++){
	// 	long double maxVal = -1;
	// 	int maxIndex = -1;
		
	// 	for(int i = 0; i < n-1; i++){
	// 		long double diff = arr[i+1] - arr[i];
	// 		long double sectionLength = diff / (long double)(howMany[i] + 1);
			
	// 		if(maxVal < sectionLength){
	// 			maxVal = sectionLength;
	// 			maxIndex = i;
	// 		}
	// 	}
	// 	howMany[maxIndex]++;
	// }

	// long double maxAns = -1;
	// for(int i = 0; i < n-1; i++){
	// 	long double diff = arr[i+1] - arr[i];
	// 	long double sectionLength = diff / (long double)(howMany[i] + 1);
	// 	maxAns = max(maxAns, sectionLength);
	// }
	// return maxAns;


	
	// BETTER
	// TC -> O(nlogn + klogn),  n = size of the given array, k = no. of gas stations to be placed.
	// SC -> O(n-1)+O(n-1)
	// int n = arr.size();
	// vector<int> howMany(n-1, 0);
	// priority_queue<pair<long double, int>> pq;
	// for(int i = 0; i < n-1; i++){
	// 	pq.push({(arr[i+1] - arr[i]), i});
	// }
	// for(int gasStation = 1; gasStation <= k; gasStation++){
	// 	long double secIndex = pq.top().second;
	// 	pq.pop();
	// 	howMany[secIndex]++;
		
	// 	long double diff = arr[secIndex + 1] - arr[secIndex];
	// 	long double sectionLength = diff / (long double)(howMany[secIndex] + 1);

    //     pq.push({sectionLength, secIndex});
    // }
	// return pq.top().first;




	// OPTIMAL APPROACH
	int n = arr.size();
	long double low = 0;
	long double high = 0;
	for(int i = 0; i < n-1; i++){
		high = max(high, (long double)(arr[i+1] - arr[i]));
	}

	while(high - low > (1e-6)){
		long double mid = (low + high) / (2.0);
		int cnt = numberOfGasStationRequired(arr, mid);
		if(cnt > k){
			low = mid;
		}
		else{
			high = mid;
		}
	}
	return high;
}