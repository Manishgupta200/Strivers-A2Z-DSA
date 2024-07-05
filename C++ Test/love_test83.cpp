// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1
#include<bits/stdc++.h>
using namespace std;

vector<int> reverseAns(vector<int>& ans){
	int s = 0;
	int e = ans.size()-1;
	while(s < e){
		// swap(ans[s++], ans[e--]);
		int temp = ans[s];
		ans[s] = ans[e];
		ans[e] = temp;
		s++;
		e--;
	}
	return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;
	int j = m-1;
	vector<int> ans;
	int carry = 0;

	while(i >= 0 && j >= 0){
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1+val2+carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
		j--;
	}
	// first case
	while(i >= 0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
	}

	// second case
	while(j >= 0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		j--;
	}

	while(carry != 0){
		int sum = carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
	}
	// reverse(ans.begin(), ans.end());
	reverseAns(ans);
	return ans;
}

int main(void){
    // function calling here
    return 0;
}