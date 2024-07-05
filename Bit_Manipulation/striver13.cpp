#include<iostream>
#include<vector>
using namespace std;
// every no. appearing twice and two number appearing once.. return unique number
int main(void){
    // TC -> O(N)
    // SC -> O(1)
    vector<int> arr = {2, 1, 2, 5, 1, 4, 4, 7, 3, 3};
    int n = arr.size();
    int xorOfArr = 0;
    for(int i = 0; i < n; i++){
        xorOfArr = xorOfArr ^ arr[i];
    }

    int count = 0;
    while(xorOfArr != 0){
        if((xorOfArr & 1) == 1) break;
        count++;
        xorOfArr = xorOfArr >> 1;
    }

    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] & (1 << count)){  // if the count th bit is set or not
            xor1 ^= arr[i];
        }
        else{
            xor2 ^= arr[i];
        }
    }
    cout << xor1 << " " << xor2 << endl;
    return 0;
}