#include<iostream>
#include<vector>
using namespace std;

    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

int main(void){
    vector<vector<int> > v = 
           {{1, 1, 1, 1},
           {2, 2, 2, 2},
           {3, 3, 3, 3},
           {4, 4, 4, 4}};
    transpose(v, v.size());
    return 0;
}