#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    if(input.length() == 0){
        return input;
    }
    
    string ans = "";
    ans += input[0];

    for(int i = 1; i < input.size(); i++){
        if(input[i] != input[i-1]){
            ans += input[i];
        }
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}