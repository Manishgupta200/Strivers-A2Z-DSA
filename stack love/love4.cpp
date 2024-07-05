// Delete middle element from stack
// https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
#include <bits/stdc++.h> 
using namespace std;

void solve(stack<int>&inputStack, int N, int count){
   if(count == N/2){
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();

   // recursive call
   solve(inputStack, N, ++count);

   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   // stack<int> st;
   // int count = (N+1) / 2;
   // if((N+1) % 2 == 0) count = count-1;
   
   // while(count-- != 0){
   //    st.push(inputStack.top());
   //    inputStack.pop();
   // }
   // if(!inputStack.empty()){
   //    inputStack.pop();
   // }
   // while(!st.empty()){
   //    inputStack.push(st.top());
   //    st.pop();
   // }


   // 2nd way
   int count = 0;
   solve(inputStack, N, count);
}