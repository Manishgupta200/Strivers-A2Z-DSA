// https://leetcode.com/problems/set-matrix-zeroes/description/
// https://practice.geeksforgeeks.org/problems/make-zeroes4042/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=make-zeroes
// https://www.codingninjas.com/codestudio/problems/zero-matrix_1171153?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems

#include<bits/stdc++.h>
using namespace std;

class Solution {
// private:
//     void markRow(vector<vector<int>>& matrix, int r){
//         for(int j = 0; j < matrix[0].size(); j++){
//             if(matrix[r][j] != 0){
//                 matrix[r][j] = -1;
//             }
//         }
//     }

//     void markCol(vector<vector<int>>& matrix, int c){
//         for(int i = 0; i < matrix.size(); i++){
//             if(matrix[i][c] != 0){
//                 matrix[i][c] = -1;
//             }
//         }
//     }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // BRUTE
        // TC -> O(row * col) * O(row + col) + O(row + col) = O(n^3)
        // SC -> O(1)
        // int row = matrix.size();
        // int col = matrix[0].size();
        // for(int i = 0; i < row; i++){
        //     for(int j = 0; j < col; j++){
        //         if(matrix[i][j] == 0){
        //             markRow(matrix, i);
        //             markCol(matrix, j);
        //         }
        //     }
        // }

        // for(int i = 0; i < row; i++){
        //     for(int j = 0; j < col; j++){
        //         if(matrix[i][j] == -1){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }


        // BETTER
        // TC -> O(2 * row * col)
        // SC -> O(row) + O(col)
        // int row = matrix.size();
        // int col = matrix[0].size();

        // vector<int> rowMat(row, 0);
        // vector<int> colMat(col, 0);

        // for(int i = 0; i < row; i++){
        //     for(int j = 0; j < col; j++){
        //         if(matrix[i][j] == 0){
        //             rowMat[i] = 1;
        //             colMat[j] = 1;
        //         }
        //     }
        // }

        // for(int i = 0; i < row; i++){
        //     for(int j = 0; j < col; j++){
        //         if(rowMat[i] || colMat[j]){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }


        // OPTIMAL
        // TC -> O(2 * row * col)
        // SC -> O(1), as we are doing in-place opearation in matrix
        int row = matrix.size();
        int col = matrix[0].size();

        int col0 = 1;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    // mark ith row
                    matrix[i][0] = 0;

                    // mark jth col
                    if(j != 0){
                        matrix[0][j] = 0;
                    }
                    else{
                        col0 = 0;
                    }
                }
            }
        }
        
        // 1st
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][j] != 0){
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        // 2nd
        if(matrix[0][0] == 0){
            for(int j = 0; j < col; j++){
                matrix[0][j] = 0;
            }
        }

        // 3rd
        if(col0 == 0){
            for(int i = 0; i < row; i++){
                matrix[i][0] = 0;
            }
        }
    }
};