// Valid Parentheses
// https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s)
{
    // Write your code here.
    // TC -> O(N)
    // SC -> O(N)
    stack<int> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
          if (!st.empty()) {
            if ((s[i] == ')' && st.top() == '(') ||
                (s[i] == '}' && st.top() == '{') ||
                (s[i] == ']' && st.top() == '[')) {
              st.pop();
            }
            else{
                return false;
            }
          }
          else{
              return false;
          } 
        }
    }
    return st.empty();
}