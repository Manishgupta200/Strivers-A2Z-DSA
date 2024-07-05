#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

    int main(){
        int first = 110;
        int *p = &first;
        int **q = &p;
        int second = (**q)++ + 9;
        cout << first << " " << second << endl; 
    }