// #include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

void printMini(priority_queue<int, vector<int> , greater<int>> mini){
    cout << "mini: ";
    while(!mini.empty()){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}

int poping(priority_queue<int, vector<int> , greater<int>> &mini){
    mini.pop();
    // cout << "Size of mini: " << mini.size() << endl;
    return mini.size();
}

int main(){
    // FIFO
    // max_heap
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(5);
    maxi.emplace(2);
    maxi.push(3);

    int n = maxi.size();
    cout << "Size of maxi: " << n << endl;

    cout << "maxi: ";
    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // min_heap
    priority_queue<int, vector<int> , greater<int>> mini;

    mini.push(9);
    mini.emplace(3);
    mini.emplace(5);
    mini.emplace(0);
    mini.push(7);

    int m = mini.size();
    cout << "size of mini: " << m << endl;
    printMini(mini);
    cout << "size of mini: " << m << endl;      // pop() does not occured in main function if we use it in seperate function. Use pass-by-pointer if want to execute changes in main function.
    
    cout << "mini khali h kya bhai: " << mini.empty() << endl;

    cout << poping(mini) << endl;
    cout << poping(mini) << endl;
    cout << poping(mini) << endl;
    cout << poping(mini) << endl;

    // In case of numeric values, we can multiply values with -1 and use max heap to get the effect of min heap.
    cout << "Priority Queue\n";
    int a[] = {1, 2, 3};
    priority_queue<int> pq1(a, a + 3);
    cout << "Max priority queue: ";
    while(pq1.empty() == false){
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
    int size_a = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < size_a; i++){
        a[i] = -a[i];
    }

    priority_queue<int> pq2(a, a + 3);
    cout << "Min priority queue: ";
    while(!pq2.empty()){
        cout << -pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;
    return 0;
}