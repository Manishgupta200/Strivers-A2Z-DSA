// https://leetcode.com/problems/rotate-image/solutions/
// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1
#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int matrix2[row][col];
        // since (n x n) matrix. so,  row = col
        for(int i = 0; i < col; i++){
            for(int j = row-1; j >= 0; j--){
                matrix2[i][row-1-j] = matrix[j][i];
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                matrix[i][j] = matrix2[i][j];

                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
    }

    // method II
    void transpose(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

    void reflect(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            int s = 0, e = n-1;
            while(s < e){
                int temp = matrix[i][s];
                matrix[i][s] = matrix[i][e];
                matrix[i][e] = temp;
                s++;
                e--;
            }
        }

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n; j++){
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

int main(void){
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    // rotate(matrix);

    // method II
    // transpose + reversed = rotated
    transpose(matrix);
    reflect(matrix);
    return 0;
}