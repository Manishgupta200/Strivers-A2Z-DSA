// https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;

// BFS TC -> O(n^3)
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> v;
	set<vector<int>> st;
	for(int i = 0; i < n-2; i++){
		for(int j = i+1; j < n-1; j++){
			for(int k =j+1; k < n; k++){
				if(arr[i] + arr[j] + arr[k] == K){
					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					// sort
					sort(temp.begin(), temp.end());
					if(st.find(temp) == st.end()){
						v.push_back(temp);
						st.insert(temp);
					}
				}
			}
		}
	}
	return v;
}

// Two Pointer approach
// OPTAMIZED TC -> O(n^2)
vector<vector<int>> findTriplets2(vector<int>arr, int n, int K) {
	// Write your code here.
	// OPTAMIZED
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());
	for(int i = 0; i < n; i++){
		int target = K - arr[i];
		int front = i + 1;
		int back = n - 1;

		while(front < back){
			int sum = arr[front] + arr[back];
			if(sum < target) front++;
			else if(sum > target) back--;
			else{
				int x = arr[front];
				int y = arr[back];
				ans.push_back({arr[i], arr[front], arr[back]});

				while(front < back && arr[front] == x) {front++;}
				while(front < back && arr[back] == y) {back--;}
			}
		}
		while(i+1 < n && arr[i] == arr[i+1]) i++;
	}
	return ans;
}


int main(void){
    vector<int>arr = {10, 5, 5, 5, 2, 6, 1};
    vector<vector<int>> vect = findTriplets(arr, 7, 12);

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
    cout << "--------\n";
    vector<vector<int>> vect2 = findTriplets2(arr, 7, 12);
    // 2nd way of printing
    for(vector<int> it : vect2){
        for(int x : it){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}