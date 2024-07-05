// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/0?company[]=Intuit+&page=1&query=company[]Intuit+page1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=stock-buy-and-sell
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // TC -> O(N)
        // SC -> O(1)
        int n = prices.size();
        int maxProfit = 0;
        int mini = prices[0];
        for(int i = 1; i < n; i++){

            int cost = prices[i] - mini;

            maxProfit = max(maxProfit, cost);

            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};