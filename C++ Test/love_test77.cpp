// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	// reverse(arr.begin()+m+1, arr.end());

	int s = m+1;
	int e = arr.size()-1;
	while(s < e){
		swap(arr[s], arr[e]);
		s++; e--;
	}

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(void){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int m = 3;
    reverseArray(v, m);
    return 0;
}