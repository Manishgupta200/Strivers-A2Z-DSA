// https://leetcode.com/problems/valid-palindrome/submissions/879866364/
#include<iostream>
using namespace std;

// TC -> O(N)
// SC -> O(1)
bool palindrome(string &s){
    int left = 0, right = s.size() - 1;
    while(left < right){
        if(!isalnum(s[left])) left++;
        else if(!isalnum(s[right])) right--;
        else if(tolower(s[left]) != tolower(s[right])) return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}

int main(void){
    string str = "AbcdcbA,";
    cout << palindrome(str);
    return 0;
}