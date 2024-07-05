#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s = "abca";
    int i = 0;
    sort(s.begin(), s.end());
    
    do{
        // cout << s << endl;
        i++;
    }while(next_permutation(s.begin(), s.end()));
    cout << "Total number of permutation: " << i << endl;
    return 0;
}