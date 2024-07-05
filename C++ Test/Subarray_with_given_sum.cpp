// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&curated[]=1&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;

    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> v;
        long long sum = 0;
        int left = 0, right = 0;
        for(int right = 0; right < n; right++){
            sum += arr[right];
            while(sum > s && left < right){
                sum -= arr[left];
                left++;
            }
            if(sum == s){
                v.push_back(left+1);
                v.push_back(right+1);
                return v;
            }
        }
        v.push_back(-1);
        return v;
    }

int main(void){
    vector<int> arr ={1,2,3,7,5};
    int s=12;
    int n=arr.size();
    vector<int> result=subarraySum(arr,n,s);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}