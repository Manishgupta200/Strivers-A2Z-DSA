// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
// Another approach in love_test88.cpp
#include<bits/stdc++.h>
using namespace std;
    char getMaxOccuringChar(string str){
        // Your code here
        map<char, int> mp;
        for(int i = 0; i < str.length(); i++){
            mp[str[i]]++;
        }

        for(auto it : mp){
            cout << it.first << " " << it.second << endl;
        }

        int maxi = INT_MIN;
        char ch;
        for(auto it : mp){
            if(maxi < it.second){
                maxi = it.second;
                ch = it.first;
            }
        }
        return ch;
    }


int main(void){
    string str = "testsample";
    cout << getMaxOccuringChar(str);
    return 0;
}