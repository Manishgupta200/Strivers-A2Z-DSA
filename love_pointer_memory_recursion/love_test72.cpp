#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str1 = "ABCDEG";
    string str2 = "ABCDEF!";
    // string comparison done in
    // 1. compare with first character (if matching character then iterate next)
    bool res = str2 < str1;
    cout << res << endl;
    return 0;
}