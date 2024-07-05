#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "My.name.is.Manish";
    vector<string> v;
    int n = s.size();
    string str = "";
    for(int i = 0; i < n; i++){
        if(s[i] != '.'){
            str += s[i];
        }
        else{
            v.push_back(str);
            str = "";
        }
    }
    v.push_back(str);
    reverse(v.begin(), v.end());

    string res = "";
    for(int i = 0; i < v.size(); i++){
        res += v[i];
        res += '.';
    }
    res.pop_back();

    cout << res << endl;
    return 0;
}