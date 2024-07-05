#include<iostream>
using namespace std;

int main(void){
    string s;
    cout << "Enter s: ";
    cin >> s;

    // precompute
    int hashh[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hashh[s[i] - 'a']++;
    }

    int q;
    cout << "Enter no. of query: ";
    cin >> q;
    cout << "Enter query value\n";
    while(q--){
        char c;
        cin >> c;

        // fetch
        cout << "Times of " << c  << ": " << hashh[c - 'a'] << endl;
    }

    return 0;
}