#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// pattern

int main(){
    int N = 6;
    vector<int> A;
    // A = {8, 9, 7, 5, 3, 1};
    A.push_back(8);
    A.push_back(9);
    A.push_back(7);
    A.push_back(5);
    A.push_back(3);
    A.push_back(1);
    vector<int> B;
    // B = {5, 4, 2, 5, 1, 7};
    B.push_back(8);
    B.push_back(9);
    B.push_back(7);
    B.push_back(5);
    B.push_back(3);
    B.push_back(1);
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

for(auto it : A)
    cout << it << " ";
cout << endl;

for(auto it : B)
    cout << it << " ";
cout << endl;

    if(A == B){
        cout << true;
    }
    else{
        cout << false;
    }

    return 0;
}