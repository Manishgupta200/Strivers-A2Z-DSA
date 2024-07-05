// IMPLIMENT 'K' Queue in a single array of size 'N'

#include<bits/stdc++.h>
using namespace std;

class KQueue{
    public:
    int N, K;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freeSpot;

    // constructor
    KQueue(int n, int k){
        this->N = n;
        this->K = k;

        arr = new int[n];

        front = new int[k];
        rear = new int[k];
        for(int i = 0; i < k; i++){
            front[i] = -1;
            rear[i] = -1;
        }
        // memset(front, -1, (k*4));
        // memset(rear, -1, (k*4));

        next = new int[n];
        for(int i = 0; i < n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        freeSpot = 0;
    }

    void enqueue(int data, int qn){
        // check for overflow
        if(freeSpot == -1){
            cout << "Overflow queue, no empty space available\n";
            return;
        }

        // find index free index
        int index = freeSpot;

        // update freeSpot
        freeSpot = next[index];

        // if we are going to insert first element
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            // linke new element to the previous element
            next[rear[qn-1]] = index;
        }

        // update next
        next[index] = -1;   // as no more space available in this slot to insert after insertion in current data

        // update rear
        rear[qn-1] = index;

        // insert data to arr at index position
        arr[index] = data;
    }

    int dequeue(int qn){
        // check for underflow
        if(front[qn-1] == -1){
            cout << "Underflow, queue is empty\n";
            return -1;
        }

        // find index to pop
        int index = front[qn-1];

        // front ko aage badhao
        front[qn-1] = next[index];

        // freeSpot ko manage kare
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};

int main(void){
    KQueue q(10, 3);

    q.enqueue(5, 1);
    q.enqueue(10, 2);
    q.enqueue(15, 1);
    q.enqueue(20, 1);

    cout << q.arr[1] << endl;
    cout << q.dequeue(2) << endl;
    cout << q.arr[1] << endl;

    cout << q.dequeue(2) << endl;

    q.enqueue(18, 2);
    cout << q.arr[1] << endl;
    return 0;
}