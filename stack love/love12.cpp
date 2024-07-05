// Largest Rectangle in Histogram
// https://leetcode.com/problems/largest-rectangle-in-histogram/description/
// https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// TC ->O(n)
// SC ->O(n)
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> nextSmallerElement(vector<int> height, int n){
        stack<int> stk;
        vector<int> ans(n, 0);
        stk.push(-1);
        for(int i = n-1; i >= 0; i--){
            while(stk.top() != -1 && height[stk.top()] >= height[i]){
                stk.pop();
            }
            ans[i] = stk.top();
            stk.push(i);
        }
        return ans;
    }

    vector<int> previousSmallerElement(vector<int> height, int n){
        stack<int> stk;
        vector<int> ans(n, 0);
        stk.push(-1);
        for(int i = 0; i < n; i++){
            while(stk.top() != -1 && height[stk.top()] >= height[i]){
                stk.pop();
            }
            ans[i] = stk.top();
            stk.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        // next smaller element
        vector<int> nextSmaller(n, 0);
        nextSmaller = nextSmallerElement(heights, n);
        for(auto it : nextSmaller) cout << it << " ";
        cout << endl;

        // previous smaller element
        vector<int> previousSmaller(n, 0);
        previousSmaller = previousSmallerElement(heights, n);
        for(auto it : previousSmaller) cout << it << " ";
        cout << endl;

        int newArea = INT_MIN;
        for(int i = 0; i < n; i++){
            int next = nextSmaller[i];
            int previous = previousSmaller[i];

            if(next == -1){
                next = n;
            }
            int width = next - previous - 1;

            int area = 1LL * heights[i] * 1LL * width;
            newArea = max(area, newArea);
        }
        return newArea;
    }
};