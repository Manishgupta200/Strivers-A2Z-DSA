// https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13
#include <bits/stdc++.h> 
using namespace std;

void reverseStr(string &str, int i, int j){
	if(i > j){
		return;
	}
	swap(str[i], str[j]);

	reverseStr(str, i+1, j-1);
}

string reverseString(string str)
{
	// Write your code here.
	reverseStr(str, 0, str.length()-1);

	return str;
}