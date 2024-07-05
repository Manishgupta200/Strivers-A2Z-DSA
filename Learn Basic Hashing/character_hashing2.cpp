#include<iostream>
using namespace std;

int main(void){
    string s;
    cout << "Enter s: ";
    cin >> s;

    // precompute
    int hashh[256] = {0}; // 256 because The maximum number of characters that can be represented in extended ASCII is 256
    for(int i = 0; i < s.size(); i++){
        hashh[s[i]]++;
    }

    int q;
    cout << "Enter no. of query: ";
    cin >> q;
    cout << "Enter query value\n";
    while(q--){
        char c;
        cin >> c;

        // fetch
        cout << "Times of " << c  << ": " << hashh[c] << endl;
    }

    return 0;
}