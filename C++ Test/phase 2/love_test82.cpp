// Count Ways To Reach The N-th Stairs
// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=0
// BRUTE_FORCE_APPROACH
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }
    return (countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2));
}

int main(void){
    cout << countDistinctWays(5) << endl;
    return 0;
}