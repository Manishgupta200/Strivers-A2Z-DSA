// Sort a Stack
// https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
#include <bits/stdc++.h> 
using namespace std;

void sortedInsert(stack<int>& stk, int num){
	if((!stk.empty() && num > stk.top()) || stk.empty()){
		stk.push(num);
		return;
	}

	int val = stk.top();
	stk.pop();

	sortedInsert(stk, num);

	stk.push(val);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack, num);
}