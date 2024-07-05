// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/solutions/
#include<bits/stdc++.h>
using namespace std;

    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }

int main(void){
    string s, part;
    s = "daabcbaabcbc", part = "abc";
    cout << removeOccurrences(s, part) << endl;

    // int myints[] = { 10, 20, 30, 40 };
    // int * p;

    // p = find (myints, myints+4, 30);
    // if (p != myints+4)
    // cout << "Element found in myints: " << *p << '\n';

    string str = "12345678";
    str.erase(str.begin(), str.begin()+2);
    cout << str << endl;
    return 0;
}