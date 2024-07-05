#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int hash1[26] = {0};
    for(int i = 0; input1[i] != '\0'; i++){
        hash1[input1[i] - 'a']++;
    }

    int hash2[26] = {0};
    for(int i = 0; input2[i] != '\0'; i++){
        hash2[input2[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(hash1[i] != hash2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}