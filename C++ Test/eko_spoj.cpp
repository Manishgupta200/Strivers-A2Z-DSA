// https://www.spoj.com/problems/EKO/
#include<bits/stdc++.h>
using namespace std;

// TC -> O(n log(n));
bool isPossible(vector<int> &woods, int n, int m, int mid){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(woods[i] > mid){
            sum = sum + woods[i] - mid;
        }
    }
    // cout << sum << " ";
    if(sum >= m){
        return true;
    }
    return false;
}

int ekoSpoj(vector<int> &woods, int n, int m){
    int s = 0, ans = -1;
    int maxm = -1;
    for(int i = 0; i < n; i++){
        if(maxm < woods[i]) maxm = woods[i];
    }
    int e = maxm;
    int mid = s + (e - s) / 2;
    cout << s << "  " << e << " " << mid << endl;
    while(s <= e){
        if(isPossible(woods, n, m, mid)){
            ans = mid;
            s = mid + 1;    // need to find maximum
            // Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        cout << s << " " << e << " " << ans << endl;
    }
    return ans;
}

int main(void){
    vector<int> v = {20, 15, 10, 17};
    int n = v.size();
    int m = 7;
    cout << "ans: " << ekoSpoj(v, n, m);
    return 0;
}