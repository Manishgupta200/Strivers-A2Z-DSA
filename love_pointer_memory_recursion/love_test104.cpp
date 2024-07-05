// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
// https://www.codingninjas.com/codestudio/problems/rat-in-a-maze_1215030?leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;
// Rat Maze

class Solution{
    private:
    bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited){
        bool res = ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) ? true : false;
        return res;
    }
    
    void solve(vector<vector<int>> &m, int n, string path, int x, int y, vector<vector<int>> visited, vector<string> &ans){
        //You have reached x, y here
        
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // Move D, L, R, U
        
        // Down
        int newx = x + 1;
        int newy = y;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('D');
            solve(m, n, path, newx, newy, visited, ans);
            // backtrack
            path.pop_back();
        }
        
        // Left
        newx = x;
        newy = y - 1;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('L');
            solve(m, n, path, newx, newy, visited, ans);
            // backtrack
            path.pop_back();
        }
        
        // Right
        newx = x;
        newy = y + 1;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('R');
            solve(m, n, path, newx, newy, visited, ans);
            // backtrack
            path.pop_back();
        }
        
        // Up
        newx = x - 1;
        newy = y;
        if(isSafe(m, n, newx, newy, visited)){
            path.push_back('U');
            solve(m, n, path, newx, newy, visited, ans);
            // backtrack
            path.pop_back();
        }
        
        // backtrack
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        // safe case
        if(m[0][0] == 0){
            return ans;
        }
        
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        // initialize with zero
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        
        solve(m, n, path, srcx, srcy, visited, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// int main(void){
//     Solution h1;

//     vector<vector<int>> arr = 
//         {{1, 0, 0, 0},
//          {1, 1, 0, 1}, 
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     vector<string> v = h1.findPath(arr, n);

//     for(auto it : v){
//         cout << it << " ";
//     }
//     cout << endl;
// }