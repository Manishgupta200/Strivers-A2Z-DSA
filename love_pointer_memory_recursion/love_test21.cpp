#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << endl << f << endl << p << endl;

    return 0;
}