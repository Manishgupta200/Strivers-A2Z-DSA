// #include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<string> q){
    cout << "q: ";
    // while(!q.empty()){
    //     cout << q.front() << " ";       //if we place top() rather then front() then shows error
    //     q.pop();
    // }
    // cout << endl;

    int n = q.size();
    for(int i = 0; i < n; i++){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
}

int main(){
    // FIFO - (first in first out)      line of person to get movie ticket
    // ELements are inserted at the back (end) and are deleted from the front
    cout << "Queue implimentation\n";
    queue<string> q;
    q.push("love");
    q.emplace("kumar");
    q.push("babbar");

    cout << "Front: " << q.front() << ", " << "Back: " << q.back() << ", " << "Size: " << q.size() << endl;
    q.pop();
    cout << "Front: " << q.front() << ", " << "Back: " << q.back() << ", " << "Size: " << q.size() << endl;

    q.push("gupta");
    cout << "Front: " << q.front() << ", " << "Back: " << q.back() << ", " << "Size: " << q.size() << endl;

    printQueue(q);
    cout << q.back();
    return 0;
}