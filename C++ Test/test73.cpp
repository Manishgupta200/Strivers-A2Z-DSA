#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n = 34;
    int d = 2;
    vector<int> v;
    int m = n;
    int left_shift = m << d;
    int p = n;
    v.push_back(left_shift);

    int right_shift = p >> d;
    v.push_back(right_shift);
    cout << v[0] << " " << v[1];
    return 0;
}