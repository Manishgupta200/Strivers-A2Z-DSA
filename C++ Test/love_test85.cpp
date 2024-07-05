// https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=1
// https://leetcode.com/problems/valid-palindrome/
#include <bits/stdc++.h> 
using namespace std;
string toLowerCase(string name){
    int i = 0, j = name.size()-1;
    string str = "";
    while(i <= j){
        if(name[i] >= 'a' && name[i] <= 'z' || name[i] >= '0' && name[i] <= '9'){
            str += name[i++];
        }
        else if(name[i] >= 'A' && name[i] <= 'Z'){
            str += name[i++] - 'A' + 'a';
        }
        else{
            i++;
        }
    }
    return str;
}

bool checkPalindrome(string s)
{
    // Write your code here.
    string str = toLowerCase(s);
    int st = 0, e = str.size()-1;
    bool flag = true;
    while(st < e){
        if(str[st] == str[e]){
            st++;
            e--;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}