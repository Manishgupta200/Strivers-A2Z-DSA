#include<bits/stdc++.h>
using namespace std;

string firstRepChar(string s)
{
    //code here.
    unordered_map<char, int> mp;
    string str = "";
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
        cout << mp[s[i]] << " ";
        if(mp[s[i]] == 2){
            str += s[i];
            cout << str << " ";
        }
        // return str;
    }
    return "-1";
}

int main(void){
    string s = "geeks";
    firstRepChar(s);

    return 0;
}