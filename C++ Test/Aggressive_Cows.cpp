// Aggressive Cow Problem
// https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/aggressive-cows/1

// Magnetic Force Between Two Balls Problem
// https://leetcode.com/problems/magnetic-force-between-two-balls/description/
#include<bits/stdc++.h>
using namespace std;


bool isPossible(vector<int> &stalls, int k, int mid){
    int countCow = 1;
    int lastPos = stalls[0];
    for(int i = 0; i < stalls.size(); i++){     // i = 1 se bhi start kar sakte h
        if(stalls[i] - lastPos >= mid){
            countCow++;
            if(countCow == k) return true;
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 0, ans = -1;
    // int maxm = -1;
    // for(int i = 0; i < stalls.size(); i++){
    //     if(maxm < stalls[i]) maxm = stalls[i];
    // }
    // int e = maxm;
    int n = stalls.size();
    int e = stalls[n-1] - stalls[0];
    int mid = s + (e - s) / 2;
    while(s <= e){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            s = mid + 1;    // find lasgest minimum distance. (right me sab possible solution h)
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(void){
    vector<int> v = {4, 2, 1, 3, 6};
    int m = 2;
    cout << aggressiveCows(v, m);
    return 0;
}

// Explained discussion
// https://leetcode.com/discuss/general-discussion/1302335/aggressive-cows-spoj-fully-explained-c