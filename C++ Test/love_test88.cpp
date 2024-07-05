// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
// Another approach in love_test87.cpp
#include<bits/stdc++.h>
using namespace std;
    char getMaxOccuringChar(string str){
        // Your code here
        int a[26] = {0};
        // create an array of count of characters
        for(int i = 0; i < str.size(); i++){
            int number = 0;
            a[str[i] - 'a']++;
        }
        // find maximum occurence of character
        int maxi = -1, ans = 0;
        for(int i = 0; i < 26; i++){
            if(maxi < a[i]){
                ans = i;
                maxi = a[i];
            }
        }
        return ans + 'a';
    }


int main(void){
    string str = "testsample";
    cout << getMaxOccuringChar(str);
    return 0;
}