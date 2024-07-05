#include<iostream>
#include<stack>
using namespace std;

int main(void){
    stack<int> st;
    st.push(2);
    st.push(3);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;
    return 0;
}