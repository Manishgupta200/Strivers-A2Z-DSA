// STL queue
#include<iostream>
#include<queue>
using namespace std;

int main(void){
    // deque<int> d;
    // d.push_front(12);
    // d.push_back(14);
    // d.pop_front();
    // d.pop_back();
    // cout << d.front() << " " << d.back() << endl;

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(7);
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    return 0;
}