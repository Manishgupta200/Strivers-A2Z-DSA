// https://leetcode.com/problems/spiral-matrix/description/
// https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=spiral_matrix
// https://www.codingninjas.com/codestudio/problems/spiral-matrix_6922069?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n-1;
        int endingCol = m-1;
        
        int total = m * n;
        int count = 0;
        
        // while(startingRow <= endingRow && startingCol <= endingCol){
        //     // print starting row
        //     for(int i = startingCol; i <= endingCol; i++){
        //         count++;
        //         if(count == k) return a[startingRow][i];
        //     }
        //     startingRow++;

        //     // print ending col
        //     for(int i = startingRow; i <= endingRow; i++){
        //         count++;
        //         if(count == k) return a[i][endingCol];
        //     }
        //     endingCol--;

        //     if(startingRow <= endingRow){
        //         // print ending row
        //         for(int i = endingCol; i >= startingCol; i--){
        //             count++;
        //             if(count == k) return a[endingRow][i];
        //         }
        //         endingRow--;
        //     }

        //     if(startingCol <= endingCol){
        //         // print strating column
        //         for(int i = endingRow; i >= startingRow; i--){
        //             count++;
        //             if(count == k) return a[i][startingCol];
        //         }
        //         startingCol++;
        //     }
        // }
        // return 0;
        
        
        // 2nd method
            while(count < total){
            // print starting row
            for(int i = startingCol; i <= endingCol && count < total; i++){
                count++;
                if(count == k) return a[startingRow][i];
            }
            startingRow++;

            // print ending col
            for(int i = startingRow; i <= endingRow && count < total; i++){
                count++;
                if(count == k) return a[i][endingCol];
            }
            endingCol--;

            // print ending row
            for(int i = endingCol; i >= startingCol && count < total; i--){
                count++;
                if(count == k) return a[endingRow][i];
            }
            endingRow--;

            // print strating column
            for(int i = endingRow; i >= startingRow && count < total; i--){
                count++;
                if(count == k) return a[i][startingCol];
            }
            startingCol++;
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends