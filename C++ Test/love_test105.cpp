// https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
#include<bits/stdc++.h>
using namespace std;

    int gcd(int A, int B) 
	{ 
	    // code here
	   // while(A > 0 && B > 0){
	   //     if(A > B) A = A % B;
	   //     else B = B % A;
	   // }
	    
	   // if(A == 0) return B;
	   // else return A;
	      
	   //   2nd method
	//    if(A == 0) return B;
	//    if(B == 0) return A;
	   
	//    while(A != B){
	//        if(A > B) A = A - B;
	//        else B = B - A;
	//    }
	//    return A;

        // 3rd method
       if(B == 0) return A;
	   else{
        // cout << A << " " << B << endl;
        return gcd(B, A%B);
       }
	} 

int main(void){
    cout << gcd(3211, 4598) << endl;
    return 0;
}