// UNCOMPLETE
#include<bits/stdc++.h>
using namespace std;

int main(void){
        vector<int> nums = {11, 5, 2, 10, 4, 12};
        int k = 11;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if((nums[i] + nums[j]) % k == 0){
                    cout << nums[i] << " " << nums[j] << endl;
                }
            }
        }
    return 0;
}