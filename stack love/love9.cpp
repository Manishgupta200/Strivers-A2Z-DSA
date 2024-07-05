// Redundant Brackets
// https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
// TC -> O(n)
#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> stk;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            stk.push(ch);
        }
        else{
            if(ch == ')'){
                // ch ya to ')' h ya phir lower case letter
                int redundent = true;
                // check operator is present inside two bracket or not
                while(stk.top() != '('){
                    char tp = stk.top();
                    if(tp == '+' || tp == '-' || tp == '*' || tp == '/'){
                        redundent = false;
                    }
                    stk.pop();
                }
                if(!stk.empty()){
                    stk.pop();
                }
                
                if(redundent == true){
                    return true;
                }
            }
        }
    }
    return false;
}
