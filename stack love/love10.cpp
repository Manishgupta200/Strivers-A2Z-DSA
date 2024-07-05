// Minimum Cost To Make String Valid
// https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// TC -> O(n)
#include <bits/stdc++.h> 
using namespace std;

int findMinimumCost(string str) {
  // Write your code here
  int n = str.length();
  if(n % 2 == 1) return -1;
  stack<int> stk;
  for(int i = 0; i < n; i++){
    char ch = str[i];
    
    if(ch == '{'){
      stk.push(ch);
    } else {
      // stack contains closed braces
      if (!stk.empty() && stk.top() == '{'){
        stk.pop();
      }
      else{
        stk.push(ch);
      }
    }
  }

  // stack contains invalid expression
  int a = 0, b = 0;
  while(!stk.empty()){
    if(stk.top() == '{'){
      a++;
    }
    else{
      b++;
    }
    stk.pop();
  }
  return (a+1)/2 + (b+1)/2;
}