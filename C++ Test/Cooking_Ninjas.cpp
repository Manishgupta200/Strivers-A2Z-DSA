// https://www.codingninjas.com/codestudio/problems/cooking-ninjas_1164174?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
// https://www.spoj.com/problems/PRATA/
#include<bits/stdc++.h> 
using namespace std;
// m = no. of dishes
// n = no. of cooks
bool isPossible(vector<int> &rank, int m, int n, int mid){
    int time = 0;
    int dish = 0;
    for(int i = 0; i < n; i++){
        time = rank[i];
        int j = 2;
        while(time <= mid){
            dish++;
            time = time + (rank[i] * j);
            j++;
        }
        if(dish >= m) return true;
    }
    return false;
}

int minCookTime(vector<int> &rank, int m)
{
    // Write your code here

    sort(rank.begin(), rank.end());
    int s = 0, ans = -1, n = rank.size();
    
    // end position
    // int e = 1e8;
    int e = INT_MAX;

    int mid = s + (e - s) / 2;
    while(s <= e){
        if(isPossible(rank, m, n, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(void){
    vector<int> rank = {1, 2, 3, 4};
    int m = 11;
    cout << minCookTime(rank, m);
}