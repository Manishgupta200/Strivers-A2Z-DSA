#include<iostream>
#include<math.h>
using namespace std;
// VS CODE editor me change aa raha h.
// reverse the number
int main(void){
    int n = 12345;
    int ans = 0;
    int rem;
    int i = 0;
    while(n != 0){
        rem = n % 10;
        // ans = (ans * 10) + rem; 
        ans = ans + (rem * pow(10, i));
        n /= 10;
        i++;
        if(n == 0) break;       
    }
    cout << rem  << " " << ans << " " << n << " " << i << endl;

    return 0;
}