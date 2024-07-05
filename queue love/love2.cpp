// Circular Queue Implementation
// https://www.codingninjas.com/studio/problems/circular-queue_1170058?leftPanelTab=1&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

#include <bits/stdc++.h> 
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int rear;
    int front;
    int size;

    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        this->size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        // overflow check
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1) % (size-1))){
            // overflow
            return false;
        }
        else if(front == -1){
            // empty
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            // insertion in circular position
            rear = 0;
        }
        else{
            // normal push
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        // empty check
        if(front == -1){
            // underflow
            return -1;
        }
        int element = arr[front];
        // single element in circular-queue
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            // dequeue from last position
            front = 0;
        }
        else{
            // normal deque
            front++;
        }
        return element;
    }
};