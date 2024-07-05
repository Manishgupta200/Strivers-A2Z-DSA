#include<bits/stdc++.h>
using namespace std;

int i = 0;
bool palindromeCheck(string &s){
    // check palindrome
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    i++;
    palindromeCheck(s);
}

bool isPalindrome(string &s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    reverse(s.begin(), s.end());
    vector<char> v;

    for(int i = 0; i <= 96; i++){
        v.push_back(i);
    }
    for(int j = 123; j <= 127; j++){
        v.push_back(j);
    }

    for(auto c : v){
        s.erase(remove(s.begin(), s.end(), c), s.end());
    }
    return palindromeCheck(s);
}

int main(void){
    string s = "0P";
    cout << isPalindrome(s) << endl;
    cout << s << endl;
    return 0;
}