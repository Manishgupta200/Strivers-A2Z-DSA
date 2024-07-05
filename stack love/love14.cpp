// Max rectangle
// https://practice.geeksforgeeks.org/problems/max-rectangle/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    //  TC -> O(n * m)
    //  SC -> O(m), using stack of size col 
  private:
    vector<int> nextSmallerElement(int height[], int n){
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

    vector<int> previousSmallerElement(int height[], int n){
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
    
    int largestRectangleArea(int heights[], int n) {
        // int n = heights.size();
        // next smaller element
        vector<int> nextSmaller(n, 0);
        nextSmaller = nextSmallerElement(heights, n);
        // for(auto it : nextSmaller) cout << it << " ";
        // cout << endl;

        // previous smaller element
        vector<int> previousSmaller(n, 0);
        previousSmaller = previousSmallerElement(heights, n);
        // for(auto it : previousSmaller) cout << it << " ";
        // cout << endl;

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
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        // vector<int> v(m, 0);
        // int largestArea = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < m; j++){
        //         if(M[i][j] == 0){
        //             v[j] = 0;
        //             continue;
        //         }
        //         v[j] += M[i][j];
        //     }
            
        //     // from largest rectangular area in histogram
        //     int newArea = largestRectangleArea(v);
            
        //     largestArea = max(largestArea, newArea);
        // }
        // return largestArea;
        
        
        
        
        // 2nd way
        // compute for 1st row
        int largestArea = largestRectangleArea(M[0], m);

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(M[i][j] == 0){
                    M[i][j] = 0;
                    continue;
                }
                M[i][j] = M[i][j] + M[i-1][j];
            }
            
            // from largest rectangular area in histogram
            int newArea = largestRectangleArea(M[i], m);
            
            largestArea = max(largestArea, newArea);
        }
        return largestArea;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends