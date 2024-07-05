// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    string reverseRes(string &str){
        int s = 0, e = str.length()-1;
        while(s < e){
            swap(str[s++], str[e--]);
        }
        return str;
    }
public:
    string removeDuplicates(string s) {
        stack<int> p;
        p.push(s[0]);
        for(int i = 1; i < s.length(); i++){
            if(!p.empty()){
                if(s[i] == p.top()){
                    p.pop();
                }
                else{
                    p.push(s[i]);
                }
            }
            else{
                p.push(s[i]);
            }
        }

        string res = "";
        while(!p.empty()){
            res += p.top();
            p.pop();
        }
        reverseRes(res);
        return res;
    }
};

int main(void){

    return 0;
}