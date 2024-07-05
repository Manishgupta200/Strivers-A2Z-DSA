#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 3;
    int M = 3;
    int sum = 0;
    vector<vector<int>> Grid = {{1,2,3}, {4,5,6}, {7,8,9}};

        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                sum += Grid[N][M];
            }
        }
        cout << "sum = " << sum << endl;
    return 0;
}