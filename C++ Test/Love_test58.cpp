#include<iostream>
using namespace std;
// finding n th term of AP

int seriesAP(int n){
    return (3*n + 7);
}
int main(void){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << n << " th term of AP is : " << seriesAP(n) << endl;
    return 0;
}