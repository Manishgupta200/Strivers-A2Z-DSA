// https://www.codingninjas.com/studio/problems/nth-root-of-m_1062679?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

// int isFound(int n, int mid){
//   int res = 1;
//   for(int i = 0; i < n; i++){
//     res *= mid;
//   }
//   return res;
// }

int isFound(int n, int m, int mid){
  // if > m return 2;
  // if = m return 1;
  // if < m return 0;
  long long ans = 1;
  for(int i = 1; i <= n; i++){
    ans = ans * mid;
    if(ans > m) return 2;
  }
  if(ans == m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
    // Write your code here.
    // BRUTE FORCE APPROACH
    // TC -> O(Nth root(M)), as we break
    // int ans = -1;
    // for(int i = 1; i < m; i++){
    //   int val = 1;
    //   for(int j = 0; j < n; j++){
    //     val *= i;
    //   }
    //   if(val == m) return i;
    //   else if(val > m) return -1;;
    // }
    // return ans;


    // 2nd method
    // OPTIMISE
    // TC -> O((log m) base 2 * (log n) base 2;
    int low = 1, high = m;
    while(low <= high){
      int mid = low + (high - low) / 2;
      int res = isFound(n, m, mid);
      if(res == 1) return mid;
      else if(res == 2) high = mid - 1;
      else low = mid + 1;
    }
    return -1;
}