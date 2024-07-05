// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
//     since element in arr is [1, .., x, .., N-1, x]
    for(int i = 1; i < arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}


int main(void){
    vector<int> v = {1, 2, 3, 4, 4};
    findDuplicate(v);
    return 0;
}