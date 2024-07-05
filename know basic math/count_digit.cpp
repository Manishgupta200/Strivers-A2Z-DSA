// https://practice.geeksforgeeks.org/problems/count-digits5716/1
#include<iostream>
#include<math.h>
using namespace std;

void countNum(long long int N){
    // time complexity = O(1)
    // space complexity = O(1)

    string S = to_string(N);
    int count = S.length(); //S.size();
    cout << "Number of digit in " << N << " is: " << count << endl;
}

void countNum2(long long int N){
    // time complexity = O(N)
    // space complexity = O(1)

    long long int k = N;
    long long int res = N / 10;
    int count = 0;
    while(N != 0){
        N /= 10;
        count++;
    }
    // for first digit.. it does not count in while loop. So, need to increment by once.   
    cout << "Number of digit in " << k << " is: " << count << endl;
}

void countNum3(long long int N){
    // time complexity = O(1)
    // space complexity = O(1)
    
    // long long int count = floor(log10(N) + 1);
    long long int count = int(log10(N) + 1);
    cout << "Number of digit in " << N << " is: " << count << endl;

}

int main(){
    long long int N = 8394600090;

    countNum(N);
    countNum2(N);
    countNum3(N);
    return 0;

}