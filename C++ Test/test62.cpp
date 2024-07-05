#include<bits/stdc++.h>
using namespace std;

int main(void){
    string S = "ZVVO";
    map<char,int> mp;
	    string str="";
        // cout << mp['M'];
	    // for(auto i:S){
	    //     cout << mp[i] << " ";
	    //     mp[i]++;
	    //    // if(mp[i]==1){
	    //    //     str+=i;
	    //    // }
	    // }
        // cout << endl;
	    // for(auto x:mp){
	    //     cout<<x.first<<x.second<<endl;

	    // }


	    for(auto i : S){
	        mp[i]++;
	        if(mp[i] == 1){
	            str+= i;
	        }
	    }
        cout << str;
    return 0;
}