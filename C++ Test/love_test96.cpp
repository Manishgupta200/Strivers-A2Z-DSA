// https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=1
#include <bits/stdc++.h> 
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // TC -> O(row X col)
    //Write your code here
    vector<int> v;
    for(int col = 0; col < mCols; col++){
        if(col & 1){
            // odd index - bottom to top
            for(int row = nRows-1; row >= 0; row--){
                v.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = 0; row < nRows; row++){
                v.push_back(arr[row][col]);
            }
        }
    }
    return v;
}

int main(void){
    
    return 0;
}