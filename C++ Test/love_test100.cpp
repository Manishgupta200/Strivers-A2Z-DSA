// https://leetcode.com/problems/search-a-2d-matrix/description/
#include<bits/stdc++.h>
using namespace std;

    // TC-> O(log(row * col))
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0;
        int e = row*col - 1;
        int mid = s + (e - s) / 2;
        while(s <= e){
            int element = matrix[mid / col][mid % col];

            if(element == target){
                return true;
            }
            else if(target > element){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return false;
    }

int main(void){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 30;
    cout << searchMatrix(matrix, target);
    return 0;
}