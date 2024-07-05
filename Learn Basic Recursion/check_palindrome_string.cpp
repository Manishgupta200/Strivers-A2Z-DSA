#include<iostream>
using namespace std;

// check string is palindrome or not
// Time complexity is O(n/2)
// Space complexity is O(n/2) . i.e, Auxillary stack space
bool f(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    f(i+1, s);
}

int main(void){
    string str = "MADAM";
    cout << f(0, str) << endl;
    return 0;
}