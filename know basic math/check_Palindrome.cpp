// https://practice.geeksforgeeks.org/problems/palindrome0746/1
// https://leetcode.com/problems/palindrome-number/
#include<iostream>
using namespace std;

		string is_palindrome(int n)
		{
		    // Code here.
		  //  vector<int> v1;
		  //  vector<int> v2;
		  //  while(n != 0){
		  //      v1.push_back(n % 10);
		  //      n /= 10;
		  //  }
		    
		  //  int size = v1.size();
		  //  while(size){
		  //      v2.push_back(v1[size-1]);
		  //      size--;
		  //  }
		  //  return (v1 == v2) ? "Yes" : "No";
		  
		  //another approach
          
		  int m = n;
		  int res = 0;
		  while(m != 0){
		      int rem = m % 10;
		      res = rem + (res * 10);
		      m /= 10;
		  }
		  if(n == res)  return "Yes";
		  else          return "No";
		    
		}

int main(void){
    int n = 121;
    cout << is_palindrome(n) << endl;
    return 0;
}