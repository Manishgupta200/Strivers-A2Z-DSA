// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1
// Another way in love_test83.cpp
#include <bits/stdc++.h> 
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int ans1 = 0;
	for(int i = 0; i < n; i++){
		ans1 = ans1 + (a[n-1-i] * pow(10, i));
	}

	int ans2 = 0;
	for(int i = 0; i < m; i++){
		ans2 = ans2 + (b[m-1-i] * pow(10, i));
	}

	int ans3 = ans1 + ans2;
	vector<int> v;
	while(ans3 != 0){
		int digit = ans3 % 10;
		v.push_back(digit);
		ans3 /= 10;
	}
	reverse(v.begin(), v.end());
	return v;
}

// {1, 2, 4, 0} is output returned
int main(void){
    vector<int> a = {1, 2, 3, 4};
    int n = a.size();
    vector<int> b = {6};
    int m = b.size();
    vector<int> v = findArraySum(a, n, b, m);

    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}