// https://leetcode.com/problems/merge-intervals/description/
// https://www.codingninjas.com/codestudio/problems/merge-all-overlapping-intervals_6783452?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=1
// https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=overlapping_intervals
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	// TC -> O(N log N) + O(2N)
	// SC -> O(N)
	// int n = arr.size();
	// sort(arr.begin(), arr.end());
	// vector<vector<int>> ans;

	// for(int i = 0; i < n; i++){
	// 	int s = arr[i][0];
	// 	int e = arr[i][1];

	// 	if(!ans.empty() && e <= ans.back()[1]){
	// 		continue;
	// 	}

	// 	for(int j = i+1; j < n; j++){
	// 		if(arr[j][0] <= e){
	// 			e = max(e, arr[j][1]);
	// 		}
	// 		else{
	// 			// kyuki usse jyada wala me bhi if condition true nahi hoga kyuki arr ko sort kar diye h
	// 			break;
	// 		}
	// 	}
	// 	ans.push_back({s, e});
	// }
	// return ans;


	// Optimal
	// in one pass iteration
	// TC -> O(N log N) + O(N)
	// SC -> O(N), to store the ans
	int n = arr.size();
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());
	for(int i = 0; i < n; i++){
		if(ans.empty() || arr[i][0] > ans.back()[1]){
			ans.push_back(arr[i]);
		}
		else{
			ans.back()[1] = max(ans.back()[1], arr[i][1]);
		}
	}
	return ans;
}