#include<bits/stdc++.h>
using namespace std;

    string convert(string &s, int numRows) {
        string str = "";
        vector<string> v;
        int k = numRows;
       while(numRows != 0){
           
           for(int i = k - numRows; i < s.length(); i += 4){
               v[k - numRows].push_back(s[i]);
            //    0, 4, 8, ..
            //    1, 5, 9, ..
            //    2, 6, 10, ..
           }
           numRows--;
       } 
       for(int i = 0; i < v.size(); i++){
           str += v[i];
       }
       return str;
    }

int main(void){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s, numRows);
    return 0;
}