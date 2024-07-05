// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    int i = 0, j = 0;
    vector<int> v;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] == arr2[j]){
            v.push_back(arr1[i]);
            i++, j++;
        }
        else{
            j++;
        }
    }
    return v;
}

int main(void){
    int n = 6, m = 4;
    vector<int> v1, v2;
    v1 = {1, 2, 3, 3, 4};
    v2 = {2, 2, 3, 3};
    vector<int> v = findArrayIntersection(v1, n, v2, m);
    for(auto it : v){
        cout << it << " ";
    }
    return 0;
}