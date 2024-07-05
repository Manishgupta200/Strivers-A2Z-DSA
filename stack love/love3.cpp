// reverse a string using stack
// TC -> O(n)
// SC -> O(n)
#include<iostream>
#include<stack>
using namespace std;

int main(void){
    string str = "Manish";
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }

    string res = "";
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res << endl;
    return 0;
}