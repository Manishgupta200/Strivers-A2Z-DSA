// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-missing-and-repeating
// https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_6828164?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        // // int *a=new int[2];
        // vector<int> a(2, 0);
        // unordered_map<int, int> mp;
        // // One number 'A' from set {1, 2, N} is missing and one number 'B' occurs twice in array.
        // for(int i = 1; i <= n; i++){
        //     mp[i] = 0;
        // }
        // for(int i = 0; i < n; i++){
        //     mp[arr[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second == 0) a[1] = it.first;
        //     if(it.second == 2) a[0] = it.first;
        // }
        // return a;
        
        
        // 2nd method
        // Optimal
        // long long sn = 1LL * n * (n + 1) / 2;
        // long long s2n = 1LL * n * (n + 1) * (2 * n + 1) / 6;
        // long long s = 0;
        // long long s2 = 0;
        
        // for(int i = 0; i < n; i++){
        //     s += arr[i];
        //     s2 += ((long long)arr[i] * (long long)arr[i]);
        // }
        
        // long long val1 = s - sn;
        // long long val2 = s2 - s2n;
        // val2 = val2 / val1;
        // long long x = (val1 + val2) / 2;
        // long long y = x - val1;
        // return {(int)x, (int)y};
        
        
        // 3rd method
        int xr = 0;
        for(int i = 0; i < n; i++){
            xr ^= arr[i];
            xr ^= (i+1);
        }
        
        int bitNo = 0;
        while(1){
            if((xr & (1 << bitNo)) != 0){
                break;
            }
            bitNo++;
        }
        
        int zero = 0;
        int one = 0;
        for(int i = 0; i < n; i++){
            if((arr[i] & (1 << bitNo)) != 0){
                one ^= arr[i];
            }
            else{
                zero ^= arr[i];
            }
        }
        
        for(int i = 1; i <= n; i++){
            if((i & (1 << bitNo)) != 0){
                one ^= i;
            }
            else{
                zero ^= i;
            }
        }
        
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == zero) cnt++;
        }
        if(cnt == 2) return {zero, one};
        return {one, zero};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends