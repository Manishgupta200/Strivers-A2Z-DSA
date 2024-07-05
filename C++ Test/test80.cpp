#include<bits/stdc++.h>
using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;
        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];

            if(target >= element){
                rowIndex++;
            }
            else{
                colIndex--;
            }
            cout << element << " ";
        }
        return 0;
    }

int main(void){
    vector<vector<int>> matrix = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,26,30}};
    int target = target = 5;
    searchMatrix(matrix, target);
    return 0;
}