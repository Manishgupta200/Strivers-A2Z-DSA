// https://practice.geeksforgeeks.org/problems/expression-add-operators/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void solve(int ind, string S, int target, vector<string>& ans, string temp, long long prev, long long res){
        // base case
        if(ind == S.size()){
            if(res == target){
                ans.push_back(temp);
            }
            return;
        }
        
        string st = "";
        long long curr = 0;
        for(int i = ind; i < S.size(); i++){
            // for leading zero condition, we don't take this condition
            if(i > ind && S[ind] == '0'){
                break;
            }
            
            st += S[i];
            curr = curr * 10 + (S[i] - '0');
            
            if(ind == 0){
                solve(i+1, S, target, ans, temp + st, curr, curr);
            }
            else{
                solve(i+1, S, target, ans, temp + '*' + st, prev * curr,  res - prev + (prev * curr));
                solve(i+1, S, target, ans, temp + '+' + st, curr, res + curr);
                solve(i+1, S, target, ans, temp + '-' + st, -curr, res - curr);
            }
        }
    }
  public:
    vector<string> addOperators(string S, int target) {
        // code here
        vector<string> ans;
        string temp = "";
        long long prev = 0;
        solve(0, S, target, ans, temp, prev, 0);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends