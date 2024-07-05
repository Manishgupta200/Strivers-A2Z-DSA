#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void reverseWord(string &str){
     int left = 0;
     int right = str.length()-1;
     while(left < right){
         swap(str[left], str[right]);
         left++;
         right--;
     }
}

string reverseStringWordWise(string input)
{
    //Write your code here
    vector<string> v;
    string str = "";
    for(int i = input.length()-1; i >= 0; i--){
        if(input[i] != ' '){
            str += input[i];
        }
        else{
            v.push_back(str);
            str = "";
        }
    }
    v.push_back(str);
    string res = "";
    for(int i = 0; i < v.size(); i++){
        reverseWord(v[i]);
        res += v[i];
        res += " ";
    }
    res.erase(res.end()-1, res.end());
    return res;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}