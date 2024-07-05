// https://www.codingninjas.com/codestudio/problems/reverse-the-order-of-words-in-a-string_1264991?leftPanelTab=1
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string &str){
    int s = 0;
    for(int i = 0; i <= str.size(); i++){
        if(str[i] == ' ' || str[i] == '\0'){
            int e = i-1;
            while(s < e){
                swap(str[s++], str[e--]);
            }
            s = i+1;
        }
    }
    cout << str << endl;
    return str;
}

string reverseOrderWords(string str) {
    // Write your code here
    reverseWords(str);

    int s = 0, e = str.length()-1;
    while(s < e){
        swap(str[s++], str[e--]);
    }
    return str;
}

int main(void){
    string str = "My name is khan";
    cout << str << endl;
    cout << reverseOrderWords(str) << endl;
    return 0;
}