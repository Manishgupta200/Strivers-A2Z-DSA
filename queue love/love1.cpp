// IMPLIMENTATION QUEUE
// https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

#include <bits/stdc++.h> 
using namespace std;
class Queue {
public:
    int fronts;
    int rear;
    int* arr;
    int size;
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        fronts = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return (fronts == rear);
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size-1){
            // overfolw
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(fronts == rear){
            fronts = 0;
            rear = 0;
            return -1;
        }
        else{
            int element = arr[fronts];
            fronts++;
            return element;
        }
    }

    int front() {
        // Implement the front() function
        if(fronts == rear){
            return -1;
        }
        else{
            return arr[fronts];
        }
    }
};