// First non-repeating character in a stream
// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
// https://leetcode.com/problems/first-unique-character-in-a-string/description/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char, int> mp;
		    queue<char> q;
		    string ans = "";
		    
		    for(int i = 0; i < A.length(); i++){
		        char ch = A[i];
		        
		      //  increase count
		        mp[ch]++;
		        
		      //  push ch in q
		        q.push(ch);
		        
		        while(!q.empty()){
		          //  repeating character
		          if(mp[q.front()] > 1){
		              q.pop();
		          }
		          else{
		              //unique character
		              ans += q.front();
		              break;
		          }
		          
		        }
		        
		        if(q.empty()){
		              ans += '#';
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends