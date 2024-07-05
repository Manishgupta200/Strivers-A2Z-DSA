#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> reverseV(vector<int> &v){
        int s = 0;
        int e = v.size()-1;
        while(s < e){
            swap(v[s++], v[e--]);
        }
        return v;
    }
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1;
        int j = 0;
        long long int sum = 0;
        while(i >= 0){
            int digit = num[i];
            sum = sum + (num[i] * pow(10, j));
            j++;
            i--;
        }
        long long int ans = sum + k;
        
        vector<int> v;
        while(ans != 0){
            int lastDigit = ans % 10;
            v.push_back(lastDigit);
            ans /= 10;
        }
        vector<int> finalRes = reverseV(v);
        return finalRes;
    }
};