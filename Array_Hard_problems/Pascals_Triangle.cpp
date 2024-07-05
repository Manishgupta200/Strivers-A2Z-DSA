// https://www.codingninjas.com/codestudio/problems/print-pascal-s-triangle_6917910?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
// https://leetcode.com/problems/pascals-triangle/
// https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pascal-triangle
#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i = 1; i < row; i++){
        ans = ans * (row - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;
    for(int i = 1; i <= N; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main(){
    return 0;
}









// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

//     vector<vector<int>> nthRowOfPascalTriangle(int n) {

//         // code here
//         vector<vector<int>> ans(n);
//         for(int i = 0; i < n; i++){
//             ans[i].resize(i + 1);
//             ans[i][0] = ans[i][i] = 1;
            
//             for(int j = 1; j < i; j++){
//                 ans[i][j] = (ans[i-1][j-1] + ans[i-1][j]);
//             }
//         }
//         return ans;
//     }
    
// int main() {
//     vector<vector<int>> v = nthRowOfPascalTriangle(4);
//     for(int i = 0; i < v.size(); i++){
//         for(int j = 0; j < v[i].size(); j++){
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }